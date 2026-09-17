# 06 - Lock-Free And Low-Latency Design

Goal: understand advanced concurrency without fooling yourself.

## Warning

Lock-free code is not automatically faster. It is often harder to prove, test, debug, and maintain.

Use it when:

- Blocking is unacceptable.
- Contention profile justifies it.
- You can prove correctness.
- You can test heavily.
- The team can maintain it.

## Topics

- Atomic operations.
- Compare-exchange loops.
- ABA problem.
- Memory reclamation.
- Hazard pointers conceptually.
- Epoch reclamation conceptually.
- SPSC, MPSC, MPMC queues.
- Ring buffers.
- Latency percentiles.
- Tail latency.

## Low-Latency Thinking

Avoid:

- Allocation on hot path.
- Locks on hot path if measured problematic.
- Logging synchronously on hot path.
- Unbounded queues.
- Cache-line bouncing.
- Branch-heavy unpredictable code.

## Hard Labs

1. Implement SPSC ring buffer.
2. Benchmark mutex queue vs SPSC queue.
3. Demonstrate ABA conceptually.
4. Design memory reclamation for a lock-free stack on paper.
5. Optimize order book add/cancel/match hot path.

## Mastery Questions

- What does lock-free mean?
- What does wait-free mean?
- What is ABA?
- Why is memory reclamation hard?
- What is p99 latency and why does it matter?

