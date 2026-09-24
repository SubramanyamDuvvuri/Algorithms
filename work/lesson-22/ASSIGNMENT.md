# Lesson 22 Assignment: Threads, Lifetime, and Data Races

Read [Lesson 22](../../course/lesson-22-threads.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 211-213)

- [ ] **Activity 211:** Start one jthread and join through scope exit.
- [ ] **Activity 212:** Pass an owned value and a borrowed reference; document lifetimes.
- [ ] **Activity 213:** Run two workers on disjoint output ranges.

## Applied (activities 214-217)

- [ ] **Activity 214:** Create a race in an isolated example and diagnose it with ThreadSanitizer if available.
- [ ] **Activity 215:** Repair the shared counter with a mutex.
- [ ] **Activity 216:** Repair it with an atomic and compare semantics.
- [ ] **Activity 217:** Use a stop_token in a worker loop.

## Expert (activities 218-220)

- [ ] **Activity 218:** Test cancellation before and during work.
- [ ] **Activity 219:** Audit callback captures for dangling references.
- [ ] **Activity 220:** Describe happens-before edges for result publication and join.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain threads, lifetime, and data races from a blank page. Rebuild create a race in an isolated example and diagnose it with threadsanitizer if available under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
