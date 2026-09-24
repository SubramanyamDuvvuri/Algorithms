# Lesson 21 Assignment: SIMD, Vectorization, and Parallel CPU Work

Read [Lesson 21](../../course/lesson-21-simd-parallel.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 201-203)

- [ ] **Activity 201:** Implement a scalar vector transform with explicit overflow/precision policy.
- [ ] **Activity 202:** Test tails and lengths around likely vector widths.
- [ ] **Activity 203:** Compile with vectorization diagnostics and inspect the report.

## Applied (activities 204-207)

- [ ] **Activity 204:** Remove a dependency that blocks vectorization without changing output.
- [ ] **Activity 205:** Add a SIMD-friendly contiguous input layout.
- [ ] **Activity 206:** Compare scalar and auto-vectorized performance fairly.
- [ ] **Activity 207:** Partition input into disjoint chunks for threads.

## Expert (activities 208-210)

- [ ] **Activity 208:** Implement deterministic or tolerance-bounded reduction.
- [ ] **Activity 209:** Test empty, tiny, odd, and large input sizes.
- [ ] **Activity 210:** Measure speedup versus thread count and explain memory-bandwidth limits.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain simd, vectorization, and parallel cpu work from a blank page. Rebuild remove a dependency that blocks vectorization without changing output under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
