# Lesson 20: Caches, Layout, and Allocators

## What You Gain

You'll be able to explain and demonstrate why memory layout (AoS vs SoA) and allocator choice can produce a 10x difference in throughput with zero change to your algorithm. This is where "Big-O isn't the whole story" stops being an abstract warning and becomes something you've measured with your own hands.

## Why This Comes Now

Lesson 19 established benchmark design and profiling. This chapter uses that foundation to study caches, layout, and allocators.

## Core Model

Contiguous layouts reduce pointer chasing; alignment and false sharing can matter in hot loops. Allocator policy changes allocation cost and lifetime behavior.

AoS puts whole records together; SoA puts fields together. pmr resource lifetime must exceed all objects allocated from it. Padding a hot counter may reduce false sharing but increase footprint.

## Mechanism and Failure Cases

AoS favors operations that need all fields of one record; SoA favors scans that need one field across many records. The memory system moves cache lines, not individual fields. A monotonic memory resource is efficient for whole-batch release but unsuitable when objects need independent reclamation. False sharing occurs when separate hot counters occupy the same coherence line, despite no logical data sharing.

## Worked Reasoning

Refactor an event-processing array from AoS to SoA and compare allocation strategies. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 193 (Measure sequential traversal over both layouts.), what is the smallest case that exposes a wrong answer?
- For Activity 196 (Demonstrate false sharing with independent counters safely.), which invariant or ownership rule must survive each state change?
- For Activity 199 (Check allocation counts and resource lifetime boundaries.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 21 builds on this by moving to simd, vectorization, and parallel cpu work.

Start with the [ten ordered activities](../work/lesson-20/ASSIGNMENT.md).
