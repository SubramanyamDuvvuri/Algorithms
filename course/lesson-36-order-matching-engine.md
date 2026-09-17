# Lesson 36 - Capstone: Multithreaded Order-Matching Engine

## Objective

Master capstone: multithreaded order-matching engine well enough to implement, test, review, benchmark, and explain production code.

## Theory

Price-time priority, lock-free ingest, order book, event sourcing, deterministic replay, concurrency, memory, architecture, and latency engineering.

## Engineering Lab

Build in milestones: pure matching model; O(1) cancel and invariants; checksummed journal/snapshot/recovery; bounded ingest/output; allocation-free steady state; p50/p99/p99.9 benchmarks. Test duplicates, overflow, partial fills, full queues, torn logs, corruption, restart, and shutdown under load.

## Required Evidence

Submit working C++20 code, focused tests, invariant and complexity notes, failure analysis, benchmark evidence where performance is relevant, and a short design review recording rejected alternatives.

## Mastery Gate

Defend correctness, linearization, ownership, recovery, schema evolution, overload behavior, and all complexity/latency claims.

