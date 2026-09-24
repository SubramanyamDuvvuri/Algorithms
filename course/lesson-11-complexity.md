# Lesson 11: Big-O, Invariants, and Algorithm Analysis

## What You Gain

You'll be able to derive an algorithm's time and space complexity from first principles instead of memorizing it, and state the invariant that makes it correct. This is the exact skill tested in every technical interview's first ten minutes, and the one that lets you predict -- before running anything -- whether your code will melt down at production scale.

## Why This Comes Now

The first ten lessons established C++ memory, ownership, type, and API mechanics. Now analyze the behavior and cost of the algorithms built on them.

## Core Model

Asymptotic bounds describe growth, not wall-clock time. Separate worst, average, and amortized costs; count operations before benchmarking.

Use a cost model: choose the operation to count, express it as a function of n, then drop constants only when comparing growth. Amortized cost is a sequence guarantee, not a claim that every append is cheap.

## Mechanism and Failure Cases

For linear search over n items, worst-case comparisons are n; binary search over a sorted range halves a remaining interval, giving at most about log2(n)+1 iterations. State whether n is element count, vertices plus edges, or bytes, and whether you count comparisons, allocations, or transfers. An O(n) method can win at small sizes because constants and locality still matter.

## Worked Reasoning

Build operation-counting probes that compare linear search, binary search, vector growth, and nested loops. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 103 (Instrument linear search and compare counts to the derivation.), what is the smallest case that exposes a wrong answer?
- For Activity 106 (Analyze a nested triangular loop with a summation.), which invariant or ownership rule must survive each state change?
- For Activity 109 (Write one invariant and termination argument for binary search.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 12 builds on this by moving to searching, sorting, and selection.

Start with the [ten ordered activities](../work/lesson-11/ASSIGNMENT.md).
