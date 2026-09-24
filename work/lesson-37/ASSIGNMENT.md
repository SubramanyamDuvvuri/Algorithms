# Lesson 37 Assignment: Dynamic Libraries, C ABI, and Plugins

Read [Lesson 37](../../course/lesson-37-plugins-abi.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 361-363)

- [ ] **Activity 361:** Define a versioned C-compatible function table.
- [ ] **Activity 362:** Specify allocator and deallocator ownership across boundary.
- [ ] **Activity 363:** Use opaque handles for internal C++ objects.

## Applied (activities 364-367)

- [ ] **Activity 364:** Export create, process, and destroy entry points.
- [ ] **Activity 365:** Load symbols and validate versions at runtime.
- [ ] **Activity 366:** Reject missing symbol and incompatible version safely.
- [ ] **Activity 367:** Catch exceptions before they cross the C boundary.

## Expert (activities 368-370)

- [ ] **Activity 368:** Test plugin unload only after all handles are destroyed.
- [ ] **Activity 369:** Build a second plugin implementation against the same header.
- [ ] **Activity 370:** Document platform/compiler assumptions and ABI limits.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain dynamic libraries, c abi, and plugins from a blank page. Rebuild export create, process, and destroy entry points under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
