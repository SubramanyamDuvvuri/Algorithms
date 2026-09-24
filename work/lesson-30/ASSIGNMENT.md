# Lesson 30 Assignment: Syscalls, the Kernel Boundary, and strace/ltrace

Read [Lesson 30](../../course/lesson-30-syscalls-and-kernel-boundary.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 291-293)

- [ ] **Activity 291:** Trace a simple program with strace and map each observed syscall to the C++ standard library call that produced it.
- [ ] **Activity 292:** Write a raw syscall wrapper (e.g., via syscall()) for a function normally provided by libc and compare behavior.
- [ ] **Activity 293:** Measure the cost of a syscall-heavy loop (e.g., repeated small read/write) versus a batched version.

## Applied (activities 294-297)

- [ ] **Activity 294:** Use ltrace and strace together to distinguish library-level calls from actual kernel entries.
- [ ] **Activity 295:** Instrument error handling for a syscall that can return EINTR, EAGAIN, or ENOMEM and test each path.
- [ ] **Activity 296:** Compare buffered I/O (std::fstream) against unbuffered syscalls (read/write) for the same workload.
- [ ] **Activity 297:** Explain and demonstrate the user/kernel mode transition cost using a microbenchmark.

## Expert (activities 298-300)

- [ ] **Activity 298:** Reduce a program's syscall count using batching or vectored I/O (readv/writev) and measure the improvement.
- [ ] **Activity 299:** Diagnose a synthetic 'slow' program using strace -c and identify its dominant syscall cost.
- [ ] **Activity 300:** Document the syscall boundary contract for one function: preconditions, error codes, and retry policy.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain syscalls, the kernel boundary, and strace/ltrace from a blank page. Rebuild use ltrace and strace together to distinguish library-level calls from actual kernel entries under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
