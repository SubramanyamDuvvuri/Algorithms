# Lesson 16 Assignment - Concepts and constexpr

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Constrain earlier generic types; implement a `consteval` schema validator and units library.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Compile-pass and compile-fail cases, dimensional errors, boundary constant evaluation, and diagnostics.

## Write

In `notes.md`: Explain constraints, subsumption, `constexpr`, `consteval`, and semantic laws.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Moderate)

- Constrain only operations the algorithm uses.
- Keep compile-pass and compile-fail examples.
- Treat compilation time as a resource.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
