# Lesson 39 Assignment: GPU Execution and Kernel Mapping

Read [Lesson 39](../../course/lesson-39-gpu-foundations.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 381-383)

- [ ] **Activity 381:** Write CPU reference vector addition with defined numeric policy.
- [ ] **Activity 382:** Generate deterministic test vectors including empty and odd lengths.
- [ ] **Activity 383:** Describe grid, block, thread, and global-index mapping.

## Applied (activities 384-387)

- [ ] **Activity 384:** Implement a bounds-checked CUDA kernel when CUDA is available.
- [ ] **Activity 385:** Allocate device buffers and check every API result.
- [ ] **Activity 386:** Copy inputs to device and result back to host.
- [ ] **Activity 387:** Test non-multiple-of-block-size lengths.

## Expert (activities 388-390)

- [ ] **Activity 388:** Compare output to CPU with appropriate tolerance.
- [ ] **Activity 389:** Measure transfer, launch, and kernel times separately.
- [ ] **Activity 390:** Document fallback behavior and the workload size where GPU helps.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain gpu execution and kernel mapping from a blank page. Rebuild implement a bounds-checked cuda kernel when cuda is available under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
