# Lesson 40: GPU Memory, Reductions, and Scans

## What You Gain

You'll implement classic GPU memory patterns (reductions, scans) and understand GPU memory hierarchy well enough to explain why naive GPU code is often slower than CPU code. This is specialized, high-value knowledge for any role touching ML infra, graphics, or high-performance computing.

## Why This Comes Now

Lesson 39 established gpu execution and kernel mapping. This chapter uses that foundation to study gpu memory, reductions, and scans.

## Core Model

Coalesced access, hierarchy, synchronization, and occupancy shape kernel design. Reductions and scans require careful partial results and tail handling.

Shared memory is per block, not a global rendezvous. Multi-block scan needs partial sums and an offset pass; floating-point reduction order can change answers within a documented tolerance.

## Mechanism and Failure Cases

A reduction combines block-local values before combining partials; the exact floating-point result can depend on the tree shape. A prefix scan is different: every output needs the sum of preceding inputs, so block-local scans need block totals and a carry/offset phase. Shared-memory barriers apply only within a block. Bounds-safe tail loads must contribute the operation's identity element.

## Worked Reasoning

Build a sum reduction and prefix scan with CPU oracles, then tune one GPU path. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 393 (Write a per-block reduction with bounds-safe loads.), what is the smallest case that exposes a wrong answer?
- For Activity 396 (Implement a block scan with explicit tail behavior.), which invariant or ownership rule must survive each state change?
- For Activity 399 (Measure global memory traffic and block-size effects.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 41 builds on this by moving to gpu profiling and performance analysis.

Start with the [ten ordered activities](../work/lesson-40/ASSIGNMENT.md).
