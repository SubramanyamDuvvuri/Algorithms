# Lesson 28 - C++20 Coroutines from First Principles

## Objective

Master c++20 coroutines from first principles well enough to implement, test, review, benchmark, and explain production code.

## Theory

Coroutine frames, promise types, awaiters, `co_await`, `co_yield`, initial/final suspend, continuations, exceptions, cancellation, and frame lifetime.

## Engineering Lab

Implement lazy `Generator<T>` and move-only `Task<T>` integrated with Lesson 27; test destruction while suspended and continuation races.

## Required Evidence

Submit working C++20 code, focused tests, invariant and complexity notes, failure analysis, benchmark evidence where performance is relevant, and a short design review recording rejected alternatives.

## Mastery Gate

Trace frame creation through final destruction on every path.

