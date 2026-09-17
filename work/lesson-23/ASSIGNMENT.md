# Lesson 23 Assignment - Synchronization

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement a closeable bounded MPMC blocking queue with timed push/pop.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Many producers/consumers, full/empty queue, spurious wakeups, timeout, close while blocked, drain, and stress.

## Write

In `notes.md`: Document invariants, predicates, lock order, notifications, and state transitions.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Light)

- Write queue invariants and state transitions before code.
- Every CV wait needs a predicate under the mutex.
- Decide and document whether close drains queued items.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
