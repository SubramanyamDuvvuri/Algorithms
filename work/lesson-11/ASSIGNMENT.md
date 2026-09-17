# Lesson 11 Assignment - Containers

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Benchmark STL containers and implement an order-book side with chosen containers.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Iterator/reference invalidation after every used mutation; duplicate keys, rehashing, and load-factor cases.

## Write

In `notes.md`: Create a selection table for timers, LRU, symbol table, stable registry, and order book.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Moderate)

- Tabulate operation frequency, ordering, stability, and locality.
- Reserve capacity when valid, then observe invalidation behavior.
- Benchmark realistic sizes.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
