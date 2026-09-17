# Lesson 35 Assignment - ECS

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Build generation-safe entities, sparse-set components, queries, deferred structural changes, and parallel system scheduling.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Stale handles, add/remove cycles, entity reuse, mutation during iteration, query correctness, and race detection.

## Write

In `notes.md`: Benchmark sparse-set versus archetype workloads and defend scheduling dependencies.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Minimal)

- Implement index-plus-generation identity first.
- Benchmark one sparse-set store before generalizing.
- Defer structural mutations during iteration.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
