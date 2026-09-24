# Lesson 35 Assignment: Patterns for Extensible C++ Systems

Read [Lesson 35](../../course/lesson-35-design-patterns.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 341-343)

- [ ] **Activity 341:** State the change scenario and current coupling.
- [ ] **Activity 342:** Implement strategy via an interface or callable.
- [ ] **Activity 343:** Write a factory with explicit error result.

## Applied (activities 344-347)

- [ ] **Activity 344:** Implement observer subscription with lifetime-safe unsubscribe.
- [ ] **Activity 345:** Test callback removal during notification.
- [ ] **Activity 346:** Implement variant visitor for a closed message set.
- [ ] **Activity 347:** Compare virtual dispatch and variant exhaustiveness.

## Expert (activities 348-350)

- [ ] **Activity 348:** Avoid shared ownership where a scoped subscription suffices.
- [ ] **Activity 349:** Record allocation and ABI effects of each approach.
- [ ] **Activity 350:** Choose one design and defend the rejected alternative.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain patterns for extensible c++ systems from a blank page. Rebuild implement observer subscription with lifetime-safe unsubscribe under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
