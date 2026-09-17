# Lesson 28 Assignment - Coroutines

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement lazy `Generator<T>` and move-only `Task<T>` integrated with the thread pool.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Empty/multiple yields, exception propagation, cancellation, destroy-while-suspended, continuation race, and frame leaks.

## Write

In `notes.md`: Trace coroutine frame creation, suspension, resumption, final suspend, and destruction.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Light)

- Implement a synchronous lazy generator first.
- Follow coroutine customization points in execution order.
- Treat the frame as a resource with one owner.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
