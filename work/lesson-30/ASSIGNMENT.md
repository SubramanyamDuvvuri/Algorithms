# Lesson 30 Assignment - Allocators

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement a bump arena and fixed-block pool; make the trie or event batch PMR-aware.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Alignment, exhaustion, reset, invalid sizes, destructor policy, resource lifetime escape, and multithread policy.

## Write

In `notes.md`: Report allocation count, footprint, fragmentation, latency, ownership, and OOM behavior.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Minimal)

- Start with allocate-and-reset arena behavior.
- Round addresses for alignment before advancing.
- Ensure resources outlive all PMR containers.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
