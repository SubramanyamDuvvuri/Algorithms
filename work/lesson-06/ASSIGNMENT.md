# Lesson 6 Assignment - References, Const, Strings, and Value Categories

Read [Lesson 6](../../course/lesson-06-references-strings.md) before coding. This assignment is one chapter, not one giant program. Finish one activity, compile, and test before moving to the next. Keep existing working code.

## Core (activities 51-53)

- [ ] **Activity 51:** Bind a mutable reference and confirm changes affect its source.
- [ ] **Activity 52:** Bind `const&` to a value and classify allowed reads and writes.
- [ ] **Activity 53:** Compare pointer optionality with reference non-null intent.

## Applied (activities 54-57)

- [ ] **Activity 54:** Inspect lvalue, rvalue, and named-rvalue-reference expressions.
- [ ] **Activity 55:** Test local temporary lifetime extension through a `const&` without returning it.
- [ ] **Activity 56:** Create a `std::string` owner and two `string_view` subviews.
- [ ] **Activity 57:** Document invalidation after owner destruction, mutation, and reallocation.

## Expert (activities 58-60)

- [ ] **Activity 58:** Write a tokenizer returning borrowed views into caller-owned input.
- [ ] **Activity 59:** Add an owning-token alternative and compare copies and lifetimes.
- [ ] **Activity 60:** Audit ten signatures returning values, references, pointers, or views; fix the unsafe ones.

## Verification

- Every returned view has a named owner and invalidation point.
- Borrowed and owning tokenizer outputs match on empty and repeated delimiters.
- No test deliberately dereferences a dangling view.

An activity is complete when its behavior is predicted, the code compiles with warnings enabled, focused normal and boundary checks pass, and you can explain its ownership, failure behavior, and cost. Use `main.cpp` for experiments and demonstrations and `tests.cpp` for tests. Split into headers and source files only when code reuse requires it.

## Interview Rehearsal

Trace a returned `string_view` through three callers and identify the exact dangling point. Solve a smaller version from a blank file after the untimed work, then explain the invariant, edge cases, time, and extra-space complexity aloud.

## Written Evidence

In `notes.md`, explain the three core concepts from the lesson using your own code and draw any relevant owner/lifetime diagram. In `design.md`, record preconditions, invariants, error behavior, and one rejected alternative. In `benchmark.md`, record a reproducible measurement only if the work has a meaningful performance question; otherwise explain why a benchmark would not teach you anything yet.
