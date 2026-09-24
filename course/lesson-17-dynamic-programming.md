# Lesson 17: Dynamic Programming, Greedy, and Proofs

## What You Gain

You'll be able to recognize overlapping subproblems, write a correct recurrence, and prove a greedy choice is safe instead of hoping it is. DP is the topic most candidates fear most in interviews precisely because it can't be pattern-matched without understanding -- this lesson gets you past that wall for good.

## Why This Comes Now

Lesson 16 established graph representations and traversal. This chapter uses that foundation to study dynamic programming, greedy, and proofs.

## Core Model

DP turns overlapping subproblems into state transitions; greedy needs an exchange or cut argument. State dimensions control both time and memory.

State means the minimum information needed for future choices. Memoization saves repeated states; tabulation controls evaluation order. A greedy answer needs proof, not a successful sample.

## Mechanism and Failure Cases

Weighted interval scheduling can sort by finishing time and use `dp[i] = max(dp[i-1], weight[i] + dp[p(i)])`, where `p(i)` is the last compatible predecessor. Reconstructing the choice requires retaining decisions, not just the final score. Unweighted interval count admits an earliest-finish greedy proof; weights defeat that exchange argument. Counterexamples are a useful interview tool.

## Worked Reasoning

Solve scheduling and sequence problems with recursive, memoized, and tabulated versions. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 163 (Implement memoized recursion and count repeated states avoided.), what is the smallest case that exposes a wrong answer?
- For Activity 166 (Test ties, empty input, and overlapping intervals.), which invariant or ownership rule must survive each state change?
- For Activity 169 (Give an exchange argument for that greedy choice.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 18 builds on this by moving to strings, bit manipulation, and advanced patterns.

Start with the [ten ordered activities](../work/lesson-17/ASSIGNMENT.md).
