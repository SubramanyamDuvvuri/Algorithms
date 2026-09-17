# Lesson 36 Assignment - Order-matching engine

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Build limit/market/cancel/replace matching with price-time priority, O(1) cancel, lock-free ingest, journal, snapshot, replay, pools, metrics, and graceful shutdown.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Duplicates, unknown cancel, partial fills, overflow, crossed book, full queues, torn/corrupt log, crash/restart, deterministic replay, and shutdown under load.

## Write

In `notes.md`: Submit architecture/design docs, ADRs, runbook, postmortem, invariant proofs, and p50/p99/p99.9 benchmark report.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Minimal)

- Start with a deterministic single-threaded core; put concurrency around it.
- Write invariants and a reference model before optimizing.
- Use the event log as reproducible truth and prove deterministic replay.
- Add lock-free queues, pools, and snapshots only after exhaustive matching tests.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
