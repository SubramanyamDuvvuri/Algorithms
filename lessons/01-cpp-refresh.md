# 01 - C++ Refresh

Goal: rebuild your mental model of C++ so later advanced topics are not floating on weak foundations.

## What C++ Really Is

C++ is a systems language with high-level abstractions that usually compile down to direct machine behavior. The central skill is knowing when your code is creating objects, copying objects, moving objects, borrowing objects, allocating memory, or invoking undefined behavior.

You must think in four layers:

1. Source code: what you wrote.
2. Object model: lifetimes, storage, types, overloads, constructors.
3. Runtime behavior: allocation, calls, branches, cache, I/O.
4. Design intent: ownership, invariants, APIs, failure behavior.

## Compilation Model

C++ is compiled in translation units. A `.cpp` file is compiled mostly independently, then linked with other object files.

Important terms:

- Declaration: tells the compiler something exists.
- Definition: provides storage or implementation.
- Header: usually contains declarations, templates, inline functions, constants, and type definitions.
- Linker error: the compiler accepted the code, but final symbol resolution failed.
- ODR: the One Definition Rule. You generally get one definition of an entity across the program.

## Types And Initialization

Prefer explicit, boring initialization:

```cpp
int count{0};
std::string name{"Ada"};
std::vector<int> values{1, 2, 3};
```

Common traps:

- Uninitialized local variables have indeterminate values.
- Narrowing conversions can lose data.
- `auto` removes noise but can hide references and constness if used carelessly.
- `std::initializer_list` overloads can surprise you.

## Value, Reference, Pointer

Use values when an object is small or clearly owned locally.

Use references when:

- The callee must not receive null.
- The callee does not take ownership.
- You want normal object syntax.

Use pointers when:

- Null is a meaningful state.
- You need reseating.
- You are interfacing with low-level APIs.
- You are expressing non-owning optional access.

Raw pointers should usually be non-owning. Owning raw pointers are a code smell unless you are implementing a low-level owner.

## Const Correctness

`const` is design information. It says a function will not mutate through that access path.

```cpp
class User {
public:
    const std::string& name() const { return name_; }

private:
    std::string name_;
};
```

The second `const` means the member function can be called on const `User`.

Practice reading types right to left:

- `const int* p`: pointer to const int.
- `int* const p`: const pointer to int.
- `const int* const p`: const pointer to const int.

## Functions And Overload Resolution

Function signatures communicate cost and ownership.

```cpp
void process(User user);              // takes a copy or move
void process(const User& user);       // borrows read-only
void process(User& user);             // borrows mutable
void process(std::unique_ptr<User>);  // takes ownership
```

Avoid designing APIs where ownership is unclear.

## Undefined Behavior

Undefined behavior means the C++ standard gives no guarantee. The program is not "maybe wrong"; the optimizer may assume it never happens.

Classic sources:

- Use after free.
- Out-of-bounds access.
- Data races.
- Signed integer overflow.
- Dereferencing null.
- Returning references to local variables.
- Violating strict aliasing.

## Mini Checklist

Before moving on, you should be able to explain:

- Difference between declaration and definition.
- Difference between stack object, heap allocation, and static storage.
- Why references are not nullable.
- Why `const` improves API design.
- What undefined behavior means.

## Drills

1. Rewrite your old palindrome, binary search, and recursion examples using clean function signatures and tests.
2. For every function, state whether each parameter is owned, borrowed, nullable, mutable, or read-only.
3. Create five intentional compile errors and five intentional linker errors. Explain each.
4. Create examples of dangling reference, null pointer dereference, uninitialized read, out-of-bounds vector access, and data race. Then fix each one.

