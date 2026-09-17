# Lesson 22 Assignment - Threads

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Create a reproducible data race, repair it three ways, and build a cancellable `std::jthread` worker.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Repeated stress, cancellation before/during work, exceptions in workers, captured-lifetime failures, and shutdown.

## Write

In `notes.md`: List every shared object, accessing thread, and synchronization relation.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Light)

- Prefer `jthread` and include stopping in loop predicates.
- Pass values or owned objects before experimenting with references.
- Stress tests expose races but do not prove absence.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
