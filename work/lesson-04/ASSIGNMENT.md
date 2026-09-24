# Lesson 4 Assignment - Enums, Type Aliases, and Named States

Read [Lesson 4](../../course/lesson-04-enums-aliases.md) before coding. This assignment is one chapter, not one giant program. Finish one activity, compile, and test before moving to the next. Keep existing working code.

## Core (activities 31-33)

- [ ] **Activity 31:** Write a `typedef` and an equivalent `using` alias for an unsigned byte.
- [ ] **Activity 32:** Show with a compile-time check that aliases do not create new types.
- [ ] **Activity 33:** Define an unscoped enum and a scoped enum; compare allowed conversions.

## Applied (activities 34-37)

- [ ] **Activity 34:** Choose and inspect an explicit enum underlying type.
- [ ] **Activity 35:** Decode raw message-type values 1, 2, and 7 with a known/unknown result.
- [ ] **Activity 36:** Write a switch for all known states with an explicit unknown policy.
- [ ] **Activity 37:** Define independent permission bits and combine them without mixing in message states.

## Expert (activities 38-40)

- [ ] **Activity 38:** Implement concrete `PermissionFlags` set, reset, and contains.
- [ ] **Activity 39:** Preserve an unknown permission bit through decode and encode.
- [ ] **Activity 40:** Test zero, combinations, highest bit, and invalid-state handling.

## Verification

- Type aliases are tested as aliases, not distinct types.
- Known, unknown, and invalid values follow the stated policy.
- Flag tests cover independent bits and unknown-bit round trip.

An activity is complete when its behavior is predicted, the code compiles with warnings enabled, focused normal and boundary checks pass, and you can explain its ownership, failure behavior, and cost. Use `main.cpp` for experiments and demonstrations and `tests.cpp` for tests. Split into headers and source files only when code reuse requires it.

## Interview Rehearsal

Explain alias versus distinct type, scoped enum versus flags, and unknown wire-value behavior. Solve a smaller version from a blank file after the untimed work, then explain the invariant, edge cases, time, and extra-space complexity aloud.

## Written Evidence

In `notes.md`, explain the three core concepts from the lesson using your own code and draw any relevant owner/lifetime diagram. In `design.md`, record preconditions, invariants, error behavior, and one rejected alternative. In `benchmark.md`, record a reproducible measurement only if the work has a meaningful performance question; otherwise explain why a benchmark would not teach you anything yet.
