# Lesson 1 Assignment - Pointers and lifetime

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement `not_null<T*>`, pointer-range binary search, and a non-owning intrusive singly linked list.

## Beginner Path

Do these in order. Compile and run after every checkpoint.

1. Declare an `int`, print its value, print its address with `&`, store that address in `int*`, and read the value with `*`.
2. Change the integer through the pointer. Confirm that the original variable changed.
3. Create a null pointer and check it before dereferencing. Never deliberately dereference it.
4. Write `increment(int*)`, handle null explicitly, and compare it with `increment(int&)`.
5. Create examples of `const int*`, `int* const`, and `const int* const`. Comment which part may change.
6. Create a five-element array and walk it using a pointer from `begin` to one-past-end. Do not dereference one-past-end.
7. Write `find(const int* first, const int* last, int value)` using a linear scan.
8. Upgrade `find` into binary search while preserving the half-open range `[first,last)`.
9. Implement `not_null<T*>` only after the earlier exercises feel obvious.
10. Finish with the intrusive list, where nodes are owned by the caller and merely linked by the list.

Use a debugger at least once. Pause after creating the pointer and inspect the variable, pointer value, pointee, and address.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Null/empty/single-element/boundary cases; dangling-pointer audit; compile-time construction checks.

For the first pass, use simple `assert` statements. You do not need a testing framework yet.

## Write

In `notes.md`: Draw ownership/lifetime diagrams and explain `const T*`, `T* const`, one-past-end, and every dereference.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Guided)

- Start with tiny address experiments: create an `int`, inspect `&value`, dereference it, and mutate through a pointer.
- For `not_null<T*>`, store one pointer; delete default construction, reject null, then add `get`, `*`, and `->`. Never delete the pointee.
- For binary search use `[first,last)` and preserve that invariant after every branch.
- Put the link inside each intrusive node; the list stores only a head and never allocates or frees nodes.
- Draw object and pointer lifetimes for every test.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
