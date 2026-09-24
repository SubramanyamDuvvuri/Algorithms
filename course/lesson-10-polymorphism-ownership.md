# Lesson 10 - Polymorphism, Smart Pointers, Variants, and Errors

## What You Gain

You'll be able to choose correctly between virtual dispatch, `std::variant`, and templates for a given ownership and error-handling problem, and manage lifetimes with `unique_ptr`/`shared_ptr` without leaks or cycles. This closes out Part I: after this lesson, unfamiliar C++ should read to you as an ownership model first and syntax second.

This chapter builds on Lesson 9. Work through the model before the [ten-task assignment](../work/lesson-10/ASSIGNMENT.md). Predict behavior, compile, test, and explain one mistake before advancing.

## Core Model

Virtual dispatch chooses behavior from a dynamic type. Slicing occurs when a derived object is copied into a base value; deletion through a base owner needs a virtual destructor.

`unique_ptr` expresses one owner, `shared_ptr` shared lifetime, and `weak_ptr` an observer. Cycles and callback captures can accidentally retain objects.

`std::variant` models a closed set of alternatives. Error results and exceptions need explicit failure contracts and RAII cleanup.

## Deeper Reasoning

Runtime inheritance is open to new derived types but requires a virtual destructor when deleting through a base pointer. Copying a derived object into a base value slices off the derived part. `unique_ptr<Base>` communicates exclusive ownership; `shared_ptr` should reflect actual shared lifetime, not uncertainty, and `weak_ptr` observes without extending it. `std::variant` is a closed sum type and a visitor makes alternatives explicit. Exceptions and result values are two error contracts; whichever you choose, RAII must keep cleanup correct.

## Worked Example

Implement a message processor as both a virtual interface and a `variant` visitor. Own the polymorphic version with `unique_ptr`, and explain which code must change when a new message type is added.

```cpp
struct Processor {
    virtual ~Processor() = default;
    virtual void run() = 0;
};
```

Use the example to name every owner, borrowed object, valid state, and failure path. Change one input or lifetime assumption and predict the outcome before running it.

## Subtleties to Test

- Do not build two independent smart owners from one raw pointer.
- A shared ownership cycle can prevent all destructors from running.

## Connection

Next, Big-O and algorithmic analysis evaluate the structures and operations you built. Reuse at least one function or type from the prior lesson in the applied tasks; keep its earlier tests passing.

## Interview Check

Draw an ownership graph, explain virtual destructor and slicing, then choose variant or inheritance for a changing message set. First explain the model, then code a smaller version, give edge cases, and state time and extra-space costs.

## Exit Gate

Finish the ten TODOs in [the assignment](../work/lesson-10/ASSIGNMENT.md), pass focused tests, and explain the concept and ownership decisions without notes. Do not mark a lesson complete because its final demo merely runs.
