# Lesson 24 Assignment - Atomics

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement relaxed counters, safe object publication, and CAS-based update examples.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Contention, CAS spurious failure, bad failure ordering example, publication stress, and overflow policy.

## Write

In `notes.md`: Draw happens-before graphs and justify every memory order.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Light)

- Begin with sequential consistency; weaken only with a proof.
- Separate variable atomicity from publication of guarded data.
- CAS failure is a load and has its own ordering rules.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
