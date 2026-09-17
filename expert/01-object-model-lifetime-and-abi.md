# 01 - Object Model, Lifetime, And ABI

Goal: understand what C++ objects are, how they live, and where abstraction touches machine reality.

## Topics

- Storage duration: automatic, dynamic, static, thread-local.
- Object lifetime vs storage lifetime.
- Construction and destruction order.
- Base and member initialization order.
- Temporary lifetime extension.
- Copy elision and return value optimization.
- Standard layout and trivial types.
- Alignment and padding.
- Virtual tables and dynamic dispatch.
- Multiple inheritance basics.
- ABI stability and binary boundaries.

## Lifetime Traps

- Returning reference to local.
- Storing `string_view` to a temporary string.
- Capturing references in async work.
- Moving from an object and assuming old value.
- Destroying a base pointer without virtual destructor.
- Keeping pointer into vector across reallocation.

## ABI Thinking

ABI matters when binaries compiled separately must agree on:

- Function calling convention.
- Object layout.
- Name mangling.
- Exception behavior.
- Standard library version.
- Compiler version and flags.

Stable plugin boundaries often use C-compatible APIs or carefully versioned interfaces.

## Hard Labs

1. Print `sizeof`, `alignof`, and field offsets for several classes.
2. Compare virtual vs non-virtual object sizes.
3. Demonstrate temporary lifetime extension and dangling `string_view`.
4. Build a plugin-style boundary using opaque handles.
5. Write an ADR: header-only templates vs compiled library.

## Mastery Questions

- When does an object lifetime begin?
- Why is storage not the same as an object?
- What does virtual dispatch require?
- What breaks ABI compatibility?
- Why are exceptions across binary/plugin boundaries risky?

