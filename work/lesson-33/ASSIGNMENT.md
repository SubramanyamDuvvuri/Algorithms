# Lesson 33 Assignment: perf, Flamegraphs, and Production-Grade Benchmarking

Read [Lesson 33](../../course/lesson-33-perf-and-flamegraphs.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 321-323)

- [ ] **Activity 321:** Profile a CPU-bound program with perf stat and interpret cache-miss and branch-misprediction counters.
- [ ] **Activity 322:** Generate a flamegraph (perf record + perf script, or an equivalent sampling profiler) for a workload with a known hot function.
- [ ] **Activity 323:** Distinguish wall-clock time, CPU time, and syscall-wait time for the same run.

## Applied (activities 324-327)

- [ ] **Activity 324:** Build a benchmark harness that reports median, p95, and p99 latency instead of a single average.
- [ ] **Activity 325:** Detect and eliminate a benchmarking artifact (e.g., compiler dead-code elimination, cache warm-up skew, frequency scaling).
- [ ] **Activity 326:** Compare two implementations of the same function using a statistically defensible before/after methodology.
- [ ] **Activity 327:** Profile a multi-threaded workload and identify a lock-contention or false-sharing hotspot from the flamegraph.

## Expert (activities 328-330)

- [ ] **Activity 328:** Set up a regression-style benchmark that fails if p99 latency degrades beyond a stated threshold.
- [ ] **Activity 329:** Reduce a real hotspot found via profiling and re-measure to confirm the fix, not just its plausibility.
- [ ] **Activity 330:** Write a performance report: methodology, environment, raw numbers, and one properly rejected optimization.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain perf, flamegraphs, and production-grade benchmarking from a blank page. Rebuild build a benchmark harness that reports median, p95, and p99 latency instead of a single average under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
