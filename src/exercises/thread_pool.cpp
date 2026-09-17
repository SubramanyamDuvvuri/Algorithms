#include <cassert>
#include <condition_variable>
#include <cstddef>
#include <functional>
#include <future>
#include <iostream>
#include <mutex>
#include <queue>
#include <stdexcept>
#include <thread>
#include <type_traits>
#include <utility>
#include <vector>

class ThreadPool {
public:
    explicit ThreadPool(std::size_t worker_count) {
        if (worker_count == 0) {
            throw std::invalid_argument{"worker_count must be greater than zero"};
        }

        workers_.reserve(worker_count);
        for (std::size_t i = 0; i < worker_count; ++i) {
            workers_.emplace_back([this] { worker_loop(); });
        }
    }

    ~ThreadPool() {
        shutdown();
    }

    ThreadPool(const ThreadPool&) = delete;
    ThreadPool& operator=(const ThreadPool&) = delete;

    template <typename F>
    auto submit(F&& function) -> std::future<std::invoke_result_t<F>> {
        using Result = std::invoke_result_t<F>;

        auto task = std::make_shared<std::packaged_task<Result()>>(std::forward<F>(function));
        auto future = task->get_future();

        {
            std::lock_guard lock{mutex_};
            if (stopped_) {
                throw std::runtime_error{"submit on stopped ThreadPool"};
            }
            tasks_.push([task] { (*task)(); });
        }

        cv_.notify_one();
        return future;
    }

    void shutdown() {
        {
            std::lock_guard lock{mutex_};
            if (stopped_) {
                return;
            }
            stopped_ = true;
        }

        cv_.notify_all();

        for (auto& worker : workers_) {
            if (worker.joinable()) {
                worker.join();
            }
        }
    }

private:
    void worker_loop() {
        while (true) {
            std::function<void()> task;

            {
                std::unique_lock lock{mutex_};
                cv_.wait(lock, [this] { return stopped_ || !tasks_.empty(); });

                if (stopped_ && tasks_.empty()) {
                    return;
                }

                task = std::move(tasks_.front());
                tasks_.pop();
            }

            task();
        }
    }

    std::mutex mutex_;
    std::condition_variable cv_;
    std::queue<std::function<void()>> tasks_;
    std::vector<std::thread> workers_;
    bool stopped_{false};
};

int main() {
    ThreadPool pool{4};
    auto a = pool.submit([] { return 20; });
    auto b = pool.submit([] { return 22; });

    assert(a.get() + b.get() == 42);

    auto failing = pool.submit([]() -> int {
        throw std::runtime_error{"task failed"};
    });

    try {
        (void)failing.get();
        assert(false);
    } catch (const std::runtime_error&) {
        std::cout << "exception propagated through future\n";
    }

    // TODO: Add queued/active/completed metrics and bounded-queue backpressure.
}

