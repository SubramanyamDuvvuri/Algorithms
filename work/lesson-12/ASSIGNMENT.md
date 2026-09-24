# Lesson 12 Assignment: Searching, Sorting, and Selection

Read [Lesson 12](../../course/lesson-12-searching-sorting.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 111-113)

- [ ] **Activity 111:** Implement iterative lower_bound over a sorted vector.
- [ ] **Activity 112:** Test lower_bound on empty, duplicate, absent, and boundary keys.
- [ ] **Activity 113:** Implement insertion sort and record its loop invariant.

## Applied (activities 114-117)

- [ ] **Activity 114:** Implement merge sort with one reusable scratch buffer.
- [ ] **Activity 115:** Test merge-sort stability using equal-key records.
- [ ] **Activity 116:** Implement quicksort partition with documented boundary convention.
- [ ] **Activity 117:** Construct sorted and duplicate-heavy inputs that expose bad pivots.

## Expert (activities 118-120)

- [ ] **Activity 118:** Use median-of-three or randomized pivot and remeasure comparisons.
- [ ] **Activity 119:** Implement quickselect and compare results with nth_element.
- [ ] **Activity 120:** Choose algorithms for tiny, mostly sorted, duplicate-heavy, and top-k workloads.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain searching, sorting, and selection from a blank page. Rebuild implement merge sort with one reusable scratch buffer under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
