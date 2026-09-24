# Lesson 11 Assignment: Big-O, Invariants, and Algorithm Analysis

Read [Lesson 11](../../course/lesson-11-complexity.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 101-103)

- [ ] **Activity 101:** Define input size and count primitive comparisons for linear search.
- [ ] **Activity 102:** Derive best and worst cases for that search.
- [ ] **Activity 103:** Instrument linear search and compare counts to the derivation.

## Applied (activities 104-107)

- [ ] **Activity 104:** Derive binary-search iteration bound and instrument it.
- [ ] **Activity 105:** Explain why a halving loop is logarithmic without relying on timings.
- [ ] **Activity 106:** Analyze a nested triangular loop with a summation.
- [ ] **Activity 107:** Measure vector append reallocations and explain amortized O(1).

## Expert (activities 108-110)

- [ ] **Activity 108:** Compare O(n) and O(n log n) counts for several n.
- [ ] **Activity 109:** Write one invariant and termination argument for binary search.
- [ ] **Activity 110:** Create a complexity table with time, extra space, assumptions, and adversarial inputs.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain big-o, invariants, and algorithm analysis from a blank page. Rebuild derive binary-search iteration bound and instrument it under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
