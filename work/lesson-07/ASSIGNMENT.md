# Lesson 7 Assignment - Classes, Construction, Destruction, and RAII

Read [Lesson 7](../../course/lesson-07-classes-raii.md) before coding. This assignment is one chapter, not one giant program. Finish one activity, compile, and test before moving to the next. Keep existing working code.

## Core (activities 61-63)

- [ ] **Activity 61:** Convert a public record into a class with private state and accessors.
- [ ] **Activity 62:** Write a constructor that establishes a checked invariant.
- [ ] **Activity 63:** Add `const` member functions and distinguish mutable from read-only access.

## Applied (activities 64-67)

- [ ] **Activity 64:** Instrument construction and destruction order for local and member objects.
- [ ] **Activity 65:** Compare automatic storage with a contained `new`/`delete` example; explain leaks and double deletes without running them.
- [ ] **Activity 66:** Create a fake resource handle with one invalid sentinel.
- [ ] **Activity 67:** Implement a destructor that releases exactly once.

## Expert (activities 68-70)

- [ ] **Activity 68:** Delete copying for the owner and explain why shallow copying would fail.
- [ ] **Activity 69:** Implement move construction and move assignment with an empty moved-from state.
- [ ] **Activity 70:** Build a three-resource bundle; inject failure after each acquisition and verify reverse cleanup.

## Verification

- Fake handle closes exactly once on each successful path.
- Moves leave one owner and a harmless source.
- Each injected acquisition failure releases all earlier resources in reverse order.

An activity is complete when its behavior is predicted, the code compiles with warnings enabled, focused normal and boundary checks pass, and you can explain its ownership, failure behavior, and cost. Use `main.cpp` for experiments and demonstrations and `tests.cpp` for tests. Split into headers and source files only when code reuse requires it.

## Interview Rehearsal

Trace object lifetime and every close in a move-only owner during partial construction failure. Solve a smaller version from a blank file after the untimed work, then explain the invariant, edge cases, time, and extra-space complexity aloud.

## Written Evidence

In `notes.md`, explain the three core concepts from the lesson using your own code and draw any relevant owner/lifetime diagram. In `design.md`, record preconditions, invariants, error behavior, and one rejected alternative. In `benchmark.md`, record a reproducible measurement only if the work has a meaningful performance question; otherwise explain why a benchmark would not teach you anything yet.
