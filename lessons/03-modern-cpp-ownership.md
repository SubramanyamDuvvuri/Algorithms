# 03 - Modern C++ Ownership

Goal: master lifetime, RAII, smart pointers, move semantics, and exception safety.

## Ownership

Ownership answers one question: who is responsible for releasing the resource?

Resources include:

- Heap memory.
- Files.
- Sockets.
- Locks.
- Threads.
- Database connections.
- GPU buffers.
- Temporary directories.

C++ wants ownership to be visible in types.

## RAII

RAII means Resource Acquisition Is Initialization. Acquire in the constructor. Release in the destructor.

```cpp
class LockGuard {
public:
    explicit LockGuard(std::mutex& mutex) : mutex_{mutex} {
        mutex_.lock();
    }

    ~LockGuard() {
        mutex_.unlock();
    }

    LockGuard(const LockGuard&) = delete;
    LockGuard& operator=(const LockGuard&) = delete;

private:
    std::mutex& mutex_;
};
```

You normally use `std::lock_guard` or `std::scoped_lock`, but writing one teaches the pattern.

## Smart Pointers

Use `std::unique_ptr<T>` for single ownership.

Use `std::shared_ptr<T>` only when shared lifetime is truly required.

Use `std::weak_ptr<T>` to break ownership cycles or observe a shared object without extending lifetime.

Do not use smart pointers to avoid thinking. A plain value or reference is often better.

## Move Semantics

Moving transfers resources from one object to another.

After a move, the source object must be valid but its value is unspecified unless the type documents more.

```cpp
std::vector<int> a{1, 2, 3};
std::vector<int> b{std::move(a)};
```

Do not use `a` as if it still has its old contents.

## Rule Of Five

If you manually manage a resource, define or delete:

- Destructor.
- Copy constructor.
- Copy assignment.
- Move constructor.
- Move assignment.

But prefer the rule of zero by composing existing RAII types.

## Exception Safety

Levels:

- No guarantee: object may be corrupted.
- Basic guarantee: invariants hold, no leaks.
- Strong guarantee: operation either succeeds or has no effect.
- No-throw guarantee: operation never throws.

Good C++ code states which operations may throw and keeps objects valid after failure.

## Ownership Design Examples

```cpp
class Parser {
public:
    explicit Parser(std::string_view input); // borrows text
};

class Worker {
public:
    explicit Worker(std::unique_ptr<JobQueue> queue); // owns queue
};

class Registry {
public:
    void add(std::shared_ptr<Service> service); // shares lifetime
};
```

## Drills

1. Implement a file wrapper that closes its handle exactly once.
2. Implement a copy-disabled, move-enabled socket wrapper.
3. Build a tree with `std::unique_ptr` children and non-owning parent pointers.
4. Convert a raw-pointer API into ownership-explicit modern C++.
5. Make a vector-like class that follows rule of five. Then delete it and explain why `std::vector` is better.

