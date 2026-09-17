# 03 - Templates, Concepts, And Metaprogramming

Goal: write generic C++ that is powerful, constrained, and readable.

## Topics

- Function templates.
- Class templates.
- Non-type template parameters.
- Template specialization.
- Type traits.
- SFINAE conceptually.
- C++20 concepts.
- Perfect forwarding.
- Policy-based design.
- Compile-time computation.
- Error-message quality.

## Generic Design Rule

Generic code should remove duplication or express a real abstraction. Do not template code just to look advanced.

## Concepts

Use concepts to encode requirements:

```cpp
template <typename T>
concept Hashable = requires(T value) {
    { std::hash<T>{}(value) } -> std::convertible_to<std::size_t>;
};
```

## Policy-Based Design

Example:

- Cache eviction policy.
- Clock policy.
- Locking policy.
- Serialization policy.

This can produce zero-cost customization, but too many policies create unreadable APIs.

## Hard Labs

1. Build policy-based LRU cache.
2. Add concepts for cache key requirements.
3. Implement a small type-erased callable wrapper.
4. Implement compile-time fixed string or dimensional quantity type.
5. Compare template polymorphism vs virtual polymorphism vs `std::function`.

## Mastery Questions

- What causes template code bloat?
- How do concepts improve diagnostics?
- When is type erasure better than templates?
- What does perfect forwarding preserve?
- What should be in headers and why?

