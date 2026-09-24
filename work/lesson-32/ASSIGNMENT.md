# Lesson 32 Assignment: Scheduling, Context Switches, and Cache/NUMA Topology

Read [Lesson 32](../../course/lesson-32-scheduling-and-topology.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 311-313)

- [ ] **Activity 311:** Measure context-switch cost between two threads using a ping-pong benchmark over a pipe or condition variable.
- [ ] **Activity 312:** Inspect CPU topology (cores, sockets, cache sizes) using /proc/cpuinfo or lscpu and record it.
- [ ] **Activity 313:** Pin a thread to a CPU core with sched_setaffinity (or platform equivalent) and verify placement.

## Applied (activities 314-317)

- [ ] **Activity 314:** Compare throughput of a CPU-bound workload with and without CPU pinning under contention from other threads.
- [ ] **Activity 315:** Demonstrate the effect of oversubscription (more runnable threads than cores) on latency.
- [ ] **Activity 316:** Measure cross-core cache-line migration cost by bouncing a hot variable between pinned threads.
- [ ] **Activity 317:** Explain and test the difference between time-sliced scheduling behavior and priority-based expectations.

## Expert (activities 318-320)

- [ ] **Activity 318:** Design a thread-to-core assignment strategy for a multi-stage pipeline and justify it with measurements.
- [ ] **Activity 319:** Reason about NUMA effects (or explain them precisely if hardware is single-node) on memory access latency.
- [ ] **Activity 320:** Document a scheduling/affinity policy: assumptions, measured tradeoffs, and when default scheduling is preferable.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain scheduling, context switches, and cache/numa topology from a blank page. Rebuild compare throughput of a cpu-bound workload with and without cpu pinning under contention from other threads under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
