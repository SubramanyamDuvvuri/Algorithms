# Lesson 40 Assignment: GPU Memory, Reductions, and Scans

Read [Lesson 40](../../course/lesson-40-gpu-memory-primitives.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 391-393)

- [ ] **Activity 391:** Implement CPU sum and exclusive scan references.
- [ ] **Activity 392:** Test empty, singleton, odd, and large inputs.
- [ ] **Activity 393:** Write a per-block reduction with bounds-safe loads.

## Applied (activities 394-397)

- [ ] **Activity 394:** Use synchronization only where shared data requires it.
- [ ] **Activity 395:** Combine partial sums deterministically or document floating variance.
- [ ] **Activity 396:** Implement a block scan with explicit tail behavior.
- [ ] **Activity 397:** Compose block offsets for full-array scan.

## Expert (activities 398-400)

- [ ] **Activity 398:** Compare results with CPU references under numeric policy.
- [ ] **Activity 399:** Measure global memory traffic and block-size effects.
- [ ] **Activity 400:** Explain coalescing, divergence, occupancy, and why the chosen tuning won.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain gpu memory, reductions, and scans from a blank page. Rebuild use synchronization only where shared data requires it under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
