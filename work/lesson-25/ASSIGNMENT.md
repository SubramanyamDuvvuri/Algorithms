# Lesson 25 Assignment: Lock-Free Queues and Reclamation

Read [Lesson 25](../../course/lesson-25-lock-free.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 241-243)

- [ ] **Activity 241:** Define producer and consumer ownership for each slot.
- [ ] **Activity 242:** Implement a power-of-two bounded ring with checked capacity.
- [ ] **Activity 243:** Use release/acquire publication for committed elements.

## Applied (activities 244-247)

- [ ] **Activity 244:** Handle full and empty without reading uninitialized slots.
- [ ] **Activity 245:** Test wraparound with sequence numbers near boundaries.
- [ ] **Activity 246:** Run one producer/one consumer for many transfers.
- [ ] **Activity 247:** Verify exact order and no loss or duplication.

## Expert (activities 248-250)

- [ ] **Activity 248:** Explain why adding a second producer breaks this design.
- [ ] **Activity 249:** Document ABA and reclamation risks in an unbounded linked queue.
- [ ] **Activity 250:** Compare throughput and latency with the mutex queue under equal workloads.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain lock-free queues and reclamation from a blank page. Rebuild handle full and empty without reading uninitialized slots under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
