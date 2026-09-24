# Lesson 22: Threads, Lifetime, and Data Races

## What You Gain

You'll be able to spot a data race by reading code, not just by getting lucky with a sanitizer, and manage thread lifetime so nothing outlives what it depends on. This opens Part III's concurrency arc -- the single most-tested-and-most-feared topic in senior C++ interviews, and the one most production outages actually come from.

## Why This Comes Now

Lesson 21 established simd, vectorization, and parallel cpu work. This chapter uses that foundation to study threads, lifetime, and data races.

## Core Model

A data race is undefined behavior; thread lifetime and borrowed captures must be explicit. jthread and stop_token make cancellation cooperative.

Thread creation does not make captured references live longer. A join establishes completion visibility, while concurrent unsynchronized conflicting access to one object is undefined behavior.

## Mechanism and Failure Cases

Start by drawing object lifetimes across thread boundaries: stack locals captured by reference must outlive the worker. `std::jthread` joins at destruction and can pass a stop token, but stop requests are cooperative. A race detector can find many dynamic races, not prove all schedules safe. A data race makes C++ behavior undefined, so an apparently correct final count is no defense.

## Worked Reasoning

Build a cancellable worker that processes disjoint jobs and reports progress safely. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 213 (Run two workers on disjoint output ranges.), what is the smallest case that exposes a wrong answer?
- For Activity 216 (Repair it with an atomic and compare semantics.), which invariant or ownership rule must survive each state change?
- For Activity 219 (Audit callback captures for dangling references.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 23 builds on this by moving to mutexes, deadlocks, and coordination.

Start with the [ten ordered activities](../work/lesson-22/ASSIGNMENT.md).
