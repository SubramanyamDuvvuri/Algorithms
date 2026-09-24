# Lesson 38: Entity-Component Systems and Data-Oriented Design

## What You Gain

You'll design a data-oriented ECS and measure why it outperforms an OOP object graph at scale. This connects directly back to Lesson 20's cache-layout work and shows you a second, more radical way memory layout -- not algorithms -- determines real-world performance.

## Why This Comes Now

Lesson 37 established dynamic libraries, c abi, and plugins. This chapter uses that foundation to study entity-component systems and data-oriented design.

## Core Model

Sparse-set ECS favors dense iteration and explicit identity. Generation counters prevent stale entity handles from aliasing reused slots.

Generations distinguish a current entity from a recycled index. Sparse sets get dense iteration, but structural mutations during traversal need deferral or a documented iterator policy.

## Mechanism and Failure Cases

Generational IDs make stale handles fail lookup after index reuse. A sparse array maps an entity index to its dense position; swap-removing the last dense element requires updating that moved entity's sparse entry. Component iteration is fast when related data is contiguous, but adding/removing during iteration can invalidate the traversal. Defer structural commands or define a stable mutation phase.

## Worked Reasoning

Build a small particle simulation with generational entities. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 373 (Reject stale handles after slot reuse.), what is the smallest case that exposes a wrong answer?
- For Activity 376 (Test insertion/removal while preserving lookup invariants.), which invariant or ownership rule must survive each state change?
- For Activity 379 (Handle component addition/removal during system execution explicitly.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 39 builds on this by moving to gpu execution and kernel mapping.

Start with the [ten ordered activities](../work/lesson-38/ASSIGNMENT.md).
