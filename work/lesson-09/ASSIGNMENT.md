# Lesson 9 Assignment - Templates, Containers, Iterators, and Generic APIs

Read [Lesson 9](../../course/lesson-09-templates-containers.md) before coding. This assignment is one chapter, not one giant program. Finish one activity, compile, and test before moving to the next. Keep existing working code.

## Core (activities 81-83)

- [ ] **Activity 81:** Write a function template for a small operation on two values.
- [ ] **Activity 82:** Write an array-reference template that preserves extent.
- [ ] **Activity 83:** Create a class template with one invariant and two element types.

## Applied (activities 84-87)

- [ ] **Activity 84:** Add a C++20 `requires` constraint for an operation the class actually uses.
- [ ] **Activity 85:** Compare `vector` and `array` growth, copying, and bounds behavior.
- [ ] **Activity 86:** Save a vector pointer or iterator, grow the vector, and explain invalidation without dereferencing it.
- [ ] **Activity 87:** Use ordered and unordered maps for the same small lookup workload.

## Expert (activities 88-90)

- [ ] **Activity 88:** Implement iteration with begin/end and state iterator category assumptions.
- [ ] **Activity 89:** Replace one loop with a standard algorithm and compare outputs.
- [ ] **Activity 90:** Build a generic checked buffer API; test int, const int, empty, and move-only element cases where supported.

## Verification

- The generic operation compiles for intended types and rejects unsupported ones.
- No invalidated iterator or span is dereferenced.
- Container outputs match a simple reference implementation on empty and duplicate cases.

An activity is complete when its behavior is predicted, the code compiles with warnings enabled, focused normal and boundary checks pass, and you can explain its ownership, failure behavior, and cost. Use `main.cpp` for experiments and demonstrations and `tests.cpp` for tests. Split into headers and source files only when code reuse requires it.

## Interview Rehearsal

Choose a container and generic API for a stated workload; defend invalidation and complexity. Solve a smaller version from a blank file after the untimed work, then explain the invariant, edge cases, time, and extra-space complexity aloud.

## Written Evidence

In `notes.md`, explain the three core concepts from the lesson using your own code and draw any relevant owner/lifetime diagram. In `design.md`, record preconditions, invariants, error behavior, and one rejected alternative. In `benchmark.md`, record a reproducible measurement only if the work has a meaningful performance question; otherwise explain why a benchmark would not teach you anything yet.
