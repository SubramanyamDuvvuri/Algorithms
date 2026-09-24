# Lesson 16 Assignment: Graph Representations and Traversal

Read [Lesson 16](../../course/lesson-16-graphs.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 151-153)

- [ ] **Activity 151:** Build adjacency-list representation for directed vertices.
- [ ] **Activity 152:** Reject or define behavior for invalid vertex identifiers.
- [ ] **Activity 153:** Implement BFS and verify shortest unweighted distances.

## Applied (activities 154-157)

- [ ] **Activity 154:** Reconstruct a BFS parent path.
- [ ] **Activity 155:** Implement iterative DFS with explicit visited state.
- [ ] **Activity 156:** Detect a directed cycle using three-color DFS.
- [ ] **Activity 157:** Implement topological sorting for acyclic inputs.

## Expert (activities 158-160)

- [ ] **Activity 158:** Test disconnected, self-loop, and parallel-edge cases.
- [ ] **Activity 159:** Implement Dijkstra for nonnegative weighted edges.
- [ ] **Activity 160:** Reject negative weights and compare shortest paths against a small brute-force oracle.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain graph representations and traversal from a blank page. Rebuild reconstruct a bfs parent path under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
