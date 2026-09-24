# Lesson 8 Assignment - Copy, Move, Operators, and Value Semantics

Read [Lesson 8](../../course/lesson-08-copy-move-values.md) before coding. This assignment is one chapter, not one giant program. Finish one activity, compile, and test before moving to the next. Keep existing working code.

## Core (activities 71-73)

- [ ] **Activity 71:** Instrument copy/move construction and assignment on a small value type.
- [ ] **Activity 72:** Predict then measure behavior for pass-by-value and return-by-value.
- [ ] **Activity 73:** Use `std::move` and explain why it does not itself move data.

## Applied (activities 74-77)

- [ ] **Activity 74:** Define and test the moved-from state of a resource owner.
- [ ] **Activity 75:** Implement deep copy for a small owning buffer or use standard members for Rule of Zero.
- [ ] **Activity 76:** Implement copy and move assignment; test self-assignment policy.
- [ ] **Activity 77:** Create explicit `Quantity` and reject invalid construction.

## Expert (activities 78-80)

- [ ] **Activity 78:** Implement checked arithmetic with a stated overflow policy.
- [ ] **Activity 79:** Add equality and ordering; test reflexivity and transitivity.
- [ ] **Activity 80:** Build Money or Price with fixed scale and explicit conversion/rounding rules.

## Verification

- Copy and move counts match predictions or the discrepancy is explained.
- Self-assignment and moved-from cases keep valid invariants.
- Arithmetic boundaries, comparison laws, and forbidden conversions are tested.

An activity is complete when its behavior is predicted, the code compiles with warnings enabled, focused normal and boundary checks pass, and you can explain its ownership, failure behavior, and cost. Use `main.cpp` for experiments and demonstrations and `tests.cpp` for tests. Split into headers and source files only when code reuse requires it.

## Interview Rehearsal

Explain copy versus move versus elision, then design an invariant-preserving value type. Solve a smaller version from a blank file after the untimed work, then explain the invariant, edge cases, time, and extra-space complexity aloud.

## Written Evidence

In `notes.md`, explain the three core concepts from the lesson using your own code and draw any relevant owner/lifetime diagram. In `design.md`, record preconditions, invariants, error behavior, and one rejected alternative. In `benchmark.md`, record a reproducible measurement only if the work has a meaningful performance question; otherwise explain why a benchmark would not teach you anything yet.
