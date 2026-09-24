# C++ Systems and Algorithms: 42 Connected Lessons

This course progresses from C++ object mechanics to algorithms, data structures, concurrent systems, performance engineering, Linux/kernel internals, and GPU-aware design. It targets rigorous C++ interviews and real systems-engineering work sitting between application software engineering and embedded/low-level work; it is not an employer-specific syllabus. Each lesson has **ten small activities** in its linked assignment, numbered continuously from 1 to 420, and opens with a **What You Gain** section stating exactly what you can do afterward and why it matters. Complete them in order, testing each step before advancing.

Lessons 1-10 concentrate on language fundamentals: pointers, arrays, structs and unions, enums and typedef/using aliases, function pointers and callbacks, references, RAII, copy/move, templates, and ownership. Lessons 11-18 use those tools for Big-O, searching, sorting, structures, and algorithmic proof. Lessons 19-28 move into performance and concurrency. Lessons 29-34 go underneath the language entirely into Linux internals, syscalls, virtual memory, custom allocators, scheduling, and kernel modules. Lessons 35-42 apply everything to architecture and optional GPU/CUDA work, ending in an integrated capstone. The [packet format](packet-protocol.md) is a recurring small example in early chapters, not a separate prerequisite.

A course lesson explains the model and why it follows the previous one. Its assignment provides the actual TODO sequence. Use the matching `work/lesson-NN/main.cpp` comments as your in-editor checklist; use `tests.cpp` for tests and the other files for notes, design, and measurement. Preserve earlier correct code when building the next step.

## Part I: C++ Foundations

1. [Pointers, Addresses, and Lifetime](lesson-01-pointers.md) ([activities](../work/lesson-01/ASSIGNMENT.md))
2. [Arrays, Strings, and Non-Owning Views](lesson-02-arrays-and-span.md) ([activities](../work/lesson-02/ASSIGNMENT.md))
3. [Structs, Members, Unions, and Layout](lesson-03-object-layout.md) ([activities](../work/lesson-03/ASSIGNMENT.md))
4. [Enums, Type Aliases, and Named States](lesson-04-enums-aliases.md) ([activities](../work/lesson-04/ASSIGNMENT.md))
5. [Functions, Overloads, Function Pointers, and Callbacks](lesson-05-functions-callbacks.md) ([activities](../work/lesson-05/ASSIGNMENT.md))
6. [References, Const, Strings, and Value Categories](lesson-06-references-strings.md) ([activities](../work/lesson-06/ASSIGNMENT.md))
7. [Classes, Construction, Destruction, and RAII](lesson-07-classes-raii.md) ([activities](../work/lesson-07/ASSIGNMENT.md))
8. [Copy, Move, Operators, and Value Semantics](lesson-08-copy-move-values.md) ([activities](../work/lesson-08/ASSIGNMENT.md))
9. [Templates, Containers, Iterators, and Generic APIs](lesson-09-templates-containers.md) ([activities](../work/lesson-09/ASSIGNMENT.md))
10. [Polymorphism, Smart Pointers, Variants, and Errors](lesson-10-polymorphism-ownership.md) ([activities](../work/lesson-10/ASSIGNMENT.md))

## Part II: Algorithms and Data Structures

11. [Big-O, Invariants, and Algorithm Analysis](lesson-11-complexity.md) ([activities](../work/lesson-11/ASSIGNMENT.md))
12. [Searching, Sorting, and Selection](lesson-12-searching-sorting.md) ([activities](../work/lesson-12/ASSIGNMENT.md))
13. [Linked Structures, Stacks, Queues, and Deques](lesson-13-linear-structures.md) ([activities](../work/lesson-13/ASSIGNMENT.md))
14. [Hash Tables, Sets, and Heaps](lesson-14-hashing-heaps.md) ([activities](../work/lesson-14/ASSIGNMENT.md))
15. [Binary Trees, BSTs, Balanced Trees, and Tries](lesson-15-trees.md) ([activities](../work/lesson-15/ASSIGNMENT.md))
16. [Graph Representations and Traversal](lesson-16-graphs.md) ([activities](../work/lesson-16/ASSIGNMENT.md))
17. [Dynamic Programming, Greedy, and Proofs](lesson-17-dynamic-programming.md) ([activities](../work/lesson-17/ASSIGNMENT.md))
18. [Strings, Bit Manipulation, and Advanced Patterns](lesson-18-advanced-algorithms.md) ([activities](../work/lesson-18/ASSIGNMENT.md))

## Part III: Performance and Concurrency

19. [Benchmark Design and Profiling](lesson-19-benchmarking.md) ([activities](../work/lesson-19/ASSIGNMENT.md))
20. [Caches, Layout, and Allocators](lesson-20-cache-allocators.md) ([activities](../work/lesson-20/ASSIGNMENT.md))
21. [SIMD, Vectorization, and Parallel CPU Work](lesson-21-simd-parallel.md) ([activities](../work/lesson-21/ASSIGNMENT.md))
22. [Threads, Lifetime, and Data Races](lesson-22-threads.md) ([activities](../work/lesson-22/ASSIGNMENT.md))
23. [Mutexes, Deadlocks, and Coordination](lesson-23-synchronization.md) ([activities](../work/lesson-23/ASSIGNMENT.md))
24. [Atomics and the C++ Memory Model](lesson-24-atomics.md) ([activities](../work/lesson-24/ASSIGNMENT.md))
25. [Lock-Free Queues and Reclamation](lesson-25-lock-free.md) ([activities](../work/lesson-25/ASSIGNMENT.md))
26. [Futures, Promises, and Cancellation](lesson-26-async.md) ([activities](../work/lesson-26/ASSIGNMENT.md))
27. [Work-Stealing Thread Pool](lesson-27-work-stealing-pool.md) ([activities](../work/lesson-27/ASSIGNMENT.md))
28. [C++20 Coroutines and Async Lifetimes](lesson-28-coroutines.md) ([activities](../work/lesson-28/ASSIGNMENT.md))

## Part IV: Linux Internals, Kernel Programming, and Memory Systems

29. [Processes, Address Spaces, and the OS/Process Model](lesson-29-processes-and-address-spaces.md) ([activities](../work/lesson-29/ASSIGNMENT.md))
30. [Syscalls, the Kernel Boundary, and strace/ltrace](lesson-30-syscalls-and-kernel-boundary.md) ([activities](../work/lesson-30/ASSIGNMENT.md))
31. [Virtual Memory, mmap, and Custom Allocator Design](lesson-31-virtual-memory-and-allocators.md) ([activities](../work/lesson-31/ASSIGNMENT.md))
32. [Scheduling, Context Switches, and Cache/NUMA Topology](lesson-32-scheduling-and-topology.md) ([activities](../work/lesson-32/ASSIGNMENT.md))
33. [perf, Flamegraphs, and Production-Grade Benchmarking](lesson-33-perf-and-flamegraphs.md) ([activities](../work/lesson-33/ASSIGNMENT.md))
34. [Linux Kernel Modules: Writing, Loading, and Debugging](lesson-34-kernel-modules.md) ([activities](../work/lesson-34/ASSIGNMENT.md))

## Part V: Architecture and Accelerated Systems

35. [Patterns for Extensible C++ Systems](lesson-35-design-patterns.md) ([activities](../work/lesson-35/ASSIGNMENT.md))
36. [Ports, Adapters, and Testable Boundaries](lesson-36-architecture.md) ([activities](../work/lesson-36/ASSIGNMENT.md))
37. [Dynamic Libraries, C ABI, and Plugins](lesson-37-plugins-abi.md) ([activities](../work/lesson-37/ASSIGNMENT.md))
38. [Entity-Component Systems and Data-Oriented Design](lesson-38-ecs.md) ([activities](../work/lesson-38/ASSIGNMENT.md))
39. [GPU Execution and Kernel Mapping](lesson-39-gpu-foundations.md) ([activities](../work/lesson-39/ASSIGNMENT.md))
40. [GPU Memory, Reductions, and Scans](lesson-40-gpu-memory-primitives.md) ([activities](../work/lesson-40/ASSIGNMENT.md))
41. [GPU Profiling and Performance Analysis](lesson-41-gpu-profiling.md) ([activities](../work/lesson-41/ASSIGNMENT.md))
42. [Capstone: Streaming Analytics Engine](lesson-42-capstone.md) ([activities](../work/lesson-42/ASSIGNMENT.md))

## Study Standard

For each activity: predict a result, implement the smallest working change, test normal and boundary behavior, then explain the invariant, lifetime/ownership, failure contract, and time/space cost. Run warnings and available sanitizers. Measure performance only after correctness, with a recorded workload and environment. GPU chapters have CPU oracles and can be completed without CUDA hardware; run and compare CUDA kernels only where toolchain and hardware exist. Lesson 34's kernel module work needs a real Linux kernel with build headers (a disposable VM or a WSL2 distribution with `linux-headers` installed) -- never a machine you depend on; if unavailable, complete the design and documentation activities and mark the hands-on ones as pending hardware rather than fabricating output.

Interview rehearsal follows the untimed work: solve a reduced version from scratch and defend an edge case, a complexity claim, and a tradeoff aloud. The capstone asks you to integrate the whole progression, not to skip straight to a large build.

