# Lesson 26 Assignment - Async execution

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Build a bounded executor returning futures and a deadline-aware fan-out/fan-in operation.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Result/exception propagation, cancellation, timeout, partial failure, saturation, rejection, and shutdown.

## Write

In `notes.md`: For every task state where it runs, who owns/waits/stops it, and how failure travels.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Light)

- Define task states and ownership first.
- Bound admission before fan-out.
- Propagate one deadline rather than restarting timeouts.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
