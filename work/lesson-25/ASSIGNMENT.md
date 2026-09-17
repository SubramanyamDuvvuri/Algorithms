# Lesson 25 Assignment - Lock-free programming

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement and prove an SPSC ring buffer, then one reclaimed lock-free stack or queue.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Wraparound, full/empty, long stress, ABA scenario, reclamation safety, false-sharing variants, and sanitizer runs.

## Write

In `notes.md`: Identify linearization points, progress guarantee, memory orders, and reclamation proof.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Light)

- Prove SPSC before attempting MPMC.
- Identify one linearization point per operation.
- Treat reclamation as a separate algorithm.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
