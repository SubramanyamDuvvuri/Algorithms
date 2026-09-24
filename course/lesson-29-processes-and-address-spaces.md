# Lesson 29: Processes, Address Spaces, and the OS/Process Model

## What You Gain

You'll be able to explain what actually happens on `fork()`/`exec()`, read a process's memory map from `/proc`, and reason about process versus thread isolation with real evidence instead of folklore. This is where "systems engineer" stops being a job title and starts being something you can back up -- and it's the first rung on the Linux-internals ladder that separates application C++ engineers from systems engineers.

## Why This Comes Now

Lesson 28 established C++20 coroutines and async lifetimes. This chapter steps below the language runtime to the operating system itself: coroutines schedule work inside one process, but real systems also span multiple processes, and every abstraction used so far ultimately runs inside exactly one.

## Core Model

A process is an address space plus a set of OS-managed resources (file descriptors, threads, signal handlers); a thread is a schedulable unit inside that address space. `fork()` clones the calling process's address space using copy-on-write; `exec()` replaces the current image entirely while keeping the process ID and (by default) open file descriptors.

Knowing exactly what fork+exec duplicates, versus what a thread shares, is the basis for every process-vs-thread design decision you will make in later lessons and in production.

## Mechanism and Failure Cases

After `fork()`, parent and child have separate address spaces that happen to hold identical data at that instant -- a write in one is invisible to the other, unlike a thread. `exec()` discards the old image (code, heap, most mappings) but preserves identity (pid) and open descriptors. A child that exits without being `wait()`-ed on becomes a zombie, holding a slot in the process table; a parent that exits first orphans its children to the system's reaper. Signals (`SIGCHLD`, `SIGTERM`) are the primary asynchronous notification channel between cooperating processes, and mishandling them is a common source of resource leaks and shutdowns that hang forever.

## Worked Reasoning

Fork a child, have it modify a variable, and confirm the parent's copy is untouched -- proving address-space separation empirically rather than by definition. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use `/proc/self/maps` (or your platform's process inspector) as an oracle for what the address space actually contains.

## Deep-Dive Questions

- For Activity 282 (Fork a child process and observe independent address spaces (copy-on-write) with a shared counter that does not change across processes.), what is the smallest case that exposes a wrong answer?
- For Activity 285 (Implement a parent that waits on a child and correctly reaps it, then intentionally leave a zombie and observe it with ps.), which invariant or ownership rule must survive each state change?
- For Activity 289 (Use namespaces or cgroups (or explain them precisely if unavailable) to reason about resource isolation for a service process.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 30 builds on this by moving to syscalls, the kernel boundary, and strace/ltrace.

Start with the [ten ordered activities](../work/lesson-29/ASSIGNMENT.md).
