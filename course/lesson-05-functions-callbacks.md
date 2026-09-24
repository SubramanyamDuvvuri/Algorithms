# Lesson 5 - Functions, Overloads, Function Pointers, and Callbacks

## What You Gain

You'll be fluent in every way C++ passes behavior around -- overloads, function pointers, `std::function`, and lambdas -- and know the performance and lifetime tradeoffs of each. This is what lets you design plugin hooks, event callbacks, and comparator/predicate APIs that don't leak or dangle, a recurring theme in both interviews and real event-driven systems.

This chapter builds on Lesson 4. Work through the model before the [ten-task assignment](../work/lesson-05/ASSIGNMENT.md). Predict behavior, compile, test, and explain one mistake before advancing.

## Core Model

A function declaration states a callable contract; a definition provides behavior. Parameters passed by value, pointer, or reference convey different ownership and nullability.

An overload set is selected at compile time from parameter types. Default arguments are substituted at call sites and are not part of a function-pointer type.

A function pointer stores a callable function address. A capturing lambda is an object with state and does not convert to an ordinary function pointer; a noncapturing lambda can.

## Deeper Reasoning

A function pointer records a callable entry point, not captured state. Its signature includes return and parameter types, so a table of callbacks can replace a branch when the operation set is fixed. A noncapturing lambda can convert to a matching function pointer; a capturing lambda needs an object, template parameter, or type-erased wrapper. Decide who owns that object and whether a stored callback might fire after it dies. Overloads are selected at compile time; runtime dispatch is a separate mechanism.

## Worked Example

For `int apply(int,int,int(*)(int,int))`, pass named add and subtract functions. Then try a capturing lambda and explain why a plain function pointer cannot store its captured offset.

```cpp
using Operation = int (*)(int, int);
int add(int a, int b) { return a + b; }
int apply(int a, int b, Operation operation) {
    return operation(a, b);
}
```

Use the example to name every owner, borrowed object, valid state, and failure path. Change one input or lifetime assumption and predict the outcome before running it.

## Subtleties to Test

- A capturing lambda cannot be stored in a plain function pointer.
- A callback whose state refers to a local can dangle after that local dies.

## Connection

Next, reference and view lifetimes clarify callback and return-value contracts. Reuse at least one function or type from the prior lesson in the applied tasks; keep its earlier tests passing.

## Interview Check

Design a callback API for a calculator; compare function pointers, capturing lambdas, and `std::function`. First explain the model, then code a smaller version, give edge cases, and state time and extra-space costs.

## Exit Gate

Finish the ten TODOs in [the assignment](../work/lesson-05/ASSIGNMENT.md), pass focused tests, and explain the concept and ownership decisions without notes. Do not mark a lesson complete because its final demo merely runs.
