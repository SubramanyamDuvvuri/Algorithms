#include <cassert>
#include <cstdio>
#include <stdexcept>
#include <string>
#include <utility>

class File {
public:
    File(const char* path, const char* mode) : handle_{std::fopen(path, mode)} {
        if (handle_ == nullptr) {
            throw std::runtime_error{"failed to open file"};
        }
    }

    ~File() {
        close();
    }

    File(const File&) = delete;
    File& operator=(const File&) = delete;

    File(File&& other) noexcept : handle_{std::exchange(other.handle_, nullptr)} {}

    File& operator=(File&& other) noexcept {
        if (this != &other) {
            close();
            handle_ = std::exchange(other.handle_, nullptr);
        }
        return *this;
    }

    void write(std::string_view text) {
        const auto written = std::fwrite(text.data(), 1, text.size(), handle_);
        if (written != text.size()) {
            throw std::runtime_error{"failed to write full text"};
        }
    }

    bool valid() const {
        return handle_ != nullptr;
    }

private:
    void close() noexcept {
        if (handle_ != nullptr) {
            std::fclose(handle_);
            handle_ = nullptr;
        }
    }

    std::FILE* handle_{};
};

int main() {
    File file{"raii_lab_output.txt", "wb"};
    assert(file.valid());
    file.write("RAII closes this file even if later code throws.\n");

    File moved{std::move(file)};
    assert(moved.valid());
    assert(!file.valid());

    // TODO: Add read support, better error messages, and tests that prove close
    // happens exactly once.
}

