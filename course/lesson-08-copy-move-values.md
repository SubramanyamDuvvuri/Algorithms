# Lesson 8 - Copy, Move, Operators, and Value Semantics

## What You Gain

You'll know exactly when your objects copy, move, or alias, and be able to implement the rule-of-five correctly instead of by cargo cult. This is the difference between a class that's cheap to pass around and one that silently duplicates megabytes of data on every function call -- a real performance bug you'll now be able to spot on sight.

This chapter builds on Lesson 7. Work through the model before the [ten-task assignment](../work/lesson-08/ASSIGNMENT.md). Predict behavior, compile, test, and explain one mistake before advancing.

## Core Model

A copy creates independent state; a move transfers resources under a documented moved-from contract. `std::move` only casts, while copy elision can avoid both operations.

The Rule of Zero prefers standard owner members; custom ownership may require careful destructor, copy, and move decisions.

Operator overloads, explicit constructors, and comparisons should preserve domain invariants. Arithmetic must define overflow and rounding.

## Deeper Reasoning

Copying a value should yield independent state or intentionally shared immutable state; a shallow copy of an owning raw pointer gives two apparent owners and double deletion. A move transfers resources but does not promise that the source retains its old value. Prefer the Rule of Zero when members already manage themselves; write special members only when a class owns something directly. For checked arithmetic, define overflow before writing operators. For ordering, test laws such as reflexivity and transitivity, not just sample outputs.

## Worked Example

Instrument a buffer owner and predict constructor calls when returning by value, copying, moving, and assigning. Then define a checked Quantity whose addition either returns a valid result or reports overflow.

```cpp
#include <utility>
struct Buffer { /* owns storage and defines move behavior */ };
// std::move(x) is a cast; Buffer's move constructor does the transfer.
```

Use the example to name every owner, borrowed object, valid state, and failure path. Change one input or lifetime assumption and predict the outcome before running it.

## Subtleties to Test

- `std::move` does not itself call a move constructor.
- Defaulted comparison is only right when member order matches domain order.

## Connection

Next, templates and containers make the same safe value behavior reusable. Reuse at least one function or type from the prior lesson in the applied tasks; keep its earlier tests passing.

## Interview Check

Explain copy versus move versus elision, then design an invariant-preserving value type. First explain the model, then code a smaller version, give edge cases, and state time and extra-space costs.

## Exit Gate

Finish the ten TODOs in [the assignment](../work/lesson-08/ASSIGNMENT.md), pass focused tests, and explain the concept and ownership decisions without notes. Do not mark a lesson complete because its final demo merely runs.
