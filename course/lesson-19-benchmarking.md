# Lesson 19: Benchmark Design and Profiling

## What You Gain

You'll be able to design a benchmark that actually measures what you think it measures -- accounting for warm-up, dead-code elimination, and noise -- instead of publishing a number that means nothing. This is the gateway skill for every performance claim you'll ever make professionally: "it's faster" is worthless without this discipline behind it.

## Why This Comes Now

Lesson 18 established strings, bit manipulation, and advanced patterns. This chapter uses that foundation to study benchmark design and profiling.

## Core Model

Benchmarks are experiments: workload, compiler, warmup, variance, and baselines determine credibility. Profiling identifies where time is spent.

Timings can be distorted by input generation, I/O, cache warmup, dead-code elimination, and frequency scaling. Profile first so optimization targets a measured bottleneck.

## Mechanism and Failure Cases

A meaningful benchmark makes the result observable, keeps setup out of timed regions, and records size, distribution, compiler flags, and repeated samples. Timing a single call rarely isolates a microsecond-scale effect. A profiler samples where time is spent; it does not explain why by itself. Keep a baseline and rerun correctness after every optimization.

## Worked Reasoning

Build a reproducible benchmark for earlier search and container choices. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 183 (Compile release and debug variants and record flags.), what is the smallest case that exposes a wrong answer?
- For Activity 186 (Check correctness outside the timed region.), which invariant or ownership rule must survive each state change?
- For Activity 189 (Report CPU, compiler, sizes, and measurement limitations.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 20 builds on this by moving to caches, layout, and allocators.

Start with the [ten ordered activities](../work/lesson-19/ASSIGNMENT.md).
