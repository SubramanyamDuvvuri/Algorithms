# Lesson 18 Assignment: Strings, Bit Manipulation, and Advanced Patterns

Read [Lesson 18](../../course/lesson-18-advanced-algorithms.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 171-173)

- [ ] **Activity 171:** Implement naive substring search with clear empty-pattern semantics.
- [ ] **Activity 172:** Count comparisons on repeated-character worst cases.
- [ ] **Activity 173:** Construct KMP prefix table and state its invariant.

## Applied (activities 174-177)

- [ ] **Activity 174:** Implement KMP matching and compare against std::string::find.
- [ ] **Activity 175:** Test overlapping matches and embedded NUL bytes.
- [ ] **Activity 176:** Implement bitset set, clear, test, and count operations.
- [ ] **Activity 177:** Guard shift widths and index bounds.

## Expert (activities 178-180)

- [ ] **Activity 178:** Implement prefix-sum range queries with overflow policy.
- [ ] **Activity 179:** Implement sliding-window longest substring without repeats.
- [ ] **Activity 180:** Explain when each technique beats a simple scan and when it does not.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain strings, bit manipulation, and advanced patterns from a blank page. Rebuild implement kmp matching and compare against std::string::find under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
