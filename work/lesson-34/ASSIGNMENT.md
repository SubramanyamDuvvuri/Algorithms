# Lesson 34 Assignment: Linux Kernel Modules: Writing, Loading, and Debugging

Read [Lesson 34](../../course/lesson-34-kernel-modules.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 331-333)

- [ ] **Activity 331:** Build and load a minimal 'hello world' kernel module (init/exit functions) in a disposable VM or container, then unload it.
- [ ] **Activity 332:** Read kernel log output via dmesg for your module's init and exit messages.
- [ ] **Activity 333:** Explain the kernel/user-space boundary: why a kernel module cannot call libc and what it can use instead.

## Applied (activities 334-337)

- [ ] **Activity 334:** Create a simple /proc entry exposing read-only state from your module.
- [ ] **Activity 335:** Add a module parameter (module_param) and verify it can be set at load time.
- [ ] **Activity 336:** Trigger and safely observe a controlled kernel panic in an isolated VM only, and explain why kernel bugs are more dangerous than user-space bugs.
- [ ] **Activity 337:** Use a kernel debugging aid available in your environment (dmesg, ftrace, or a documented walkthrough if no VM is available) to trace module behavior.

## Expert (activities 338-340)

- [ ] **Activity 338:** Design (in a design doc; code optional) a simple character device driver's read/write contract.
- [ ] **Activity 339:** Compare the safety/isolation model of a kernel module versus an equivalent user-space daemon for the same task.
- [ ] **Activity 340:** Document the full lifecycle of your module (build, load, use, unload) plus its failure and security-review notes.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain linux kernel modules: writing, loading, and debugging from a blank page. Rebuild create a simple /proc entry exposing read-only state from your module under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
