# Lesson 23: Mutexes, Deadlocks, and Coordination

## What You Gain

You'll design locking strategies that provably can't deadlock (consistent lock ordering, RAII guards, condition variables used correctly) instead of ones that happen to work in testing. This is the difference between concurrent code that's correct and concurrent code that's correct until the one time it isn't, in production, at 3am.

## Why This Comes Now

Lesson 22 established threads, lifetime, and data races. This chapter uses that foundation to study mutexes, deadlocks, and coordination.

## Core Model

Locks protect invariants, not individual lines. Condition variables need predicates because wakeups can be spurious; lock ordering avoids cycles.

A mutex protects a multi-field invariant as a unit. Condition-variable waits recheck a predicate under the lock; shutdown must wake blocked producers and consumers.

## Mechanism and Failure Cases

A condition-variable wait is a loop around a state predicate, even when using the predicate overload. Notify after a state transition that can make progress possible; shutdown is such a transition. A bounded queue must specify whether push blocks, fails, or drops when full. For multiple locks, use one consistent lock order or a coordinated lock operation to avoid cycles.

## Worked Reasoning

Implement a bounded blocking queue with shutdown and backpressure. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 223 (Implement pop with condition_variable and predicate wait.), what is the smallest case that exposes a wrong answer?
- For Activity 226 (Define behavior for push after shutdown.), which invariant or ownership rule must survive each state change?
- For Activity 229 (Create a lock-order diagram for any multiple-mutex path.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 24 builds on this by moving to atomics and the c++ memory model.

Start with the [ten ordered activities](../work/lesson-23/ASSIGNMENT.md).
