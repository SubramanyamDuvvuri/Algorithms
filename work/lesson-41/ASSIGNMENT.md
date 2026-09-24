# Lesson 41 Assignment: GPU Profiling and Performance Analysis

Read [Lesson 41](../../course/lesson-41-gpu-profiling.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 401-403)

- [ ] **Activity 401:** Establish a correctness-tested baseline at three input sizes.
- [ ] **Activity 402:** Synchronize correctly before measuring asynchronous GPU work.
- [ ] **Activity 403:** Measure host-to-device, kernel, and device-to-host separately.

## Applied (activities 404-407)

- [ ] **Activity 404:** Record warmup and repeated sample distribution.
- [ ] **Activity 405:** Estimate bytes moved and arithmetic intensity.
- [ ] **Activity 406:** Use a profiler when available to inspect occupancy and memory behavior.
- [ ] **Activity 407:** Choose one bottleneck and formulate a prediction.

## Expert (activities 408-410)

- [ ] **Activity 408:** Change one launch, layout, or transfer choice.
- [ ] **Activity 409:** Rerun correctness and timing under identical conditions.
- [ ] **Activity 410:** Report improvement, regression, uncertainty, and remaining bottleneck.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain gpu profiling and performance analysis from a blank page. Rebuild record warmup and repeated sample distribution under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
