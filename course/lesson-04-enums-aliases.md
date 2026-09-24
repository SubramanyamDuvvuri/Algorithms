# Lesson 4 - Enums, Type Aliases, and Named States

## What You Gain

You'll design state and configuration types that make illegal states unrepresentable, using scoped enums and aliases instead of raw ints and magic strings. This is the quiet skill behind APIs that are hard to misuse -- the kind senior engineers get complimented on in code review, and the kind that prevents an entire category of bugs before they're written.

This chapter builds on Lesson 3. Work through the model before the [ten-task assignment](../work/lesson-04/ASSIGNMENT.md). Predict behavior, compile, test, and explain one mistake before advancing.

## Core Model

`typedef` and `using` give existing types new names; aliases improve readability but do not create distinct runtime types.

An unscoped enum can convert more freely than `enum class`. An underlying type describes representation, not which raw values are meaningful.

A flag set models independent bits; a state enum models one choice. Unknown protocol values need an explicit reject or preserve policy.

## Deeper Reasoning

An alias is substitutable for its target type: `typedef unsigned char Byte;` and `using Byte = unsigned char;` do not stop a length from being passed where a message type is expected. A scoped enum *does* create a distinct type, but a cast from an arbitrary underlying value can still produce an unnamed enumerator. At a byte boundary, keep raw input separate until validation succeeds. For flags, define masks and bit operations deliberately; do not treat combined independent bits as a single exclusive state.

## Worked Example

`using Byte = std::uint8_t` still permits mixing Byte with other unsigned-byte values. `enum class MessageType : Byte { data=1, ping=2 }` separates named states; byte value 7 must be handled as unknown.

```cpp
#include <cstdint>
using Byte = std::uint8_t;
enum class MessageType : Byte { data = 1, ping = 2 };
```

Use the example to name every owner, borrowed object, valid state, and failure path. Change one input or lifetime assumption and predict the outcome before running it.

## Subtleties to Test

- Aliases do not prevent mixing unrelated integer domains.
- Unknown bytes cannot be validated by a cast alone.

## Connection

Next, functions and callback types turn these state decisions into APIs. Reuse at least one function or type from the prior lesson in the applied tasks; keep its earlier tests passing.

## Interview Check

Explain alias versus distinct type, scoped enum versus flags, and unknown wire-value behavior. First explain the model, then code a smaller version, give edge cases, and state time and extra-space costs.

## Exit Gate

Finish the ten TODOs in [the assignment](../work/lesson-04/ASSIGNMENT.md), pass focused tests, and explain the concept and ownership decisions without notes. Do not mark a lesson complete because its final demo merely runs.
