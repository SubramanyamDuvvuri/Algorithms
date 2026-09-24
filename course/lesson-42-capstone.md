# Lesson 42: Capstone: Streaming Analytics Engine

## What You Gain

You'll integrate essentially everything in this course -- ownership, algorithms, concurrency, memory layout, Linux internals, architecture boundaries, and optional GPU acceleration -- into one real system with tests, benchmarks, and a defensible design doc. This is the artifact you can put in front of an interviewer or a portfolio and say: I built this end to end, and I can defend every decision in it.

## Why This Comes Now

Lesson 41 established gpu profiling and performance analysis. This chapter uses that foundation to study capstone: streaming analytics engine.

## Core Model

A production-like pipeline combines parsing, ownership, bounded queues, algorithm choice, cancellation, tests, and measured performance. GPU acceleration is optional, not a substitute for a correct CPU path.

Keep ingestion bounded so load cannot grow memory without limit. Preserve a single-thread oracle while changing execution; report failure recovery and reproducibility, not just peak throughput.

## Mechanism and Failure Cases

Define the observable output and ordering before choosing concurrency. A bounded queue supplies backpressure; otherwise a burst can exhaust memory. Keep a simple CPU oracle and compare every optimized stage against it. Optional GPU aggregation belongs behind an interface with a fallback, so correctness and tests do not depend on a particular device. Document shutdown, malformed input, and partial failure behavior.

## Worked Reasoning

Build a streaming event analytics engine with a CPU baseline and optional GPU aggregate stage. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 413 (Build bounded ingestion with backpressure and shutdown.), what is the smallest case that exposes a wrong answer?
- For Activity 416 (Add parallel CPU processing without changing results.), which invariant or ownership rule must survive each state change?
- For Activity 419 (Benchmark throughput, latency, memory, and scaling reproducibly.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

The capstone brings the C++ core, algorithms, concurrency, performance, and optional GPU work together.

Start with the [ten ordered activities](../work/lesson-42/ASSIGNMENT.md).
