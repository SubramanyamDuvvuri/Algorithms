# Lesson 31: Virtual Memory, mmap, and Custom Allocator Design

## What You Gain

You'll build your own arena and free-list allocators, memory-map a file directly, and understand page faults and overcommit well enough to explain a real mmap-based system. This is memory management at the depth you asked for -- not "use smart pointers" but "here is what the kernel actually does with your memory, and here is an allocator I designed on top of that."

## Why This Comes Now

Lesson 30 established syscalls, the kernel boundary, and strace/ltrace. This chapter uses that syscall-level view to go underneath `new`/`malloc` entirely: how the kernel actually backs your memory, and how to build an allocator on top of it.

## Core Model

Virtual memory means every process sees its own private address space backed lazily by physical pages; a page is only truly allocated when first touched (a page fault), not when requested. `mmap()` gives direct control over that mapping -- a file, anonymous memory, or memory shared with another process -- and `new`/`malloc` are themselves built on syscalls like this underneath.

## Mechanism and Failure Cases

`MAP_ANONYMOUS` memory can be requested far beyond physical RAM (overcommit) and will only fail, or invoke the OOM killer, once pages are actually touched -- a successful request tells you nothing about whether using it will succeed. A custom arena/bump allocator trades general-purpose flexibility for near-zero per-allocation cost, but only while its whole-batch lifetime assumption holds; violate it and you get silent corruption, not a clean error. `mprotect` can make a mapping read-only, and writing to it faults exactly like writing through a dangling pointer would -- a controlled way to observe what "invalid access" really means at the hardware level.

## Worked Reasoning

Build a bump allocator over a fixed buffer, verify its allocations never overlap, then compare its throughput against `new` for the same allocation pattern. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use `malloc`/`new` as the correctness and performance oracle you are trying to beat or explain.

## Deep-Dive Questions

- For Activity 303 (Implement a simple bump/arena allocator over a fixed buffer and verify allocation correctness.), what is the smallest case that exposes a wrong answer?
- For Activity 306 (Use mprotect to make a region read-only and verify a write fault is correctly caught/reported (segfault) as expected behavior.), which invariant or ownership rule must survive each state change?
- For Activity 309 (Reason about virtual memory overcommit: allocate more than physical RAM lazily and explain the failure mode when touched.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 32 builds on this by moving to scheduling, context switches, and cache/NUMA topology.

Start with the [ten ordered activities](../work/lesson-31/ASSIGNMENT.md).
