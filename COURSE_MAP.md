# Course Map

The main course is now linear: start with `course/README.md` and follow Lesson 1, Lesson 2, Lesson 3, and so on.

This file is a reference map for the deeper topic folders. The `lessons/` folder rebuilds fundamentals. The `dsa/` folder covers algorithms and data structures. The `expert/` folder turns those fundamentals into senior-engineer depth.

## Track 1: Data Structures, Algorithms, And Complexity

Study:

- `dsa/README.md`
- `dsa/01-complexity-invariants-and-proofs.md`
- `dsa/02-arrays-strings-hashing.md`
- `dsa/03-linked-lists-stacks-queues-heaps.md`
- `dsa/04-trees-tries-and-indexes.md`
- `dsa/05-graphs.md`
- `dsa/06-dynamic-programming.md`
- `dsa/07-advanced-data-structures.md`
- `dsa/08-interview-patterns.md`

Build:

- `src/dsa/disjoint_set.cpp`
- `src/dsa/segment_tree.cpp`
- `src/dsa/graph_algorithms.cpp`
- `src/dsa/trie.cpp`
- LRU cache, order book, mini database index.

Mastery gate:

- You can implement the structure, prove the invariant, analyze complexity, test edge cases, and explain when it is useful in production.
- You can solve interview DSA problems in C++ cleanly under time pressure.

## Track 2: C++ Foundation And Correctness

Study:

- `lessons/01-cpp-refresh.md`
- `lessons/02-oop-and-object-model.md`
- `lessons/03-modern-cpp-ownership.md`
- `lessons/04-stl-templates-and-generic-programming.md`
- `lessons/05-testing-debugging-and-quality.md`
- `lessons/06-performance-and-memory.md`

Build:

- `src/exercises/oop_object_model.cpp`
- `src/exercises/raii_file_handle.cpp`
- `src/exercises/lru_cache.cpp`
- `projects/02-mini-database/README.md`

Mastery gate:

- You can explain ownership, lifetime, copy/move behavior, exception safety, and undefined behavior for your own code.
- You can design a small library API that is hard to misuse.

## Track 3: Expert Modern C++

Study:

- `expert/01-object-model-lifetime-and-abi.md`
- `expert/02-modern-cpp-deep-dive.md`
- `expert/03-templates-concepts-and-metaprogramming.md`
- `expert/04-allocators-memory-and-performance.md`

Build:

- Generic LRU cache with custom policies.
- RAII resource package.
- Mini database storage engine.
- Benchmark report.

Mastery gate:

- You can reason about object layout, vtables, alignment, move states, allocator behavior, and template instantiation.
- You can write library-quality C++ with documented contracts.

## Track 4: Concurrency And Systems Programming

Study:

- `lessons/07-multithreading-and-concurrency.md`
- `lessons/08-os-networking-and-storage.md`
- `expert/05-concurrency-and-memory-model.md`
- `expert/06-lock-free-and-low-latency.md`

Build:

- `src/exercises/thread_pool.cpp`
- `src/exercises/order_book.cpp`
- `projects/01-concurrent-log-engine/README.md`
- `projects/04-trading-order-book/README.md`

Mastery gate:

- You can design clean shutdown, backpressure, cancellation, thread ownership, and memory ordering.
- You know when not to use lock-free code.

## Track 5: C++ System Design

Study:

- `lessons/09-system-design.md`
- `lessons/10-distributed-systems.md`
- `expert/07-system-design-for-cpp-backends.md`

Build:

- `projects/03-distributed-rate-limiter/README.md`
- `projects/05-service-runtime-framework/README.md`
- `projects/06-distributed-cache/README.md`
- Design docs using `templates/design-doc-template.md`

Mastery gate:

- You can design C++ services with API boundaries, data ownership, observability, deployment, and failure behavior.
- You can choose storage, queues, cache, and consistency models based on requirements.

## Track 6: Architecture And Interviews

Study:

- `lessons/11-software-architecture.md`
- `lessons/12-interview-readiness.md`
- `expert/08-large-scale-cpp-architecture.md`
- `expert/09-production-readiness.md`
- `expert/10-senior-interview-track.md`
- `interview/README.md`

Build:

- `projects/07-stream-processing-engine/README.md`
- `projects/08-modular-cpp-platform/README.md`
- ADRs using `templates/adr-template.md`

Mastery gate:

- You can explain complex architecture decisions in plain language.
- You can review designs for coupling, operability, failure modes, and long-term maintainability.

## 24 Week Expert Plan

| Week | Focus | Output |
| --- | --- | --- |
| 1 | Compilation, translation units, references, const, UB | Modernize old algorithms |
| 2 | Classes, invariants, object lifetime | Shape engine, domain model |
| 3 | RAII, smart pointers, move semantics | Resource wrappers |
| 4 | Exception safety and API contracts | Strong guarantee exercise |
| 5 | STL containers, algorithms, iterator invalidation | Generic algorithm pack |
| 6 | Templates, concepts, policy design | Policy-based LRU cache |
| 7 | Object model, vtables, layout, ABI | Object layout investigation |
| 8 | Allocators, memory resources, cache behavior | Allocation benchmark report |
| 9 | Testing, debugging, sanitizers, fuzz thinking | Bug diary and regression suite |
| 10 | Profiling, perf reports, data-oriented design | Mini performance review |
| 11 | Threads, mutexes, CVs, futures | Blocking queue and thread pool |
| 12 | Cancellation, shutdown, backpressure | Concurrent log engine |
| 13 | Atomics and C++ memory model | Atomic counter and queue analysis |
| 14 | Lock-free thinking and low latency | Order book hot-path design |
| 15 | OS, networking, storage | Mini database recovery |
| 16 | C++ backend service design | Service runtime framework |
| 17 | Caching, queues, databases, consistency | Distributed rate limiter |
| 18 | Replication, sharding, idempotency | Distributed cache design |
| 19 | Architecture styles and module boundaries | Modular C++ platform |
| 20 | Plugin architecture, ABI boundaries | Runtime extension design |
| 21 | Observability, deployment, incidents | Runbook and postmortem |
| 22 | Senior C++ interview sprint | 30 timed C++ problems |
| 23 | System design interview sprint | 10 full designs |
| 24 | Capstone review | Portfolio-level final defense |

## Mastery Standard

You are ready when you can explain:

- What owns every object.
- What can throw and what remains valid afterward.
- What is shared across threads and how races are prevented.
- What happens when a machine, network call, database, queue, or dependency fails.
- What you would measure in production.
- Which design tradeoff you chose and what it costs.
- Why your architecture can survive future change.
