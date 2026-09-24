# Lesson 28: C++20 Coroutines and Async Lifetimes

## What You Gain

You'll understand what the compiler actually does with `co_await` -- the suspend/resume machinery and lifetime traps -- instead of treating coroutines as magic. This closes Part III: modern async C++ and a lot of new networking/IO libraries are built on this, and it's rare enough knowledge to be a genuine differentiator.

## Why This Comes Now

Lesson 27 established work-stealing thread pool. This chapter uses that foundation to study c++20 coroutines and async lifetimes.

## Core Model

Coroutines separate suspension from threading. Promise type, handle ownership, and continuation scheduling determine safety.

Suspend preserves coroutine frame state, not the lifetime of externally referenced objects. final_suspend controls who destroys the frame and when continuations can resume.

## Mechanism and Failure Cases

The compiler turns a coroutine into a frame holding state across suspension. `initial_suspend` determines whether work starts immediately; `final_suspend` controls completion handoff. A handle is a manual lifetime object and must be destroyed exactly once. Awaiting does not create a thread; the scheduler decides where and when continuation runs. References inside the frame can still dangle.

## Worked Reasoning

Implement a small generator, then a task wrapper with explicit lifetime rules. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 273 (Own and destroy coroutine_handle exactly once.), what is the smallest case that exposes a wrong answer?
- For Activity 276 (Add exception storage and rethrow at observation.), which invariant or ownership rule must survive each state change?
- For Activity 279 (Reject dangling references across suspension with an ownership fix.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 29 builds on this by moving to processes, address spaces, and the OS/process model.

Start with the [ten ordered activities](../work/lesson-28/ASSIGNMENT.md).
