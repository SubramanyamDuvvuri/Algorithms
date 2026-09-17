# 01 - Complexity, Invariants, And Proofs

Goal: stop guessing. Prove correctness and analyze cost.

## Complexity

You must know:

- O(1), O(log n), O(n), O(n log n), O(n^2), O(2^n), O(n!).
- Worst case vs average case.
- Amortized analysis.
- Space complexity.
- Input-sensitive complexity.

Examples:

- Dynamic array push is amortized O(1), but a resize push is O(n).
- Hash table lookup is average O(1), worst-case O(n).
- Balanced tree lookup is O(log n), worst-case guaranteed if balance is maintained.

## Invariants

An invariant is a condition that remains true before and after every operation.

Examples:

- Heap: every parent is <= its children for a min-heap.
- BST: left subtree keys < node key < right subtree keys.
- DSU: parent pointers eventually reach a representative.
- LRU cache: list order matches recency and map points to list nodes.

When you implement a structure, write the invariant first.

## Proof Style

Use this structure:

1. State the invariant.
2. Show it is true initially.
3. Show each operation preserves it.
4. Show the invariant implies correctness.

## Amortized Analysis

Dynamic array example:

- Most pushes cost O(1).
- Resize costs O(n).
- But if capacity doubles, each element is moved O(log n) rarely enough that total cost over n pushes is O(n).
- Therefore push is amortized O(1).

## C++ Traps

- Integer overflow in index arithmetic.
- Invalidated references after vector reallocation.
- Recursive DFS stack overflow on huge graphs.
- Comparator violating strict weak ordering.
- Hash function inconsistency with equality.
- Copying large structures accidentally.

## Drills

1. Prove binary search correctness.
2. Prove heap push/pop correctness.
3. Explain amortized vector push.
4. Find iterator invalidation bugs in vector/map/unordered_map code.
5. Write a complexity table for every operation in your LRU cache.

