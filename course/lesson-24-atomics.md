# Lesson 24 - Atomics and the C++ Memory Model

## Objective

Master atomics and the c++ memory model well enough to implement, test, review, benchmark, and explain production code.

## Theory

`atomic`, CAS, relaxed/acquire/release/acq_rel/seq_cst, modification order, visibility, reorderings, fences, and why `volatile` is not atomic.

## Engineering Lab

Build relaxed metrics and safe publication; repair broken CAS and double-checked-init examples; annotate happens-before graphs.

## Required Evidence

Submit working C++20 code, focused tests, invariant and complexity notes, failure analysis, benchmark evidence where performance is relevant, and a short design review recording rejected alternatives.

## Mastery Gate

Prove correctness with memory-model relations, not hardware folklore.

