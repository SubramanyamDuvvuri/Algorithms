# Lesson 12: Searching, Sorting, and Selection

## What You Gain

You'll implement and reason about the search and sort algorithms that underlie almost every higher-level data structure, and know which one to reach for and why. This is bread-and-butter interview material, and understanding it deeply (not just calling `std::sort`) is what lets you diagnose why a "simple" sort is the actual bottleneck in a real profile.

## Why This Comes Now

Lesson 11 established big-o, invariants, and algorithm analysis. This chapter uses that foundation to study searching, sorting, and selection.

## Core Model

Correct comparison algorithms need explicit order and invariants. Stable sorting, partitioning, lower_bound, and nth_element solve distinct questions.

Binary search maintains an answer boundary; duplicates make lower_bound more useful than finding any equal element. Merge sort's O(n) scratch storage buys stable O(n log n) behavior; quicksort's pivot quality changes depth.

## Mechanism and Failure Cases

A correct lower_bound keeps every position before `first` strictly below the key and every position at or after `last` at or above it. For merge sort, each level touches n elements and there are log n levels. For quicksort, unbalanced partitions create quadratic work; duplicate-aware partitioning avoids repeated equal-key work. Always separate sorting order, stability, and selection requirements.

## Worked Reasoning

Build a searchable event index, then compare sorting and selection strategies against standard-library oracles. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 113 (Implement insertion sort and record its loop invariant.), what is the smallest case that exposes a wrong answer?
- For Activity 116 (Implement quicksort partition with documented boundary convention.), which invariant or ownership rule must survive each state change?
- For Activity 119 (Implement quickselect and compare results with nth_element.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 13 builds on this by moving to linked structures, stacks, queues, and deques.

Start with the [ten ordered activities](../work/lesson-12/ASSIGNMENT.md).
