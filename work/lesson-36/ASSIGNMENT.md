# Lesson 36 Assignment: Ports, Adapters, and Testable Boundaries

Read [Lesson 36](../../course/lesson-36-architecture.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 351-353)

- [ ] **Activity 351:** Define domain input/output types independent of I/O.
- [ ] **Activity 352:** Extract a pure core operation with invariant checks.
- [ ] **Activity 353:** Define an input port interface or function boundary.

## Applied (activities 354-357)

- [ ] **Activity 354:** Implement in-memory adapter for tests.
- [ ] **Activity 355:** Implement file adapter with explicit parse errors.
- [ ] **Activity 356:** Test core behavior without filesystem access.
- [ ] **Activity 357:** Test adapter failure and partial input paths.

## Expert (activities 358-360)

- [ ] **Activity 358:** Keep timing and logging outside the core.
- [ ] **Activity 359:** Draw dependency direction and ownership diagram.
- [ ] **Activity 360:** Add one feature and record exactly which modules changed.

## Stretch (optional, does not consume the numbered activity sequence)

- **S1:** Take your domain core plus adapters and sketch, in `design.md`, the point at which you would split one adapter's module into a separately deployable service. State what property you would be buying (independent scaling, independent deploys, failure isolation) and what it costs (network calls, versioning, partial failure).
- **S2:** Redesign your read path as a CQRS-style separate read model fed from the same core, and identify exactly where and how staleness becomes visible to a caller.
- **S3:** Sketch (design only) what your core would look like as an event-sourced system: what is the event log, how is current state derived from it, and what breaks if an event's schema needs to change after events already exist.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain ports, adapters, and testable boundaries from a blank page. Rebuild implement in-memory adapter for tests under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
