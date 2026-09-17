# Lesson 7 Assignment - RAII

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement move-only file, socket, and mapped-file wrappers plus a transactional three-resource bundle.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Move construction/assignment, self-move policy, double-close prevention, and failure after each acquisition.

## Write

In `notes.md`: Explain invariants, cleanup, and every special member decision.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Guided)

- Acquire in construction, release in destruction, disable copying, then add moves.
- A move leaves the source harmless; move assignment must safely replace an existing resource.
- Inject failure after resources 1, 2, and 3 and verify reverse cleanup.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
