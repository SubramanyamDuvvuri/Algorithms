# Lesson 18 Assignment - Complexity and benchmarking

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Build a reusable timing harness and measure vector growth, hash load factors, and tree traversal.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Warm-up, baseline, dead-code prevention, repeated samples, varied input distributions, and outliers.

## Write

In `notes.md`: Report median/p95/p99, variance, environment, Big-O, amortized proof, and limitations.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Light)

- State the benchmark hypothesis first.
- Keep setup outside timing and consume results.
- Report a distribution, not one duration.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
