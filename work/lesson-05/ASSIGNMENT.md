# Lesson 5 Assignment - Functions, Overloads, Function Pointers, and Callbacks

Read [Lesson 5](../../course/lesson-05-functions-callbacks.md) before coding. This assignment is one chapter, not one giant program. Finish one activity, compile, and test before moving to the next. Keep existing working code.

## Core (activities 41-43)

- [ ] **Activity 41:** Separate one function declaration from its definition and compile both.
- [ ] **Activity 42:** Write pass-by-value, pointer, and reference versions of an update function.
- [ ] **Activity 43:** State and test each function's null and mutation behavior.

## Applied (activities 44-47)

- [ ] **Activity 44:** Add two overloads and predict which one is called for each argument type.
- [ ] **Activity 45:** Use one default argument and explain where its value is supplied.
- [ ] **Activity 46:** Declare a function pointer, assign it a named function, and call through it.
- [ ] **Activity 47:** Use `using Operation = int(*)(int,int)`; compare with raw syntax.

## Expert (activities 48-50)

- [ ] **Activity 48:** Write `apply(a,b,Operation)` and test two callbacks.
- [ ] **Activity 49:** Pass a noncapturing lambda as a function pointer; explain why a capturing lambda fails.
- [ ] **Activity 50:** Use a stateful callable with a template parameter or `std::function`, document ownership and allocation tradeoffs.

## Verification

- Overloads and callbacks produce predicted results.
- A capturing lambda fails to convert to the plain function-pointer type.
- Callback lifetime and error behavior are documented and tested.

An activity is complete when its behavior is predicted, the code compiles with warnings enabled, focused normal and boundary checks pass, and you can explain its ownership, failure behavior, and cost. Use `main.cpp` for experiments and demonstrations and `tests.cpp` for tests. Split into headers and source files only when code reuse requires it.

## Interview Rehearsal

Design a callback API for a calculator; compare function pointers, capturing lambdas, and `std::function`. Solve a smaller version from a blank file after the untimed work, then explain the invariant, edge cases, time, and extra-space complexity aloud.

## Written Evidence

In `notes.md`, explain the three core concepts from the lesson using your own code and draw any relevant owner/lifetime diagram. In `design.md`, record preconditions, invariants, error behavior, and one rejected alternative. In `benchmark.md`, record a reproducible measurement only if the work has a meaningful performance question; otherwise explain why a benchmark would not teach you anything yet.
