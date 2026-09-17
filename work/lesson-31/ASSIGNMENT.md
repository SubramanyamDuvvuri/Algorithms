# Lesson 31 Assignment - SIMD and parallel STL

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement scalar, auto-vectorized, intrinsic, and parallel versions of a numeric kernel.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Odd sizes, alignment, aliasing, floating-point edge cases, races, correctness tolerance, and multiple workloads.

## Write

In `notes.md`: Inspect vectorization reports and explain `reduce` versus `accumulate` reproducibility.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Minimal)

- Make dependencies and aliasing clear for auto-vectorization first.
- Read compiler reports before intrinsics.
- Use associative reductions or document numeric drift.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
