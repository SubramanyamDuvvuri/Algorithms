# Lesson 10 Assignment - Smart pointers

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Build an ownership graph demo and asynchronous connection manager with controlled shutdown.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Cycle leak and repair, expired weak references, callback after shutdown, custom deleter, and aliasing behavior.

## Write

In `notes.md`: Label every relationship exclusive/shared/weak/borrowed and justify every `shared_ptr`.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Moderate)

- Draw the ownership graph before selecting pointer types.
- Start with `unique_ptr`; add sharing only for genuinely shared lifetime.
- Use `weak_ptr` for observers and callbacks that must detect expiry.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
