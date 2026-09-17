# Lesson 13 Assignment - Move semantics

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Instrument a resource type; build a forwarding factory and move-only small-buffer callable.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Copy/move counts, vector reallocation, return-by-value, moved-from use, throwing and `noexcept` moves.

## Write

In `notes.md`: Explain every construction and cases where `std::move` inhibits elision.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Moderate)

- Log constructor/destructor IDs and addresses.
- Understand resource transfer before forwarding.
- Forward each named forwarding-reference argument exactly once.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
