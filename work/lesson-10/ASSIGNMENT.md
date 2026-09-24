# Lesson 10 Assignment - Polymorphism, Smart Pointers, Variants, and Errors

Read [Lesson 10](../../course/lesson-10-polymorphism-ownership.md) before coding. This assignment is one chapter, not one giant program. Finish one activity, compile, and test before moving to the next. Keep existing working code.

## Core (activities 91-93)

- [ ] **Activity 91:** Define an abstract base with one virtual operation and a virtual destructor.
- [ ] **Activity 92:** Implement two derived types and call them through base references.
- [ ] **Activity 93:** Demonstrate slicing by copying to base value; explain lost behavior.

## Applied (activities 94-97)

- [ ] **Activity 94:** Own a derived object with `unique_ptr<Base>` and test destruction.
- [ ] **Activity 95:** Clone an object with an explicit owning return type.
- [ ] **Activity 96:** Build the same behavior with `std::variant` and exhaustive visitation.
- [ ] **Activity 97:** Create a shared ownership cycle and repair one edge with `weak_ptr`.

## Expert (activities 98-100)

- [ ] **Activity 98:** Use `weak_ptr::lock` in a callback and test after expiry.
- [ ] **Activity 99:** Define error behavior for unknown message and resource acquisition failure.
- [ ] **Activity 100:** Compare virtual, variant, and callback designs on extensibility, ownership, and failure paths.

## Verification

- Deleting through the base owner calls the derived destructor.
- A shared cycle is detected and repaired; weak lock after expiry fails safely.
- Virtual and variant versions agree on outputs and failure behavior.

An activity is complete when its behavior is predicted, the code compiles with warnings enabled, focused normal and boundary checks pass, and you can explain its ownership, failure behavior, and cost. Use `main.cpp` for experiments and demonstrations and `tests.cpp` for tests. Split into headers and source files only when code reuse requires it.

## Interview Rehearsal

Draw an ownership graph, explain virtual destructor and slicing, then choose variant or inheritance for a changing message set. Solve a smaller version from a blank file after the untimed work, then explain the invariant, edge cases, time, and extra-space complexity aloud.

## Written Evidence

In `notes.md`, explain the three core concepts from the lesson using your own code and draw any relevant owner/lifetime diagram. In `design.md`, record preconditions, invariants, error behavior, and one rejected alternative. In `benchmark.md`, record a reproducible measurement only if the work has a meaningful performance question; otherwise explain why a benchmark would not teach you anything yet.
