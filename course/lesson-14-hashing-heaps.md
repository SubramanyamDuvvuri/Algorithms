# Lesson 14: Hash Tables, Sets, and Heaps

## What You Gain

You'll implement a hash table and a heap from scratch, understand collision handling and amortized cost, and know when `unordered_map`'s guarantees are and aren't good enough. This is one of the highest-frequency interview topics, and heaps specifically show up constantly in real systems -- schedulers, top-k queries, priority-based work queues.

## Why This Comes Now

Lesson 13 established linked structures, stacks, queues, and deques. This chapter uses that foundation to study hash tables, sets, and heaps.

## Core Model

Hashing trades ordering for expected constant-time access; collisions and load factor determine behavior. Heaps support repeated extrema with logarithmic updates.

A hash function maps keys to buckets; equality decides collisions. Rehashing invalidates some handles, and a heap is a partial order, not a sorted array.

## Mechanism and Failure Cases

Hash collisions are normal and must be resolved using key equality, not ignored. A rehash redistributes all entries and can be expensive, while a load-factor threshold keeps average chains short. A binary heap obeys parent-before-child priority, but its array is not globally sorted. For top-k, cost depends on whether k is small relative to n and whether results must be sorted.

## Worked Reasoning

Build a frequency index and priority scheduler on one shared record type. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 133 (Write a small separate-chaining hash table with a configurable hash.), what is the smallest case that exposes a wrong answer?
- For Activity 136 (Explain average versus adversarial lookup cost.), which invariant or ownership rule must survive each state change?
- For Activity 139 (Add decrease-key or a stale-entry policy for priority updates.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 15 builds on this by moving to binary trees, bsts, balanced trees, and tries.

Start with the [ten ordered activities](../work/lesson-14/ASSIGNMENT.md).
