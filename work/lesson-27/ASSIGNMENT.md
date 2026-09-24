# Lesson 27 Assignment: Work-Stealing Thread Pool

Read [Lesson 27](../../course/lesson-27-work-stealing-pool.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 261-263)

- [ ] **Activity 261:** Build a fixed worker pool with one global protected queue.
- [ ] **Activity 262:** Return futures from submitted tasks.
- [ ] **Activity 263:** Test exception propagation through futures.

## Applied (activities 264-267)

- [ ] **Activity 264:** Implement drain versus cancel shutdown policy.
- [ ] **Activity 265:** Add per-worker deques with documented owner operations.
- [ ] **Activity 266:** Implement stealing under a safe synchronization scheme.
- [ ] **Activity 267:** Track submitted, running, completed, and canceled counts.

## Expert (activities 268-270)

- [ ] **Activity 268:** Test nested submission without deadlocking the pool.
- [ ] **Activity 269:** Stress shutdown while tasks submit.
- [ ] **Activity 270:** Benchmark skewed versus balanced workloads and explain the result.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain work-stealing thread pool from a blank page. Rebuild implement drain versus cancel shutdown policy under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
