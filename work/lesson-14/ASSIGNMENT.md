# Lesson 14 Assignment: Hash Tables, Sets, and Heaps

Read [Lesson 14](../../course/lesson-14-hashing-heaps.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 131-133)

- [ ] **Activity 131:** Implement a key-to-count frequency table using unordered_map.
- [ ] **Activity 132:** Test duplicate keys, missing keys, and empty input.
- [ ] **Activity 133:** Write a small separate-chaining hash table with a configurable hash.

## Applied (activities 134-137)

- [ ] **Activity 134:** Force collisions and verify lookup and erase correctness.
- [ ] **Activity 135:** Track load factor and rehash without losing entries.
- [ ] **Activity 136:** Explain average versus adversarial lookup cost.
- [ ] **Activity 137:** Implement binary min-heap push and pop on vector.

## Expert (activities 138-140)

- [ ] **Activity 138:** Test heap property after each randomized operation.
- [ ] **Activity 139:** Add decrease-key or a stale-entry policy for priority updates.
- [ ] **Activity 140:** Use the frequency index and heap for top-k, then compare with a sorted oracle.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain hash tables, sets, and heaps from a blank page. Rebuild force collisions and verify lookup and erase correctness under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
