# Lesson 9 Assignment - Value semantics

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement checked `Money`, `Price`, `Quantity`, and fixed-point decimal value types.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Overflow, invalid parsing, ordering laws, equality/hash agreement, formatting, and forbidden conversions.

## Write

In `notes.md`: Explain regular types, `<=>`, `explicit`, and strict weak ordering.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Guided)

- Specify range, units, overflow, and normalization before operators.
- Prefer symmetric non-member arithmetic built from compound assignment.
- Property-test ordering laws and equality/hash agreement.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
