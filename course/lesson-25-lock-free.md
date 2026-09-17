# Lesson 25 - Lock-Free Structures and Memory Reclamation

## Objective

Master lock-free structures and memory reclamation well enough to implement, test, review, benchmark, and explain production code.

## Theory

SPSC/MPMC queues, linearization, progress guarantees, ABA, hazard pointers, epochs, false sharing, and cache contention.

## Engineering Lab

Implement/prove an SPSC ring and one reclaimed lock-free structure; benchmark against mutex queues through p99.9.

## Required Evidence

Submit working C++20 code, focused tests, invariant and complexity notes, failure analysis, benchmark evidence where performance is relevant, and a short design review recording rejected alternatives.

## Mastery Gate

Defend linearization points, memory orders, wraparound, reclamation, and progress.

