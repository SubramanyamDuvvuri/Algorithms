# Lesson 4 Assignment - Enums

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement a constrained `FlagSet<E>` for opted-in scoped enums with set/reset/contains and unknown-bit preservation.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Empty/all flags, combinations, unknown bits, invalid combinations, and underlying-type boundaries.

## Write

In `notes.md`: Explain scoped versus unscoped enums, representation, and compatibility strategy.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Guided)

- Begin with `enum class Permission : std::uint32_t`.
- Use an opt-in trait so arbitrary enums cannot become flag sets.
- Store raw bits so unknown future flags can round-trip.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
