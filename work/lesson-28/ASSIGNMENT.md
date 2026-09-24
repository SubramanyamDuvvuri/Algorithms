# Lesson 28 Assignment: C++20 Coroutines and Async Lifetimes

Read [Lesson 28](../../course/lesson-28-coroutines.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 271-273)

- [ ] **Activity 271:** Write a generator promise_type yielding integers.
- [ ] **Activity 272:** Define initial_suspend and final_suspend behavior.
- [ ] **Activity 273:** Own and destroy coroutine_handle exactly once.

## Applied (activities 274-277)

- [ ] **Activity 274:** Test empty and partially consumed generators.
- [ ] **Activity 275:** Explain which locals survive across suspension.
- [ ] **Activity 276:** Add exception storage and rethrow at observation.
- [ ] **Activity 277:** Implement a single-result task with an explicit scheduler policy.

## Expert (activities 278-280)

- [ ] **Activity 278:** Test destroying an unstarted and suspended task.
- [ ] **Activity 279:** Reject dangling references across suspension with an ownership fix.
- [ ] **Activity 280:** Compare coroutine and future APIs for cancellation and error handling.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain c++20 coroutines and async lifetimes from a blank page. Rebuild test empty and partially consumed generators under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
