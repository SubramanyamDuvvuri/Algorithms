# Lesson 25: Lock-Free Queues and Reclamation

## What You Gain

You'll implement a lock-free queue and understand memory reclamation (the hardest part everyone skips), plus know when lock-free is worth its enormous complexity cost and when it isn't. This is expert-tier material -- the kind of thing that shows up in trading systems and low-latency infrastructure, and the kind of question that filters senior candidates from staff candidates.

## Why This Comes Now

Lesson 24 established atomics and the c++ memory model. This chapter uses that foundation to study lock-free queues and reclamation.

## Core Model

CAS loops can avoid blocking but do not solve lifetime. ABA and reclamation are separate correctness problems; bounded queues simplify ownership.

SPSC slots have one writer and one reader, which enables a simpler protocol. A successful CAS on a pointer cannot prove the pointed-to node remains alive; reclamation requires its own design.

## Mechanism and Failure Cases

An SPSC ring can give the producer exclusive write access to unpublished slots and the consumer exclusive read access to published slots. Indices alone can become ambiguous after wraparound, so track occupancy or sequence state carefully. MPMC adds competing writers/readers and cannot be obtained by just removing a mutex. Reclamation schemes such as hazard pointers or epochs require a separate proof before reclaiming nodes.

## Worked Reasoning

Build and verify a bounded SPSC queue before studying a lock-free MPMC design. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 243 (Use release/acquire publication for committed elements.), what is the smallest case that exposes a wrong answer?
- For Activity 246 (Run one producer/one consumer for many transfers.), which invariant or ownership rule must survive each state change?
- For Activity 249 (Document ABA and reclamation risks in an unbounded linked queue.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 26 builds on this by moving to futures, promises, and cancellation.

Start with the [ten ordered activities](../work/lesson-25/ASSIGNMENT.md).
