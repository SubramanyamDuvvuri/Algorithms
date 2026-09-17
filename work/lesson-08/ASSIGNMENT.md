# Lesson 8 Assignment - Polymorphism

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement one message processor with virtual interfaces and one with `std::variant`; add cloning.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Base-pointer destruction, slicing demonstrations, all derived alternatives, copy/move, and unknown message handling.

## Write

In `notes.md`: Write an ADR choosing inheritance, composition, or variant for the system.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Guided)

- Start with the smallest stable abstract interface.
- Demonstrate slicing by passing a derived value as a base value.
- Keep virtual and variant implementations behaviorally identical.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
