# Lesson 21: SIMD, Vectorization, and Parallel CPU Work

## What You Gain

You'll understand how the compiler auto-vectorizes (or refuses to), and how to help it, to process multiple data elements per instruction. This is the skill that separates "I wrote correct C++" from "I wrote C++ that uses the hardware," and it directly feeds into every high-throughput numerical or data-processing system you'll build.

## Why This Comes Now

Lesson 20 established caches, layout, and allocators. This chapter uses that foundation to study simd, vectorization, and parallel cpu work.

## Core Model

Vectorization needs independent operations and suitable data layout. Parallelism adds partitioning, scheduling, and reduction correctness costs.

Auto-vectorization is compiler-dependent and can be blocked by aliasing or loop-carried dependencies. Threaded reductions need defined identity and numeric tolerance; more threads can saturate bandwidth.

## Mechanism and Failure Cases

SIMD lanes do similar operations over multiple values; branches and noncontiguous loads can erase the gain. Compiler reports are evidence of vectorization, not proof of speedup. For parallel reductions, each worker should own a disjoint chunk and combine partials after synchronization. Floating-point addition is not associative, so define acceptable error before comparing serial and parallel results.

## Worked Reasoning

Optimize a numeric transform first for scalar correctness, then vector and parallel execution. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 203 (Compile with vectorization diagnostics and inspect the report.), what is the smallest case that exposes a wrong answer?
- For Activity 206 (Compare scalar and auto-vectorized performance fairly.), which invariant or ownership rule must survive each state change?
- For Activity 209 (Test empty, tiny, odd, and large input sizes.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 22 builds on this by moving to threads, lifetime, and data races.

Start with the [ten ordered activities](../work/lesson-21/ASSIGNMENT.md).
