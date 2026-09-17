# Modern C++ Systems Engineering: 36 Lessons

This is the canonical course. Complete it in order. Every lesson requires working code, automated tests, complexity analysis, a design note, failure cases, and a review checklist. Reading alone does not complete a lesson.

## Part I - The C++ Machine Model

1. [Pointers, Addresses, and Lifetime](lesson-01-pointers.md)
2. [Arrays, Decay, `std::array`, and `std::span`](lesson-02-arrays-and-span.md)
3. [Structs, Padding, Alignment, and Layout](lesson-03-object-layout.md)
4. [Enums and Type-Safe Flags](lesson-04-enums.md)
5. [Unions, Variants, and Tagged State](lesson-05-variants.md)
6. [References, Value Categories, and Lifetime](lesson-06-references.md)
7. [Constructors, Destructors, RAII, and Special Members](lesson-07-raii.md)
8. [Inheritance, Runtime Polymorphism, and Slicing](lesson-08-polymorphism.md)
9. [Operators, Value Semantics, and Conversions](lesson-09-value-semantics.md)

## Part II - Modern C++

10. [Smart Pointers and Ownership Design](lesson-10-smart-pointers.md)
11. [Containers and Iterator Invalidation](lesson-11-containers.md)
12. [Iterators, Algorithms, Ranges, and Views](lesson-12-ranges.md)
13. [Move Semantics, Forwarding, and Copy Elision](lesson-13-move-semantics.md)
14. [Template Foundations](lesson-14-templates.md)
15. [Advanced Generic Programming](lesson-15-generic-programming.md)
16. [Concepts and Compile-Time Programming](lesson-16-concepts-constexpr.md)
17. [Errors, Exceptions, `expected`, and Guarantees](lesson-17-error-handling.md)

## Part III - Data Structures and Algorithms

18. [Complexity, Benchmarking, and Measurement](lesson-18-complexity-benchmarking.md)
19. [Implementing Core Data Structures](lesson-19-data-structures.md)
20. [Graphs and Graph Algorithms](lesson-20-graphs.md)
21. [Dynamic Programming and Greedy Algorithms](lesson-21-dp-greedy.md)

## Part IV - Concurrency

22. [Threads, Lifetime, and Data Races](lesson-22-threads.md)
23. [Mutexes, Deadlocks, and Coordination](lesson-23-synchronization.md)
24. [Atomics and the C++ Memory Model](lesson-24-atomics.md)
25. [Lock-Free Structures and Memory Reclamation](lesson-25-lock-free.md)
26. [Futures, Promises, Async, and Cancellation](lesson-26-async.md)
27. [Work-Stealing Thread Pool](lesson-27-work-stealing-pool.md)
28. [C++20 Coroutines from First Principles](lesson-28-coroutines.md)

## Part V - Performance Engineering

29. [Caches and Data-Oriented Design](lesson-29-cache-aware-design.md)
30. [Allocators and Memory Resources](lesson-30-allocators.md)
31. [SIMD, Auto-Vectorization, and Parallel STL](lesson-31-simd-parallel.md)

## Part VI - Software Architecture

32. [Modern C++ Design Patterns](lesson-32-modern-patterns.md)
33. [Hexagonal Architecture Without a Framework](lesson-33-hexagonal-architecture.md)
34. [Dynamic Libraries, ABI Stability, and Plugins](lesson-34-plugins-abi.md)
35. [ECS and Data-Oriented Architecture](lesson-35-ecs.md)
36. [Capstone: Multithreaded Order-Matching Engine](lesson-36-order-matching-engine.md)

## Graduation Standard

Graduate by defending Lesson 36 with code, tests, CMake, design document, ADRs, protocol and storage specifications, benchmark report, runbook, and postmortem. “It works on my machine” is not evidence.

