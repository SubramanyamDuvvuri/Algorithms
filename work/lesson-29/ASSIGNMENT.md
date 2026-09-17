# Lesson 29 Assignment - Cache-aware design

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Benchmark AoS vs SoA, branchy vs branch-reduced filters, and contended vs padded counters; optimize order-book layout.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Representative distributions, cold/warm data, several sizes, repeated samples, and correctness equivalence.

## Write

In `notes.md`: Connect each performance result to locality, cache lines, prediction, or false sharing.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Minimal)

- Choose one hot loop and establish a baseline.
- Change one factor at a time.
- Test several working-set sizes.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
