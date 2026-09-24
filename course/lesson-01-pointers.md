# Lesson 1 - Pointers, Addresses, and Lifetime

## What You Gain

By the end you can reason about any pointer in five seconds flat: what it points to, who owns that memory, and when it stops being valid -- the skill that separates people who fix segfaults from people who cause them. This is the foundation under every use-after-free, dangling reference, and buffer overrun you will ever debug in production C++, and it's the first thing a senior interviewer probes when they hand you a pointer-heavy snippet.

## Objective

Master pointers, addresses, and lifetime well enough to implement, test, review, benchmark, and explain production code.

## Theory

Addresses, indirection, `nullptr`, pointer arithmetic, pointer types, right-to-left `const`, pointer safety, provenance, ownership, and object lifetime.

Start from zero: a variable is an object containing a value; an address identifies its storage; a pointer is another object whose value can identify that storage; dereferencing accesses the pointed-to object. Learn these four ideas before pointer arithmetic or ownership terminology.

## Deep Dive

An address is a location, while a pointer is an object storing an address. A pointer does not own or extend the pointee's lifetime. Dereferencing requires a valid, suitably typed object that is still alive; `nullptr` and one-past-end do not satisfy that rule. `const int*` protects the pointee through that access path; `int* const` prevents rebinding the pointer.

### Objects, addresses, and access

```cpp
void example() {
    int value = 7;          // An int object with automatic storage duration.
    int* pointer = &value;  // A separate pointer object storing value's address.
    *pointer = 9;           // Accesses the same int object as value.
}
```

The expression `&value` obtains an address; `pointer` stores it; `*pointer` accesses the object at that address. `&pointer` is a different address: the pointer object itself also occupies storage. Two pointers may identify the same object without either pointer owning it. An address printed on one run need not be the same on another run.

A local object's lifetime ends when its scope ends. A pointer that still contains its old address is **dangling**: non-null does not imply valid. Do not return a pointer to a local, retain a view after its owner dies, or dereference a pointer after deleting its owner. Avoid executing such examples; draw the ownership and lifetime timeline instead.

### Null and const are different questions

`nullptr` means the pointer identifies no object. Check it before dereferencing. A reference normally expresses a required existing object; a pointer can express an optional one. A function taking `int*` must say whether null is allowed and what happens when it arrives.

```cpp
int a = 1;
int b = 2;
const int* read_only = &a; // Cannot write a through read_only; may rebind to b.
int* const fixed = &a;     // May write a through fixed; cannot rebind fixed.
const int* const both = &a; // Neither write through nor rebind.
```

These declarations constrain an access path, not necessarily the underlying object. `a` remains mutable by another non-const access path. Do not cast away const to force a write through an originally const object.

### Ranges and pointer arithmetic

For an array, `[first,last)` includes `first` and excludes `last`. `last` may equal one-past-end: it is useful for comparison and subtraction within the same array but must never be dereferenced. Pointer arithmetic is defined only within one array object or its one-past-end position. Avoid comparing or subtracting unrelated pointers as though they formed a range.

```cpp
void walk() {
    int values[3] = {4, 8, 12};
    for (const int* p = values; p != values + 3; ++p) {
        // *p names a live element; values + 3 is only the stopping boundary.
    }
}
```

Before binary search, write its invariant: if the sought value exists, it is in the current sorted `[first,last)` range. Choose a midpoint inside that range, then discard only a half that cannot contain the answer. State what an empty range returns. If `last - first` is valid, the range length is available without reading an element. For duplicates, this assignment accepts any matching element; the interview extension is to return the first match.

### Ownership review

For every pointer, answer four questions: which object does it identify, who ends that object's lifetime, when can the pointer become invalid, and may the pointer be null? The non-owning list in a later lesson will rely on exactly this review. For now, `require_non_null(int*)` checks one precondition but still does not own or prolong the pointed-to `int`.

## Worked Reasoning

Draw `int value = 7; int* p = &value;`. Name two objects and their lifetimes. After `*p = 9`, both `value` and `*p` read 9. If `value` leaves scope, retaining `p` does not keep it alive. For `[first,last)`, `last` is a valid boundary but never a valid element to read.

## Connection

Lesson 2 uses these exact lifetime and range rules for arrays and spans.

This is also the basis for reviewing low-level C++ APIs: a fast function is still wrong if one dereference happens outside an object's lifetime. In a systems interview, explain ownership and valid ranges before optimizing pointer arithmetic.

## Interview Drill

Given a pointer-returning function, identify the owner, the last valid dereference, and every possible dangling path.

## Engineering Lab

Implement null-safe pointer operations, pointer-based binary search, and in-place range reversal. Audit dangling access, invalid arithmetic, and const-cast risks without executing undefined behavior. Lesson 2 gives these ranges explicit extents; Lesson 7 adds resource ownership.

## Required Evidence

Submit working C++20 code, focused tests, invariant and complexity notes, failure analysis, benchmark evidence where performance is relevant, and a short design review recording rejected alternatives.

## Mastery Gate

Draw the object/ownership graph and prove every dereference occurs within the pointee lifetime.
