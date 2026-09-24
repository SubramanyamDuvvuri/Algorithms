# Lesson 9 - Templates, Containers, Iterators, and Generic APIs

## What You Gain

You'll be able to write generic, container-agnostic algorithms the way the standard library does, using templates and iterators instead of duplicating logic per type. This is the skill that lets you build reusable libraries instead of one-off code, and it's what makes STL-style code readable to you instead of intimidating.

This chapter builds on Lesson 8. Work through the model before the [ten-task assignment](../work/lesson-09/ASSIGNMENT.md). Predict behavior, compile, test, and explain one mistake before advancing.

## Core Model

A function or class template describes a family of definitions, instantiated for concrete types. Requirements on type arguments must be understood or constrained.

`vector`, `array`, ordered maps, and hash maps trade locality, lookup cost, and invalidation. Iterators and spans borrow ranges and can be invalidated by mutation.

Standard algorithms operate over iterator or range contracts; a generic API should preserve ownership and const correctness.

## Deeper Reasoning

A function template is instantiated for concrete types; its body must be valid for each supported type, not merely for the first example. Constrain assumptions such as readable iterators or equality-comparable elements when you can. Containers differ in iteration cost, iterator invalidation, and ownership. `std::vector`'s contiguous storage supports span views but reallocation invalidates them. An iterator range is half-open; generic algorithms depend on that convention and on the iterator category their operations require.

## Worked Example

Template `sum` over an array reference, then compare with `sum(std::span<const int>)`. The first captures compile-time extent; the second accepts many contiguous owners but borrows their storage.

```cpp
template <typename T>
T maximum(const T& a, const T& b) {
    return a < b ? b : a;
}
```

Use the example to name every owner, borrowed object, valid state, and failure path. Change one input or lifetime assumption and predict the outcome before running it.

## Subtleties to Test

- A generic template may compile for one type and fail for another.
- Container growth can invalidate saved iterators and spans.

## Connection

Next, polymorphism and smart pointers provide runtime choices and explicit ownership. Reuse at least one function or type from the prior lesson in the applied tasks; keep its earlier tests passing.

## Interview Check

Choose a container and generic API for a stated workload; defend invalidation and complexity. First explain the model, then code a smaller version, give edge cases, and state time and extra-space costs.

## Exit Gate

Finish the ten TODOs in [the assignment](../work/lesson-09/ASSIGNMENT.md), pass focused tests, and explain the concept and ownership decisions without notes. Do not mark a lesson complete because its final demo merely runs.
