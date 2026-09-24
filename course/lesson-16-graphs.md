# Lesson 16: Graph Representations and Traversal

## What You Gain

You'll represent graphs correctly for a given problem and run BFS/DFS with full control over what each traversal proves. Graphs model almost everything non-trivial in real systems -- dependency resolution, network topology, service call graphs -- so this lesson is where DSA stops being academic and starts being how you model your actual system.

## Why This Comes Now

Lesson 15 established binary trees, bsts, balanced trees, and tries. This chapter uses that foundation to study graph representations and traversal.

## Core Model

Graph representation controls memory and traversal cost. BFS solves unweighted shortest paths; DFS supports reachability and cycle detection.

Adjacency lists cost O(V+E) storage. BFS marks on enqueue to avoid repeated work; Dijkstra requires nonnegative edges because settled distances must not improve later.

## Mechanism and Failure Cases

With an adjacency list, traversal is O(V+E) because each vertex and edge is handled a bounded number of times. A DFS color of gray means a vertex is on the current path; a gray back edge proves a directed cycle. Topological ordering exists only for a DAG. Dijkstra's priority queue may contain stale entries; discard them explicitly and never use it for negative-weight edges.

## Worked Reasoning

Model a dependency graph and answer reachability, ordering, and shortest-path questions. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 153 (Implement BFS and verify shortest unweighted distances.), what is the smallest case that exposes a wrong answer?
- For Activity 156 (Detect a directed cycle using three-color DFS.), which invariant or ownership rule must survive each state change?
- For Activity 159 (Implement Dijkstra for nonnegative weighted edges.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 17 builds on this by moving to dynamic programming, greedy, and proofs.

Start with the [ten ordered activities](../work/lesson-16/ASSIGNMENT.md).
