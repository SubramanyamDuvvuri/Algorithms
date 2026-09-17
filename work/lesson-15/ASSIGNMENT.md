# Lesson 15 Assignment - Advanced generic programming

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement a small type-erased callable and value-semantic type-erased storage backend.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Empty state, copy/move, small/large objects, throwing callables, capabilities, and destruction.

## Write

In `notes.md`: Compare SFINAE, traits, CRTP, templates, virtual dispatch, and type erasure.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Moderate)

- Build a virtual-interface oracle first.
- Separate a type-erased public wrapper from concrete hidden models.
- Include diagnostics and compile time in your design comparison.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
