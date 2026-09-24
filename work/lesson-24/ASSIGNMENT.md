# Lesson 24 Assignment: Atomics and the C++ Memory Model

Read [Lesson 24](../../course/lesson-24-atomics.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 231-233)

- [ ] **Activity 231:** Implement a relaxed atomic counter and explain what it guarantees.
- [ ] **Activity 232:** Use release-store and acquire-load to publish immutable data.
- [ ] **Activity 233:** State the happens-before chain for the publication.

## Applied (activities 234-237)

- [ ] **Activity 234:** Show why a relaxed flag is insufficient to publish plain fields.
- [ ] **Activity 235:** Implement compare_exchange retry with expected-value updates.
- [ ] **Activity 236:** Handle spurious failure from compare_exchange_weak.
- [ ] **Activity 237:** Distinguish atomic progress from data-structure progress.

## Expert (activities 238-240)

- [ ] **Activity 238:** Add a bounded message-passing stress test.
- [ ] **Activity 239:** Use TSAN where available and record its limitations.
- [ ] **Activity 240:** Write a litmus-style reasoning note without claiming one run proves correctness.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain atomics and the c++ memory model from a blank page. Rebuild show why a relaxed flag is insufficient to publish plain fields under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
