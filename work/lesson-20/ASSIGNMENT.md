# Lesson 20 Assignment - Graphs

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Build a generic graph library with BFS, DFS, topological sort, Dijkstra, A*, DSU, Kruskal, and Prim.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Disconnected/cyclic graphs, duplicate edges, zero/large weights, path reconstruction, and differential tests.

## Write

In `notes.md`: Prove preconditions and correctness; explain representation choices.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Light)

- Identify directed/weighted/sparse/mutable properties before representation.
- Complete traversals and path reconstruction before weighted algorithms.
- Reject inputs violating algorithm preconditions.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
