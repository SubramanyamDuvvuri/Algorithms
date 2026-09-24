# Lesson 23 Assignment: Mutexes, Deadlocks, and Coordination

Read [Lesson 23](../../course/lesson-23-synchronization.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 221-223)

- [ ] **Activity 221:** Define queue capacity, shutdown state, and invariants.
- [ ] **Activity 222:** Implement push under mutex with capacity predicate.
- [ ] **Activity 223:** Implement pop with condition_variable and predicate wait.

## Applied (activities 224-227)

- [ ] **Activity 224:** Test producer-before-consumer and consumer-before-producer.
- [ ] **Activity 225:** Wake every waiter during shutdown.
- [ ] **Activity 226:** Define behavior for push after shutdown.
- [ ] **Activity 227:** Add multiple producers and consumers; verify no loss or duplication.

## Expert (activities 228-230)

- [ ] **Activity 228:** Avoid holding the lock while invoking callbacks.
- [ ] **Activity 229:** Create a lock-order diagram for any multiple-mutex path.
- [ ] **Activity 230:** Run stress tests and explain why a successful run is not proof of race freedom.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain mutexes, deadlocks, and coordination from a blank page. Rebuild test producer-before-consumer and consumer-before-producer under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
