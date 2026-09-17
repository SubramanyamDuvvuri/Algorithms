# Lesson 27 - Work-Stealing Thread Pool

## Objective

Master work-stealing thread pool well enough to implement, test, review, benchmark, and explain production code.

## Theory

Worker-local deques, external submissions, stealing, task graphs/dependencies, wakeups, admission control, metrics, and graceful shutdown.

## Engineering Lab

Deliver a multi-file CMake pool in stages: fixed pool, local queues, stealing, dependencies, bounded admission, drain/cancel modes; stress recursive submission and blocked workers.

## Required Evidence

Submit working C++20 code, focused tests, invariant and complexity notes, failure analysis, benchmark evidence where performance is relevant, and a short design review recording rejected alternatives.

## Mastery Gate

Defend fairness, starvation, ownership, exceptions, and every shutdown state.

