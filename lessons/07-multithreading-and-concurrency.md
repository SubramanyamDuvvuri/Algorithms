# 07 - Multithreading And Concurrency

Goal: write correct concurrent C++ and understand why it is hard.

## Core Vocabulary

- Concurrency: multiple tasks are in progress over the same time period.
- Parallelism: multiple tasks execute at the same instant.
- Data race: two threads access the same memory, at least one writes, and there is no synchronization.
- Race condition: program result depends on timing.
- Deadlock: threads wait forever on each other.
- Livelock: threads keep reacting but make no progress.
- Starvation: a thread waits too long because others keep winning.

Data races are undefined behavior in C++.

## Threads

Use `std::jthread` when available because it joins automatically and supports cooperative cancellation.

Use `std::thread` when you need lower-level control, but always make sure it is joined or detached.

Detached threads are dangerous in application code because lifetime becomes unclear.

## Mutexes

Protect shared mutable state with mutexes.

```cpp
class Counter {
public:
    void increment() {
        std::lock_guard lock{mutex_};
        ++value_;
    }

    int value() const {
        std::lock_guard lock{mutex_};
        return value_;
    }

private:
    mutable std::mutex mutex_;
    int value_{0};
};
```

Keep lock scopes small and obvious.

## Condition Variables

Use condition variables to wait for state changes.

Always wait with a predicate:

```cpp
cv.wait(lock, [&] { return !queue.empty() || stopped; });
```

This handles spurious wakeups and missed-notification style bugs.

## Atomics

Atomics are for shared variables accessed without locks.

Use them for simple counters, flags, and low-level synchronization. Do not reach for atomics because they seem faster. They are easy to get subtly wrong.

Start with:

- `std::atomic<bool>`
- `std::atomic<int64_t>`
- `memory_order_seq_cst`

Learn relaxed/acquire/release only after you can explain the happens-before relationship.

## Futures And Async

`std::future` represents a result that may arrive later.

`std::async` can be useful, but its launch behavior and lifecycle need care. For production systems, explicit thread pools are often clearer.

## Thread Pool Design

A basic thread pool needs:

- Worker threads.
- Task queue.
- Mutex.
- Condition variable.
- Stop flag.
- Safe shutdown.
- Exception propagation for submitted tasks.

## Concurrency Checklist

For every shared object, answer:

- Which threads access it?
- Who owns it?
- What protects it?
- What order are locks acquired?
- Can callbacks re-enter code while a lock is held?
- What happens during shutdown?

## Drills

1. Implement a blocking queue.
2. Implement a thread pool that returns futures.
3. Add graceful shutdown to the thread pool.
4. Create a deadlock intentionally, then remove it with lock ordering.
5. Implement a rate limiter using atomics first, then using a mutex, and compare clarity.
6. Build a producer-consumer log pipeline.

