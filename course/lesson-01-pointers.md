# Lesson 1 - Pointers, Addresses, and Lifetime

## Objective

Master pointers, addresses, and lifetime well enough to implement, test, review, benchmark, and explain production code.

## Theory

Addresses, indirection, `nullptr`, pointer arithmetic, pointer types, right-to-left `const`, pointer safety, provenance, ownership, and object lifetime.

Start from zero: a variable is an object containing a value; an address identifies its storage; a pointer is another object whose value can identify that storage; dereferencing accesses the pointed-to object. Learn these four ideas before pointer arithmetic or ownership terminology.

## Engineering Lab

Implement `not_null<T*>`, pointer-based binary search, and a non-owning intrusive list. Audit use-after-free, invalid arithmetic, double-delete, and const-cast bugs.

## Required Evidence

Submit working C++20 code, focused tests, invariant and complexity notes, failure analysis, benchmark evidence where performance is relevant, and a short design review recording rejected alternatives.

## Mastery Gate

Draw the object/ownership graph and prove every dereference occurs within the pointee lifetime.
