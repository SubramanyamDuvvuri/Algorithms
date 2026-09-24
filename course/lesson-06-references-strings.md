# Lesson 6 - References, Const, Strings, and Value Categories

## What You Gain

You'll finally have a rock-solid mental model of lvalues, rvalues, and const-correctness -- the part of C++ that trips up even experienced engineers. This directly explains why some function calls copy, some move, and some just observe, which is essential for writing efficient APIs and for reading move-semantics-heavy code without guessing.

This chapter builds on Lesson 5. Work through the model before the [ten-task assignment](../work/lesson-06/ASSIGNMENT.md). Predict behavior, compile, test, and explain one mistake before advancing.

## Core Model

References alias objects and are not owners. `T&`, `const T&`, and `T&&` bind different expression categories; temporary lifetime extension has narrow rules.

`std::string` owns characters while `std::string_view` borrows a character range. Reallocation, destruction, and temporary owners can invalidate a view.

The return type of an API must state whether the caller receives an owning value or a borrowed reference/view; the type alone cannot prove lifetime.

## Deeper Reasoning

A reference must bind to an object, but that object can still expire while the reference is retained. `const` on a view forbids mutation through that path; it does not freeze every alias to the object. Lvalue, xvalue, and prvalue categories affect overload resolution and moves. Returning `std::string_view` into a local `std::string` is invalid even when the characters looked correct during the call. Draw the owner and every borrower before returning a view from a tokenizer.

## Worked Example

A tokenizer may return `string_view` slices of a caller-owned `std::string`. If the string changes capacity or dies, every slice may dangle. Copy slices into strings only when retention is required.

```cpp
#include <string>
#include <string_view>
std::string owner = "red,blue";
std::string_view view{owner}; // Borrowed from owner.
```

Use the example to name every owner, borrowed object, valid state, and failure path. Change one input or lifetime assumption and predict the outcome before running it.

## Subtleties to Test

- A non-null view may still dangle.
- Returning `const&` to a local does not extend its lifetime.

## Connection

Next, classes and RAII give resources explicit owners. Reuse at least one function or type from the prior lesson in the applied tasks; keep its earlier tests passing.

## Interview Check

Trace a returned `string_view` through three callers and identify the exact dangling point. First explain the model, then code a smaller version, give edge cases, and state time and extra-space costs.

## Exit Gate

Finish the ten TODOs in [the assignment](../work/lesson-06/ASSIGNMENT.md), pass focused tests, and explain the concept and ownership decisions without notes. Do not mark a lesson complete because its final demo merely runs.
