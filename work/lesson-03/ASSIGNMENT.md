# Lesson 3 Assignment - Structs, Members, Unions, and Layout

Read [Lesson 3](../../course/lesson-03-object-layout.md) before coding. This assignment is one chapter, not one giant program. Finish one activity, compile, and test before moving to the next. Keep existing working code.

## Core (activities 21-23)

- [ ] **Activity 21:** Declare a two-field struct and initialize it with aggregate and designated syntax.
- [ ] **Activity 22:** Read and change members through an object and a pointer to that object.
- [ ] **Activity 23:** Pass a record by value and by `const&`; observe which operations copy.

## Applied (activities 24-27)

- [ ] **Activity 24:** Nest one record inside another and initialize every member.
- [ ] **Activity 25:** Compare `sizeof`, `alignof`, and member offsets for three field orders.
- [ ] **Activity 26:** Check `std::is_standard_layout_v` before using `offsetof` as a portable tool.
- [ ] **Activity 27:** Store one of two trivial representations in a union and track the active member explicitly.

## Expert (activities 28-30)

- [ ] **Activity 28:** Explain why a raw `memcpy` of a struct is not a portable packet format.
- [ ] **Activity 29:** Encode the shared packet length as two explicit little-endian bytes.
- [ ] **Activity 30:** Decode the two-byte length and validate total frame size before making a payload view.

## Verification

- Measured offsets explain every padding byte on the current compiler.
- Encoding is byte-for-byte stable and decoding never reads beyond input.
- Truncated frames and oversized lengths have explicit results without invalid reads.

An activity is complete when its behavior is predicted, the code compiles with warnings enabled, focused normal and boundary checks pass, and you can explain its ownership, failure behavior, and cost. Use `main.cpp` for experiments and demonstrations and `tests.cpp` for tests. Split into headers and source files only when code reuse requires it.

## Interview Rehearsal

Defend a struct layout and show how to serialize it portably across machines. Solve a smaller version from a blank file after the untimed work, then explain the invariant, edge cases, time, and extra-space complexity aloud.

## Written Evidence

In `notes.md`, explain the three core concepts from the lesson using your own code and draw any relevant owner/lifetime diagram. In `design.md`, record preconditions, invariants, error behavior, and one rejected alternative. In `benchmark.md`, record a reproducible measurement only if the work has a meaningful performance question; otherwise explain why a benchmark would not teach you anything yet.
