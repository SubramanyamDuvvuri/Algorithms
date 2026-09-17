# Lesson 27 Assignment - Work-stealing pool

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Build worker-local deques, external submission, stealing, dependencies, metrics, backpressure, and drain/cancel shutdown.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Recursive submissions, blocked worker, throwing task, dependency failure, saturation, starvation, and repeated shutdown.

## Write

In `notes.md`: Benchmark throughput/fairness/steals/p99 and defend all synchronization and lifecycle states.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Light)

- Get a correct fixed pool and shutdown protocol first.
- Instrument stealing before tuning it.
- Write accepting/draining/cancelling/stopped transitions before code.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
