# Lesson 13: Linked Structures, Stacks, Queues, and Deques

## What You Gain

You'll build and reason about the pointer-based structures underneath `std::list`, `std::stack`, `std::queue`, and `std::deque`, including their real allocation and cache costs. This connects straight back to Lesson 1's pointer/lifetime rules and is the moment you see why "just use a vector" is usually right -- and precisely when it isn't.

## Why This Comes Now

Lesson 12 established searching, sorting, and selection. This chapter uses that foundation to study linked structures, stacks, queues, and deques.

## Core Model

Node ownership, iterator invalidation, and cache locality matter as much as nominal complexity. Array-backed and linked structures have different tradeoffs.

A linked node's stable address does not imply cheap traversal. Circular buffers use modular indexing; growth must move logical order, not just physical slots.

## Mechanism and Failure Cases

A stack's top and a queue's front are different access disciplines; test them with an operation sequence, not just isolated calls. In a ring buffer, physical index is `(head + logical_offset) % capacity`; growth copies logical order to a new backing store. Linked-list erase changes neighboring links and ownership. Build invariant checks before benchmarking because pointer-heavy traversal often loses to contiguous storage.

## Worked Reasoning

Implement a command-history service with a stack and queue, then compare linked and contiguous storage. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 123 (Implement a circular-buffer queue with head, size, and capacity invariants.), what is the smallest case that exposes a wrong answer?
- For Activity 126 (Test head, middle, and tail insertion/removal.), which invariant or ownership rule must survive each state change?
- For Activity 129 (Compare measured traversal of vector and linked list.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 14 builds on this by moving to hash tables, sets, and heaps.

Start with the [ten ordered activities](../work/lesson-13/ASSIGNMENT.md).
