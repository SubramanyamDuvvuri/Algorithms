# Lesson 19 Assignment - Core data structures

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement dynamic array, intrusive list, open-address hash table, heap, BST, red-black tree, trie, and LRU.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Invariant checks after mutation, randomized differential tests, collisions, pathological insertion, allocation failure, and long sequences.

## Write

In `notes.md`: Provide complexity and memory-overhead tables for all eight structures.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Light)

- Implement in order: array, list, heap, hash table, BST, trie, LRU, red-black tree.
- Write invariant checks before advanced operations.
- Use STL equivalents as randomized test oracles.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
