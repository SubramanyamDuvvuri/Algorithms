# 04 - STL, Templates, And Generic Programming

Goal: become fluent with the standard library and write reusable code without making it unreadable.

## STL Mindset

The STL is built from:

- Containers: own collections.
- Iterators: describe positions and ranges.
- Algorithms: operate on ranges.
- Function objects: customize behavior.

Prefer algorithms over hand-written loops when they express intent better.

```cpp
auto it = std::find_if(users.begin(), users.end(), [](const User& user) {
    return user.active();
});
```

## Containers

Default to `std::vector`.

Use:

- `std::array` for fixed-size stack arrays.
- `std::deque` when stable push front/back matters.
- `std::list` rarely; poor cache locality often hurts.
- `std::map` when ordered keys matter.
- `std::unordered_map` for hash lookup.
- `std::set` and `std::unordered_set` for unique membership.
- `std::priority_queue` for heap behavior.

Know iterator invalidation rules for each container.

## Strings And Views

Use `std::string` when you own text.

Use `std::string_view` when you borrow text and can guarantee the source outlives the view.

Dangling `string_view` is a common modern C++ bug.

## Templates

Templates generate code at compile time.

```cpp
template <typename T>
T clamp_value(T value, T low, T high) {
    return std::min(std::max(value, low), high);
}
```

Templates are powerful for:

- Type-safe generic algorithms.
- Zero-cost abstraction.
- Policy-based design.
- Compile-time validation.

They can become harmful when error messages, compile times, and design clarity suffer.

## Concepts

C++20 concepts constrain templates and improve error messages.

```cpp
template <typename T>
concept Addable = requires(T a, T b) {
    a + b;
};

template <Addable T>
T add(T a, T b) {
    return a + b;
}
```

## Lambdas

Use lambdas for local behavior.

Capture carefully:

- `[&]` can accidentally capture references that dangle.
- `[=]` can copy more than expected.
- Prefer explicit captures in serious code.

## Drills

1. Implement `transform_if`, `erase_if_copy`, and `top_k`.
2. Build a generic LRU cache with customizable key, value, hash, and clock.
3. Rewrite a loop-heavy file using STL algorithms and compare readability.
4. Create a template that fails with a terrible error, then improve it using a concept.
5. Implement a small range-like wrapper that supports iteration.

