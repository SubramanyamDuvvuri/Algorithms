# 04 - Allocators, Memory, And Performance

Goal: understand memory cost deeply enough to design fast C++ systems.

## Topics

- Stack vs heap.
- Allocation cost.
- Fragmentation.
- Cache lines.
- Spatial and temporal locality.
- False sharing.
- Custom allocators.
- `std::pmr` memory resources.
- Object pools.
- Arena allocation.
- Data-oriented design.

## Performance Thinking

Performance comes from:

- Better algorithms.
- Less allocation.
- Better locality.
- Less synchronization.
- Fewer syscalls.
- Less serialization.
- Better batching.

## Allocator Use Cases

- Many short-lived objects: arena.
- Fixed-size objects: pool.
- Request-scoped allocations: monotonic buffer.
- Low-latency systems: preallocation.

## Hard Labs

1. Benchmark vector of structs vs struct of vectors.
2. Write an object pool and prove no double free.
3. Use `std::pmr::monotonic_buffer_resource` for request parsing.
4. Demonstrate false sharing.
5. Optimize a parser by reducing allocations.

## Mastery Questions

- What is cache locality?
- Why can linked lists be slow?
- When does preallocation help?
- What is false sharing?
- When are custom allocators dangerous?

