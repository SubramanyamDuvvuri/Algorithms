# Lesson 33 Assignment - Hexagonal architecture

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Build order management with domain core, ports, in-memory/file repositories, CLI adapter, fake clock, and composition root.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Domain rules, adapter failures, transaction boundaries, deterministic time, restart, and alternate adapter contract tests.

## Write

In `notes.md`: Draw dependencies and write ADRs proving the domain is infrastructure-independent.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Minimal)

- Build domain use cases with in-memory adapters first.
- Keep concrete wiring in one composition root.
- Enforce that infrastructure headers cannot enter the domain.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
