# Lesson 30: Syscalls, the Kernel Boundary, and strace/ltrace

## What You Gain

You'll be able to trace any program's syscalls, map them back to the C++ calls that produced them, and explain the real cost of crossing the user/kernel boundary. This is the single most useful debugging skill for "why is this slow / hanging / failing" questions that reading code alone can't answer -- the instinct that makes you the person others bring production incidents to.

## Why This Comes Now

Lesson 29 established processes, address spaces, and the OS/process model. This chapter looks at the actual mechanism a process uses to ask the kernel for anything -- memory, files, time, or another process -- the syscall.

## Core Model

Every C++ standard-library I/O or memory call eventually crosses into the kernel through a syscall, which is dramatically more expensive than a normal function call because it changes execution mode. `strace` and `ltrace` make this boundary visible: one traces kernel entries, the other traces dynamic library calls -- and confusing the two wastes debugging time.

## Mechanism and Failure Cases

A syscall like `read()` or `write()` can return short, return `EINTR` after a signal, or return `EAGAIN` on a non-blocking descriptor -- code that ignores these is subtly wrong under load even if it "works" in casual testing. Batching syscalls (`readv`/`writev`, larger buffers) amortizes the mode-switch cost; a tight loop of tiny syscalls is a classic hidden bottleneck a stack trace alone will not reveal. Buffered I/O (`iostream`, `stdio`) exists specifically to reduce syscall frequency at the cost of an extra copy and explicit flush discipline.

## Worked Reasoning

Trace a small program that reads a file with `std::ifstream`, then with a raw `read()` loop, and account for every syscall strace reports for each. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use `strace -c`'s summary as an oracle for where time actually goes.

## Deep-Dive Questions

- For Activity 293 (Measure the cost of a syscall-heavy loop (e.g., repeated small read/write) versus a batched version.), what is the smallest case that exposes a wrong answer?
- For Activity 295 (Instrument error handling for a syscall that can return EINTR, EAGAIN, or ENOMEM and test each path.), which invariant or ownership rule must survive each state change?
- For Activity 299 (Diagnose a synthetic 'slow' program using strace -c and identify its dominant syscall cost.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 31 builds on this by moving to virtual memory, mmap, and custom allocator design.

Start with the [ten ordered activities](../work/lesson-30/ASSIGNMENT.md).
