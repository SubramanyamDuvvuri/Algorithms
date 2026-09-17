# 05 - Concurrency And The C++ Memory Model

Goal: write concurrent C++ that is correct first and fast only when measured.

## Topics

- Threads and thread ownership.
- `std::jthread` and cooperative cancellation.
- Mutexes and scoped locks.
- Condition variables and predicates.
- Futures and promises.
- Thread pools.
- Data races as undefined behavior.
- Happens-before.
- Atomics.
- Memory ordering.
- Safe shutdown.
- Backpressure.

## Memory Model Basics

The compiler and CPU may reorder operations unless synchronization prevents it.

Mutex unlock synchronizes with a later lock of the same mutex.

Atomic operations can create ordering relationships depending on memory order.

Start with sequential consistency. Use weaker orderings only with a written proof.

## Shutdown Is A Feature

Every concurrent design must answer:

- How do workers stop?
- Can producers submit after stop?
- Are queued tasks drained or discarded?
- Can destructors block?
- Can callbacks run while locks are held?
- How are exceptions propagated?

## Hard Labs

1. Build bounded blocking queue.
2. Build thread pool with futures, cancellation, metrics, and stop modes.
3. Add backpressure to concurrent logger.
4. Create and fix deadlock using lock ordering.
5. Write happens-before proof for a producer-consumer queue.

## Mastery Questions

- What is a data race?
- Why are condition variable predicates required?
- What is the difference between race condition and data race?
- When should you use atomics instead of mutexes?
- What is safe publication?

