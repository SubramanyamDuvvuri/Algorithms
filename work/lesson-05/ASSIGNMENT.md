# Lesson 5 Assignment - Variants

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Build an expression AST with `std::variant` plus evaluation/printing; implement a protocol state machine.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Every alternative, nested expressions, invalid transitions, exhaustive visitation, and exception/error paths.

## Write

In `notes.md`: Compare manual tagged unions, variants, and virtual dispatch.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Guided)

- Define AST node types before forming the variant; use owning indirection for recursion.
- Use an overload helper with `visit` so missing alternatives fail compilation.
- Separate protocol state from event and make transition failure explicit.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
