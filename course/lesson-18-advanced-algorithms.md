# Lesson 18: Strings, Bit Manipulation, and Advanced Patterns

## What You Gain

You'll master two-pointer, sliding-window, and bitmask techniques that turn brute-force string and array problems into linear-time solutions. This closes out Part II: by now, DSA problems should feel like pattern recognition plus proof, not guesswork -- exactly the bar senior interviews hold you to.

## Why This Comes Now

Lesson 17 established dynamic programming, greedy, and proofs. This chapter uses that foundation to study strings, bit manipulation, and advanced patterns.

## Core Model

Rolling state, prefix functions, and bitsets turn repeated work into linear or word-parallel operations. Correctness depends on precise index and overflow rules.

KMP prefix values encode the longest reusable proper prefix for each prefix of the pattern. Shift arithmetic must stay within integer width; prefix sums trade update cost for range-query speed.

## Mechanism and Failure Cases

KMP's prefix table avoids rechecking characters that are known to match a pattern prefix. An empty pattern needs an explicit API rule. Prefix sums use one extra entry so `[l,r)` equals `prefix[r]-prefix[l]`; arithmetic overflow still needs a policy. Bit shifts by a negative amount or by at least the type width are invalid, so validate indices before shifting.

## Worked Reasoning

Build a text-pattern query tool and a compact flag index. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 173 (Construct KMP prefix table and state its invariant.), what is the smallest case that exposes a wrong answer?
- For Activity 176 (Implement bitset set, clear, test, and count operations.), which invariant or ownership rule must survive each state change?
- For Activity 179 (Implement sliding-window longest substring without repeats.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 19 builds on this by moving to benchmark design and profiling.

Start with the [ten ordered activities](../work/lesson-18/ASSIGNMENT.md).
