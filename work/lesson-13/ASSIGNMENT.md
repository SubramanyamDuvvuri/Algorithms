# Lesson 13 Assignment: Linked Structures, Stacks, Queues, and Deques

Read [Lesson 13](../../course/lesson-13-linear-structures.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 121-123)

- [ ] **Activity 121:** Implement a vector-backed stack with push, pop, and top contracts.
- [ ] **Activity 122:** Test empty-stack behavior explicitly.
- [ ] **Activity 123:** Implement a circular-buffer queue with head, size, and capacity invariants.

## Applied (activities 124-127)

- [ ] **Activity 124:** Handle queue wraparound and growth without losing order.
- [ ] **Activity 125:** Implement a singly linked list with unique ownership of nodes.
- [ ] **Activity 126:** Test head, middle, and tail insertion/removal.
- [ ] **Activity 127:** Add a list destructor/clear path and verify no leaked nodes.

## Expert (activities 128-130)

- [ ] **Activity 128:** Implement a deque operation needed by command history.
- [ ] **Activity 129:** Compare measured traversal of vector and linked list.
- [ ] **Activity 130:** Explain iterator/reference invalidation and complexity for each mutation.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain linked structures, stacks, queues, and deques from a blank page. Rebuild handle queue wraparound and growth without losing order under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
