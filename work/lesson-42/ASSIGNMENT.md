# Lesson 42 Assignment: Capstone: Streaming Analytics Engine

Read [Lesson 42](../../course/lesson-42-capstone.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 411-413)

- [ ] **Activity 411:** Specify input record, output, errors, and ordering contract.
- [ ] **Activity 412:** Implement deterministic parser with malformed-input tests.
- [ ] **Activity 413:** Build bounded ingestion with backpressure and shutdown.

## Applied (activities 414-417)

- [ ] **Activity 414:** Choose an index/data structure and state operation costs.
- [ ] **Activity 415:** Implement a correct single-thread CPU oracle.
- [ ] **Activity 416:** Add parallel CPU processing without changing results.
- [ ] **Activity 417:** Integrate optional GPU aggregation behind a boundary.

## Expert (activities 418-420)

- [ ] **Activity 418:** Verify GPU and CPU outputs on boundary and randomized cases.
- [ ] **Activity 419:** Benchmark throughput, latency, memory, and scaling reproducibly.
- [ ] **Activity 420:** Deliver design, build instructions, tests, failure analysis, and interview defense.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain capstone: streaming analytics engine from a blank page. Rebuild choose an index/data structure and state operation costs under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
