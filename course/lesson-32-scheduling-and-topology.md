# Lesson 32: Scheduling, Context Switches, and Cache/NUMA Topology

## What You Gain

You'll measure real context-switch cost, pin threads to cores, and reason about scheduler and cache-topology effects instead of treating the OS scheduler as a black box. This is what lets you design thread-to-core layouts for latency-sensitive systems and explain, with numbers, why "more threads" sometimes makes things slower.

## Why This Comes Now

Lesson 31 established virtual memory, mmap, and custom allocator design. This chapter moves from where your data lives to how the CPU actually executes it: scheduling, context switches, and hardware topology.

## Core Model

A context switch saves one thread's register state and restores another's -- cheap compared to a process switch (no address-space change) but not free, and it becomes far more expensive when it evicts a hot cache footprint. Pinning a thread to a core (affinity) trades scheduling flexibility for predictable cache and NUMA locality.

## Mechanism and Failure Cases

Oversubscription -- more runnable threads than cores -- forces the scheduler to time-slice, and every slice boundary is a potential cache-cold restart for whatever the OS runs next. A "hot" variable bounced between cores by false sharing or genuine contention pays a cache-coherence cost per access that dwarfs the arithmetic around it, visible only by measuring, never by reading the code. NUMA, where present, means memory attached to a different socket is measurably slower to reach; ignoring topology can make a "correct" parallel design perform worse than a naive single-threaded one.

## Worked Reasoning

Build a ping-pong benchmark between two threads and measure round-trip latency with and without CPU pinning. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use an unpinned, uncontended baseline as your comparison oracle.

## Deep-Dive Questions

- For Activity 311 (Measure context-switch cost between two threads using a ping-pong benchmark over a pipe or condition variable.), what is the smallest case that exposes a wrong answer?
- For Activity 315 (Demonstrate the effect of oversubscription (more runnable threads than cores) on latency.), which invariant or ownership rule must survive each state change?
- For Activity 319 (Reason about NUMA effects (or explain them precisely if hardware is single-node) on memory access latency.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 33 builds on this by moving to perf, flamegraphs, and production-grade benchmarking.

Start with the [ten ordered activities](../work/lesson-32/ASSIGNMENT.md).
