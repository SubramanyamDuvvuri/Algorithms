# Lesson 19 Assignment: Benchmark Design and Profiling

Read [Lesson 19](../../course/lesson-19-benchmarking.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 181-183)

- [ ] **Activity 181:** Write a performance hypothesis and a representative input generator.
- [ ] **Activity 182:** Prevent dead-code elimination using observable results.
- [ ] **Activity 183:** Compile release and debug variants and record flags.

## Applied (activities 184-187)

- [ ] **Activity 184:** Warm up before timing and run repeated samples.
- [ ] **Activity 185:** Report median and spread, not a single best value.
- [ ] **Activity 186:** Check correctness outside the timed region.
- [ ] **Activity 187:** Profile a chosen workload and identify its dominant cost.

## Expert (activities 188-190)

- [ ] **Activity 188:** Change exactly one variable and compare before/after.
- [ ] **Activity 189:** Report CPU, compiler, sizes, and measurement limitations.
- [ ] **Activity 190:** Reject or accept the original hypothesis with evidence.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain benchmark design and profiling from a blank page. Rebuild warm up before timing and run repeated samples under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
