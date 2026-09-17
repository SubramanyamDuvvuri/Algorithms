# 06 - Performance And Memory

Goal: reason about speed using measurement, memory layout, cache behavior, and algorithmic cost.

## Performance Rule

Do not guess. Measure.

But know enough about machines to form good hypotheses.

## Cost Model

Think about:

- Big-O complexity.
- Constant factors.
- Allocation frequency.
- Cache locality.
- Branch prediction.
- Lock contention.
- I/O latency.
- Serialization cost.
- System calls.

## Memory Layout

Contiguous memory is usually friendly to CPU caches.

```cpp
std::vector<Order> orders; // often better than list<Order>
```

Structure layout matters:

- Padding can increase object size.
- Hot and cold fields can be separated.
- False sharing can hurt multithreaded code.

## Allocation

Allocations are often expensive because they involve synchronization, metadata, fragmentation, and cache effects.

Reduce allocations by:

- Reserving containers.
- Reusing buffers.
- Using value types.
- Avoiding unnecessary `std::function` allocations.
- Being careful with string concatenation.

## Benchmarking

A useful benchmark:

- Has realistic data.
- Warms up when appropriate.
- Avoids dead-code elimination.
- Measures several input sizes.
- Reports variance.
- Compares alternatives fairly.

## Profiling

Profiling tells you where time goes. It may disagree with your intuition.

Do not optimize code that is not hot unless it also improves clarity.

## Drills

1. Compare `std::vector`, `std::list`, and `std::deque` traversal for one million integers.
2. Implement a parser that minimizes allocations.
3. Optimize an LRU cache after measuring it.
4. Demonstrate false sharing with two counters and fix it with padding or layout changes.
5. Write a short performance report: hypothesis, benchmark, result, conclusion.

