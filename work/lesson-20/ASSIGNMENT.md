# Lesson 20 Assignment: Caches, Layout, and Allocators

Read [Lesson 20](../../course/lesson-20-cache-allocators.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 191-193)

- [ ] **Activity 191:** Build equivalent AoS and SoA representations for one workload.
- [ ] **Activity 192:** Verify their outputs against the same oracle.
- [ ] **Activity 193:** Measure sequential traversal over both layouts.

## Applied (activities 194-197)

- [ ] **Activity 194:** Measure random access separately from sequential traversal.
- [ ] **Activity 195:** Estimate bytes touched per operation and identify unused fields.
- [ ] **Activity 196:** Demonstrate false sharing with independent counters safely.
- [ ] **Activity 197:** Add padding or local aggregation and compare throughput.

## Expert (activities 198-200)

- [ ] **Activity 198:** Use std::pmr monotonic_buffer_resource for batch lifetime.
- [ ] **Activity 199:** Check allocation counts and resource lifetime boundaries.
- [ ] **Activity 200:** Document when cache or allocator changes hurt or do not matter.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain caches, layout, and allocators from a blank page. Rebuild measure random access separately from sequential traversal under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
