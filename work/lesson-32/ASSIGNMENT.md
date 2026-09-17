# Lesson 32 Assignment - Modern patterns

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement a pricing engine using template strategy, virtual strategy, variant, and type erasure; build an event bus.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Subscribe/unsubscribe during dispatch, callback lifetime, exception policy, concurrency, backpressure, and empty state.

## Write

In `notes.md`: Compare runtime, compile time, binary size, ABI, extensibility, and ownership.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Minimal)

- Run identical behavioral tests against all four designs.
- Write expected change scenarios before selecting a pattern.
- Solve callback lifetime and reentrancy before concurrency.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
