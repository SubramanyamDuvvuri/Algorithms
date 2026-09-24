# Lesson 15 Assignment: Binary Trees, BSTs, Balanced Trees, and Tries

Read [Lesson 15](../../course/lesson-15-trees.md) first. Complete each activity in order; do not wait until the tenth to compile and test. Activities continue numbering from the previous lesson.

## Core (activities 141-143)

- [ ] **Activity 141:** Define owned tree nodes and implement inorder traversal.
- [ ] **Activity 142:** Implement BST insert, lookup, and duplicate-key policy.
- [ ] **Activity 143:** Implement BST erase for leaf, one-child, and two-child cases.

## Applied (activities 144-147)

- [ ] **Activity 144:** Test inorder output against std::map on randomized operations.
- [ ] **Activity 145:** Measure height for sorted versus shuffled insertion.
- [ ] **Activity 146:** Explain how balancing restores logarithmic height; inspect std::map behavior.
- [ ] **Activity 147:** Implement iterative DFS to avoid recursion on a deep tree.

## Expert (activities 148-150)

- [ ] **Activity 148:** Implement level-order BFS with a queue.
- [ ] **Activity 149:** Implement a trie with insert and exact lookup.
- [ ] **Activity 150:** Add prefix enumeration and test empty, shared, and missing prefixes.

## Verification

- Run focused normal, empty, boundary, and failure-path checks where the activity has those cases.
- Compare with a simple oracle or standard-library equivalent when possible; for concurrency and GPU work, verify invariants and results under repeated runs.
- Compile with warnings enabled. Use sanitizers or profiling tools when available, and record environment and limitations.

Use `main.cpp` for the demonstration or implementation, `tests.cpp` for tests, and additional files when they improve the design. An activity is complete when you can explain its invariant, ownership, failure behavior, and time and extra-space cost. Do not claim a timed run proves correctness.

## Interview Rehearsal

Explain binary trees, bsts, balanced trees, and tries from a blank page. Rebuild test inorder output against std::map on randomized operations under a time limit, then defend an edge case and a rejected alternative.

## Written Evidence

In `notes.md`, explain the model in your own words and record a mistake or surprising result. In `design.md`, state assumptions, invariants, ownership, errors, and tradeoffs. In `benchmark.md`, include a reproducible workload and measured results when performance is relevant; otherwise say why it is not yet meaningful.
