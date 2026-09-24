# Lesson 27: Work-Stealing Thread Pool

## What You Gain

You'll build a real work-stealing thread pool -- the scheduling design behind Intel TBB, Rust's Rayon, and most high-performance task systems -- and understand why it beats a naive shared queue under contention. This is a legitimate portfolio piece: "I implemented a work-stealing scheduler" is a strong answer to "tell me about a hard project."

## Why This Comes Now

Lesson 26 established futures, promises, and cancellation. This chapter uses that foundation to study work-stealing thread pool.

## Core Model

A pool needs a clear queue ownership and shutdown model. Work stealing improves utilization but increases synchronization and fairness complexity.

Stealing is only useful when load imbalance offsets synchronization overhead. Shutdown and nested submission expose queue and worker lifecycle mistakes that throughput tests alone miss.

## Mechanism and Failure Cases

One global queue is a baseline for correctness and scheduling overhead. A local deque lets the owner take nearby work while idle workers steal; exact synchronization depends on the chosen deque algorithm. Track pending tasks during shutdown so the pool cannot exit with accepted work or wait forever. Nested tasks that synchronously wait for tasks in the same exhausted pool can deadlock.

## Worked Reasoning

Build a minimal work-stealing pool and compare it against a global-queue baseline. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 263 (Test exception propagation through futures.), what is the smallest case that exposes a wrong answer?
- For Activity 266 (Implement stealing under a safe synchronization scheme.), which invariant or ownership rule must survive each state change?
- For Activity 269 (Stress shutdown while tasks submit.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 28 builds on this by moving to c++20 coroutines and async lifetimes.

Start with the [ten ordered activities](../work/lesson-27/ASSIGNMENT.md).
