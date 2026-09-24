# Lesson 26: Futures, Promises, and Cancellation

## What You Gain

You'll build async APIs with clean cancellation and error propagation using futures and promises, instead of ad-hoc flags and half-working timeouts. This is the pattern underneath every async framework you've used, and understanding it from scratch means you can debug and extend those frameworks instead of just calling them.

## Why This Comes Now

Lesson 25 established lock-free queues and reclamation. This chapter uses that foundation to study futures, promises, and cancellation.

## Core Model

Asynchronous APIs must specify result, error, cancellation, and executor ownership. Waiting on a future may block and task lifetime still matters.

Future ownership and blocking behavior are part of the API contract. Cancellation cannot forcibly stop arbitrary C++ work; tasks must reach checkpoints and still publish a final outcome.

## Mechanism and Failure Cases

A future is a single-consumption result channel in common usage; it does not imply a new thread unless the launch policy does. A promise must set one value or exception; a broken promise is itself an observable failure. Cancellation needs a result policy: canceled, partial, or completed. Avoid retaining a borrowed span in a task when its owner may die before execution.

## Worked Reasoning

Build a cancellable async batch API over owned input. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 253 (Test a failing task and verify error arrives once.), what is the smallest case that exposes a wrong answer?
- For Activity 256 (Cooperatively check stop_token in a long task.), which invariant or ownership rule must survive each state change?
- For Activity 259 (Compare async launch policies and document blocking behavior.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 27 builds on this by moving to work-stealing thread pool.

Start with the [ten ordered activities](../work/lesson-26/ASSIGNMENT.md).
