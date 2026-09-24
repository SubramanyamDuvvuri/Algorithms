# Lesson 15: Binary Trees, BSTs, Balanced Trees, and Tries

## What You Gain

You'll be able to implement and balance a BST, and use a trie for prefix-based lookups -- the structures behind indexes, autocomplete, and ordered maps. Understanding why balance matters (and what happens without it) is what lets you explain, not just recite, why a database index is a B-tree and not a plain BST.

## Why This Comes Now

Lesson 14 established hash tables, sets, and heaps. This chapter uses that foundation to study binary trees, bsts, balanced trees, and tries.

## Core Model

Recursive tree algorithms rest on subtree invariants. Unbalanced BSTs can degenerate; tries trade space for prefix operations.

BST ordering makes inorder traversal sorted. Two-child erase should preserve the invariant; balanced trees cap height, while tries follow key prefixes character by character.

## Mechanism and Failure Cases

Recursive operations should specify the subtree returned after insertion or removal. In a BST with a two-child deletion, successor replacement must preserve both subtrees and free exactly one node. A height of n gives linear worst-case lookup; balanced trees constrain height logarithmically. Trie nodes represent prefixes, so memory scales with stored characters and alphabet representation rather than key count alone.

## Worked Reasoning

Build an ordered symbol index and a prefix query index with independent oracles. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 143 (Implement BST erase for leaf, one-child, and two-child cases.), what is the smallest case that exposes a wrong answer?
- For Activity 146 (Explain how balancing restores logarithmic height; inspect std::map behavior.), which invariant or ownership rule must survive each state change?
- For Activity 149 (Implement a trie with insert and exact lookup.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 16 builds on this by moving to graph representations and traversal.

Start with the [ten ordered activities](../work/lesson-15/ASSIGNMENT.md).
