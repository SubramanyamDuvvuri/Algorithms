# Lesson 14 Assignment - Templates

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement generic `SmallVector<T,N>`, binary heap, and graph types with deduction guides.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Primitive, move-only, non-default-constructible, and throwing element types; boundary capacity cases.

## Write

In `notes.md`: Trace deduction, overload selection, specialization, and instantiation.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Moderate)

- Build an integer version first, then parameterize it.
- Keep definitions visible where templates instantiate.
- Test move-only, throwing, and non-default-constructible types.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
