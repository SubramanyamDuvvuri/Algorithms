# 02 - Modern C++ Deep Dive

Goal: use modern C++ as a design language, not a bag of features.

## Topics

- Value semantics.
- Move semantics.
- Perfect forwarding.
- Rule of zero/five.
- `std::optional`, `std::variant`, `std::expected` style error modeling.
- `std::span` and `std::string_view`.
- Ranges mindset.
- RAII for non-memory resources.
- Exception safety.
- Coroutines conceptually.

## Value Semantics

Prefer types that behave like values when possible. They are easier to reason about, test, and compose.

Use reference semantics only when identity, sharing, polymorphism, or non-copyable resources matter.

## Error Handling

Options:

- Exceptions.
- Return status.
- `std::optional`.
- Expected-like result type.
- Error callback or policy.

Choose based on recoverability, API ergonomics, performance constraints, and project conventions.

## Hard Labs

1. Implement a move-only file, socket, and thread wrapper.
2. Implement an expected-like `Result<T, E>` type.
3. Write a parser returning structured errors.
4. Refactor inheritance to `std::variant`.
5. Design a safe API around `std::span`.

## Mastery Questions

- What state is a moved-from object in?
- When is `shared_ptr` the wrong answer?
- What is the strong exception guarantee?
- Why can `string_view` be dangerous?
- What makes an API "hard to misuse"?

