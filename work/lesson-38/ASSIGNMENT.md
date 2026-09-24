# Lesson 38 Assignment: Entity-Component Systems and Data-Oriented Design

Read [Lesson 38](../../course/lesson-38-ecs.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 371-373)

- [ ] **Activity 371:** Define entity index plus generation handle.
- [ ] **Activity 372:** Implement create and destroy with generation increments.
- [ ] **Activity 373:** Reject stale handles after slot reuse.

## Applied (activities 374-377)

- [ ] **Activity 374:** Store position and velocity in dense component arrays.
- [ ] **Activity 375:** Maintain sparse-to-dense lookup on swap-remove.
- [ ] **Activity 376:** Test insertion/removal while preserving lookup invariants.
- [ ] **Activity 377:** Implement a system that updates entities with both components.

## Expert (activities 378-380)

- [ ] **Activity 378:** Compare iteration cost with an object-per-entity baseline.
- [ ] **Activity 379:** Handle component addition/removal during system execution explicitly.
- [ ] **Activity 380:** Document cache behavior and limits of the ECS approach.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain entity-component systems and data-oriented design from a blank page. Rebuild store position and velocity in dense component arrays under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
