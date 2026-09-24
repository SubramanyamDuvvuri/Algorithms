# Lesson 29 Assignment: Processes, Address Spaces, and the OS/Process Model

Read [Lesson 29](../../course/lesson-29-processes-and-address-spaces.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 281-283)

- [ ] **Activity 281:** Inspect a running process's memory map via /proc/self/maps and identify each segment (text, heap, stack, mmap regions).
- [ ] **Activity 282:** Fork a child process and observe independent address spaces (copy-on-write) with a shared counter that does not change across processes.
- [ ] **Activity 283:** Use exec to replace a process image and explain what state survives fork+exec versus what is destroyed.

## Applied (activities 284-287)

- [ ] **Activity 284:** Measure fork+exec latency versus posix_spawn for launching a short-lived helper process.
- [ ] **Activity 285:** Implement a parent that waits on a child and correctly reaps it, then intentionally leave a zombie and observe it with ps.
- [ ] **Activity 286:** Use environment variables and argv to pass configuration across an exec boundary and validate malformed input safely.
- [ ] **Activity 287:** Trace signal delivery (SIGCHLD, SIGTERM) between parent and child and implement clean shutdown.

## Expert (activities 288-290)

- [ ] **Activity 288:** Compare process isolation cost (fork) against thread creation cost for the same workload and justify a choice.
- [ ] **Activity 289:** Use namespaces or cgroups (or explain them precisely if unavailable) to reason about resource isolation for a service process.
- [ ] **Activity 290:** Document the full process lifecycle (fork, exec, wait, reap, signal) as a state diagram with failure paths.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain processes, address spaces, and the os/process model from a blank page. Rebuild measure fork+exec latency versus posix_spawn for launching a short-lived helper process under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
