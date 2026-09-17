# Lesson 12 Assignment - Algorithms and ranges

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Replace five loops with algorithms; build a lazy log pipeline and custom chunk view.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Empty/single/multiple chunks, const input, temporary range safety, projections, and invalidation.

## Write

In `notes.md`: Explain iterator categories, laziness, ownership, and complexity.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Moderate)

- Write a correct eager algorithm before a lazy pipeline.
- Keep named backing ranges alive.
- Implement only the iterator operations required by the declared category.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
