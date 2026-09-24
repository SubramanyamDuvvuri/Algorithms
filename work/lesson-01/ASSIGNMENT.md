# Lesson 1 Assignment - Pointers, Addresses, and Lifetime

Read [Lesson 1](../../course/lesson-01-pointers.md) before coding. This assignment is one chapter, not one giant program. Finish one activity, compile, and test before moving to the next. Keep existing working code.

## Core (activities 1-3)

- [x] **Activity 1:** Print an `int` value, its address, and the value read through `int*`.
- [ ] **Activity 2:** Change that `int` through the pointer and confirm the original value changes.
- [ ] **Activity 3:** Create `nullptr`; branch before dereferencing and test the null path.

## Applied (activities 4-7)

- [ ] **Activity 4:** Write `increment(int*)` with a documented null policy and compare `increment(int&)`.
- [ ] **Activity 5:** Experiment with `const int*`, `int* const`, and `const int* const`; predict which assignments compile.
- [ ] **Activity 6:** Walk a five-element array with `[first,last)` without reading `last`.
- [ ] **Activity 7:** Implement linear `find(first,last,value)`; return `last` when absent.

## Expert (activities 8-10)

- [ ] **Activity 8:** Implement binary search on a sorted range; state and preserve its invariant.
- [ ] **Activity 9:** Write `require_non_null(int*)` and test its explicit failure behavior.
- [ ] **Activity 10:** Reverse a half-open pointer range; test empty, single, odd, and even lengths.

## Verification

- Null, live, and one-past-end paths are distinguished without reading invalid memory.
- Linear and binary search agree on sorted arrays; absent returns last.
- Reverse agrees with a simple index-based oracle for lengths 0-8.

An activity is complete when its behavior is predicted, the code compiles with warnings enabled, focused normal and boundary checks pass, and you can explain its ownership, failure behavior, and cost. Use `main.cpp` for experiments and demonstrations and `tests.cpp` for tests. Split into headers and source files only when code reuse requires it.

## Interview Rehearsal

Explain ownership and the last valid dereference for a returned pointer; implement and test binary search without out-of-range access. Solve a smaller version from a blank file after the untimed work, then explain the invariant, edge cases, time, and extra-space complexity aloud.

## Written Evidence

In `notes.md`, explain the three core concepts from the lesson using your own code and draw any relevant owner/lifetime diagram. In `design.md`, record preconditions, invariants, error behavior, and one rejected alternative. In `benchmark.md`, record a reproducible measurement only if the work has a meaningful performance question; otherwise explain why a benchmark would not teach you anything yet.
