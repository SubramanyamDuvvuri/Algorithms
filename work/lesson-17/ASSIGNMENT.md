# Lesson 17 Assignment: Dynamic Programming, Greedy, and Proofs

Read [Lesson 17](../../course/lesson-17-dynamic-programming.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 161-163)

- [ ] **Activity 161:** Write a brute-force reference for weighted interval scheduling.
- [ ] **Activity 162:** Define a minimal DP state and recurrence.
- [ ] **Activity 163:** Implement memoized recursion and count repeated states avoided.

## Applied (activities 164-167)

- [ ] **Activity 164:** Implement bottom-up tabulation with predecessor search.
- [ ] **Activity 165:** Reconstruct the selected interval set, not just its score.
- [ ] **Activity 166:** Test ties, empty input, and overlapping intervals.
- [ ] **Activity 167:** Reduce memory in a one-dimensional DP where dependencies allow.

## Expert (activities 168-170)

- [ ] **Activity 168:** Implement greedy interval scheduling for max count.
- [ ] **Activity 169:** Give an exchange argument for that greedy choice.
- [ ] **Activity 170:** Construct a counterexample showing the same greedy rule fails for weighted intervals.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain dynamic programming, greedy, and proofs from a blank page. Rebuild implement bottom-up tabulation with predecessor search under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
