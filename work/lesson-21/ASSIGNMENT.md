# Lesson 21 Assignment - DP and greedy

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement edit-distance reconstruction, O(n log n) LIS reconstruction, weighted interval scheduling, and bitmask assignment DP.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Empty/minimal/maximal inputs, ties, reconstruction validity, brute-force comparison on small inputs.

## Write

In `notes.md`: Derive every state/recurrence and give a counterexample to an incorrect greedy rule.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Light)

- Use brute force as an oracle for small inputs.
- Write state meaning, recurrence, base cases, order, and reconstruction before code.
- Optimize memory only after the full table is correct.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
