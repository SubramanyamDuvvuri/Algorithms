# Data Structures And Algorithms In C++

This track exists for two reasons:

1. Interviews: you must solve problems quickly, correctly, and clearly.
2. Real engineering: the right data structure often decides whether a system is simple, slow, scalable, or broken.

For every structure, learn five things:

- Invariant: what must always be true?
- Operations: what can it do?
- Complexity: worst case, average case, amortized.
- Implementation traps in C++: ownership, iterator invalidation, copying, moving, allocation, overflow.
- Production usage: where does this appear in real systems?

## Study Order

1. Complexity, invariants, and proofs.
2. Arrays, strings, hashing.
3. Linked lists, stacks, queues, heaps.
4. Trees, tries, and indexes.
5. Graphs.
6. Dynamic programming.
7. Advanced data structures.
8. Interview patterns.

## Required C++ Implementations

Implement these without copying from a library:

- Dynamic array.
- Singly and doubly linked list.
- Stack and queue.
- Circular buffer.
- Binary heap.
- Hash table with separate chaining.
- Hash table with open addressing.
- Binary search tree.
- AVL or red-black tree.
- Trie.
- Disjoint set union.
- Fenwick tree.
- Segment tree.
- Sparse table.
- LRU cache.
- Graph adjacency list.
- Dijkstra shortest path.
- Topological sort.
- Strongly connected components.

Then explain why you would often still use `std::vector`, `std::unordered_map`, `std::map`, `std::priority_queue`, and proven libraries in production.

## Mastery Standard

For each implementation, write:

- Constructor/destructor ownership explanation.
- Copy/move behavior.
- Iterator invalidation rules.
- Complexity table.
- Edge-case tests.
- Fuzz or randomized test idea.
- Benchmark against a standard-library alternative when relevant.

