# Lesson 33: perf, Flamegraphs, and Production-Grade Benchmarking

## What You Gain

You'll go from Lesson 19's benchmarking basics to the tools professionals actually use -- perf, flamegraphs, and statistically defensible p99 methodology -- and build a regression benchmark that catches real slowdowns automatically. This is the exact workflow behind every "we made it 3x faster" engineering write-up, and it's what makes your own performance claims credible instead of anecdotal.

## Why This Comes Now

Lesson 32 established scheduling, context switches, and cache/NUMA topology. This chapter returns to Lesson 19's benchmarking foundation and takes it to the tools and rigor an actual performance team uses.

## Core Model

`perf` and sampling profilers answer "where is the time actually going" using hardware counters (cache misses, branch mispredictions), not guesses; a flamegraph turns thousands of stack samples into one picture of where a program spends its cycles. A single "average" timing number is close to meaningless without knowing its spread -- p95/p99 and variance tell you whether a result is real or noise.

## Mechanism and Failure Cases

Compiler dead-code elimination silently deletes the very computation you meant to benchmark unless its result is observably used; CPU frequency scaling and cold caches skew the first few iterations of any run. A flamegraph's widest frames are your actual hotspots -- chasing a function that looks slow in isolation but is a thin sliver of total time wastes the optimization effort a profile was supposed to prevent. A regression benchmark without a stated threshold and environment record is a number nobody can act on six months later.

## Worked Reasoning

Take a function already benchmarked informally in Lesson 19, profile it under perf, and confirm or overturn your earlier assumption about its bottleneck. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the flamegraph's own call-stack attribution as the oracle for where time is spent.

## Deep-Dive Questions

- For Activity 322 (Generate a flamegraph (perf record + perf script, or an equivalent sampling profiler) for a workload with a known hot function.), what is the smallest case that exposes a wrong answer?
- For Activity 325 (Detect and eliminate a benchmarking artifact (e.g., compiler dead-code elimination, cache warm-up skew, frequency scaling).), which invariant or ownership rule must survive each state change?
- For Activity 328 (Set up a regression-style benchmark that fails if p99 latency degrades beyond a stated threshold.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 34 builds on this by moving to Linux kernel modules: writing, loading, and debugging.

Start with the [ten ordered activities](../work/lesson-33/ASSIGNMENT.md).
