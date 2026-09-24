# Lesson 31 Assignment: Virtual Memory, mmap, and Custom Allocator Design

Read [Lesson 31](../../course/lesson-31-virtual-memory-and-allocators.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 301-303)

- [ ] **Activity 301:** Map a file into memory with mmap and read/modify it, comparing against read()/write() for the same file.
- [ ] **Activity 302:** Demonstrate a page fault by touching a lazily-allocated (MAP_ANONYMOUS) page and explain what the kernel did.
- [ ] **Activity 303:** Implement a simple bump/arena allocator over a fixed buffer and verify allocation correctness.

## Applied (activities 304-307)

- [ ] **Activity 304:** Extend the arena allocator with reset semantics and measure allocation throughput versus malloc/new.
- [ ] **Activity 305:** Implement a free-list allocator for fixed-size blocks and test fragmentation behavior under mixed alloc/free patterns.
- [ ] **Activity 306:** Use mprotect to make a region read-only and verify a write fault is correctly caught/reported (segfault) as expected behavior.
- [ ] **Activity 307:** Compare private vs shared mmap mappings across two processes and verify observed semantics.

## Expert (activities 308-310)

- [ ] **Activity 308:** Design a slab-style allocator for one fixed object size and benchmark it against std::allocator for the same workload.
- [ ] **Activity 309:** Reason about virtual memory overcommit: allocate more than physical RAM lazily and explain the failure mode when touched.
- [ ] **Activity 310:** Document your allocator's ownership, thread-safety, and failure contract, and state when it should not be used.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain virtual memory, mmap, and custom allocator design from a blank page. Rebuild extend the arena allocator with reset semantics and measure allocation throughput versus malloc/new under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
