# Lesson 7 - Classes, Construction, Destruction, and RAII

## What You Gain

You'll be able to design a class whose resources clean themselves up no matter how the function exits -- exception, early return, or otherwise -- using RAII instead of manual cleanup. This is the single idiom that eliminates most resource leaks in C++ codebases, and it's the answer interviewers are fishing for when they ask how C++ handles cleanup without garbage collection.

This chapter builds on Lesson 6. Work through the model before the [ten-task assignment](../work/lesson-07/ASSIGNMENT.md). Predict behavior, compile, test, and explain one mistake before advancing.

## Core Model

`struct` and `class` differ mainly in default access; both can own resources and enforce invariants through constructors and methods.

Automatic storage ends at scope exit. Dynamic `new` constructs an object whose lifetime must be ended; manual delete paths are fragile.

RAII ties resource release to destruction. Member construction order, reverse destruction, and partial-construction cleanup determine failure safety.

## Deeper Reasoning

A constructor establishes the class invariant; the destructor releases resources even when a later operation throws. Build a one-resource owner first, then transfer ownership by move and leave the source in a valid empty state. Delete copying unless you can define an independent copy. `new`/`delete` inside a learning wrapper can expose the mechanism, but normal client code should prefer standard RAII owners. Acquire multiple resources into independent RAII objects so partial construction unwinds correctly.

## Worked Example

A fake file handle owner starts empty or valid, closes valid handles once in its destructor, and becomes empty after a move. Simulate acquisition failure after each step and count releases.

```cpp
struct Counter {
    int* closes;
    ~Counter() { ++*closes; }
};
// Two Counter locals close in reverse construction order.
```

Use the example to name every owner, borrowed object, valid state, and failure path. Change one input or lifetime assumption and predict the outcome before running it.

## Subtleties to Test

- A destructor is not run for a partially constructed containing object.
- Copying a raw handle without an ownership policy causes double release.

## Connection

Next, copy and move semantics specify how owners and values behave under transfer. Reuse at least one function or type from the prior lesson in the applied tasks; keep its earlier tests passing.

## Interview Check

Trace object lifetime and every close in a move-only owner during partial construction failure. First explain the model, then code a smaller version, give edge cases, and state time and extra-space costs.

## Exit Gate

Finish the ten TODOs in [the assignment](../work/lesson-07/ASSIGNMENT.md), pass focused tests, and explain the concept and ownership decisions without notes. Do not mark a lesson complete because its final demo merely runs.
