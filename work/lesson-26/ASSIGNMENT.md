# Lesson 26 Assignment: Futures, Promises, and Cancellation

Read [Lesson 26](../../course/lesson-26-async.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 251-253)

- [ ] **Activity 251:** Return a future for a pure computation.
- [ ] **Activity 252:** Propagate exceptions from worker to future.
- [ ] **Activity 253:** Test a failing task and verify error arrives once.

## Applied (activities 254-257)

- [ ] **Activity 254:** Use promise to bridge a callback result.
- [ ] **Activity 255:** Specify cancellation before start versus during work.
- [ ] **Activity 256:** Cooperatively check stop_token in a long task.
- [ ] **Activity 257:** Avoid dangling input views by taking ownership.

## Expert (activities 258-260)

- [ ] **Activity 258:** Run multiple tasks and collect all outcomes.
- [ ] **Activity 259:** Compare async launch policies and document blocking behavior.
- [ ] **Activity 260:** Write an API contract for result, error, cancellation, and lifetime.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain futures, promises, and cancellation from a blank page. Rebuild use promise to bridge a callback result under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
