# Lesson 2 Assignment - Arrays, Strings, and Non-Owning Views

Read [Lesson 2](../../course/lesson-02-arrays-and-span.md) before coding. This assignment is one chapter, not one giant program. Finish one activity, compile, and test before moving to the next. Keep existing working code.

## Core (activities 11-13)

- [ ] **Activity 11:** Print indices, values, and addresses of a four-element raw array.
- [ ] **Activity 12:** Calculate its count with `sizeof(a)/sizeof(a[0])` in its declaring scope.
- [ ] **Activity 13:** Pass it to a pointer parameter and explain the lost count.

## Applied (activities 14-17)

- [ ] **Activity 14:** Write pointer-plus-size and fixed-array-reference `sum` overloads.
- [ ] **Activity 15:** Repeat with `std::array`; compare `.size()`, copying, `[]`, and `.at()`.
- [ ] **Activity 16:** Create a `std::vector`; record when growth invalidates a saved pointer.
- [ ] **Activity 17:** Write `sum(std::span<const int>)` and call it with three owning containers.

## Expert (activities 18-20)

- [ ] **Activity 18:** Create checked `first`, `last`, and `subspan` views; test invalid requests before construction.
- [ ] **Activity 19:** Compare `std::string` and `std::string_view` ownership with a token slice.
- [ ] **Activity 20:** Read packet magic and version only after checking the minimum header size; test every shorter input.

## Verification

- `sum` returns the same result through all four APIs.
- Out-of-range `.at()` is caught; invalid subspans are rejected before construction.
- Header reader rejects every truncated header and wrong magic without reading outside the buffer.

An activity is complete when its behavior is predicted, the code compiles with warnings enabled, focused normal and boundary checks pass, and you can explain its ownership, failure behavior, and cost. Use `main.cpp` for experiments and demonstrations and `tests.cpp` for tests. Split into headers and source files only when code reuse requires it.

## Interview Rehearsal

Design a single read-only buffer API for array, vector, and string bytes; state the size and lifetime contract. Solve a smaller version from a blank file after the untimed work, then explain the invariant, edge cases, time, and extra-space complexity aloud.

## Written Evidence

In `notes.md`, explain the three core concepts from the lesson using your own code and draw any relevant owner/lifetime diagram. In `design.md`, record preconditions, invariants, error behavior, and one rejected alternative. In `benchmark.md`, record a reproducible measurement only if the work has a meaningful performance question; otherwise explain why a benchmark would not teach you anything yet.
