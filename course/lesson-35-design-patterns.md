# Lesson 35: Patterns for Extensible C++ Systems

## What You Gain

You'll know which design pattern (if any) actually fits a given extensibility problem, instead of reaching for one because a book said so. This is where the course pivots from "can I write correct C++" to "can I design a C++ system other engineers can extend safely" -- the core of the architecture skill you asked to master.

## Why This Comes Now

Lesson 34 established linux kernel modules: writing, loading, and debugging. This chapter returns to the application layer and uses everything from Parts I-III, plus the systems depth from Lessons 29-34, to study patterns for extensible c++ systems.

## Core Model

Patterns are tradeoffs: strategy, visitor, observer, and factory change coupling, allocations, and failure surfaces. Prefer explicit ownership to pattern vocabulary.

Prefer the smallest boundary that fits the expected change. A closed variant makes new alternatives visible at compile time; a runtime interface allows extension across a binary boundary.

## Mechanism and Failure Cases

Strategy changes an algorithm behind one contract, visitor handles alternatives of a closed type set, and observer distributes events to subscribers. A subscription token must be able to detach safely before a callback target dies. Factories should return an owning handle or explicit error. Evaluate each pattern against the anticipated change, call frequency, binary boundary, and lifetime complexity.

## Worked Reasoning

Refactor one earlier message processor using two alternative extension mechanisms. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 343 (Write a factory with explicit error result.), what is the smallest case that exposes a wrong answer?
- For Activity 346 (Implement variant visitor for a closed message set.), which invariant or ownership rule must survive each state change?
- For Activity 349 (Record allocation and ABI effects of each approach.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 36 builds on this by moving to ports, adapters, and testable boundaries.

Start with the [ten ordered activities](../work/lesson-35/ASSIGNMENT.md).
