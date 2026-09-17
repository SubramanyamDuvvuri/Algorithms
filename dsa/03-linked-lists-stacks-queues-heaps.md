# 03 - Linked Lists, Stacks, Queues, And Heaps

Goal: master pointer-heavy structures and priority behavior.

## Linked Lists

Linked lists are useful for stable node addresses and O(1) splice when you already have the node.

They are often slower than vectors due to allocation and cache misses.

C++ implementation requirements:

- Clear node ownership.
- Correct destructor.
- Copy and move behavior.
- No leaks on exceptions.
- Iterator design if exposed.

Production uses:

- LRU cache recency list.
- Intrusive lists in low-level systems.
- Queues where node stability matters.

## Stack

LIFO structure.

Used for:

- Parsing.
- DFS.
- Expression evaluation.
- Undo history.
- Function call model.

## Queue And Deque

FIFO structure.

Used for:

- BFS.
- Producer-consumer pipelines.
- Schedulers.
- Work queues.

Implement:

- Circular buffer queue.
- Blocking queue.
- MPSC queue as a design exercise.

## Heap

Binary heap supports:

- Insert O(log n).
- Top O(1).
- Pop O(log n).

Used for:

- Top k.
- Schedulers.
- Dijkstra.
- Merge k sorted streams.
- Timers.

## Brutal Exercises

1. Implement doubly linked list with iterators.
2. Implement circular buffer with overwrite and non-overwrite modes.
3. Implement binary heap with custom comparator.
4. Implement timer scheduler using heap.
5. Build LRU cache using hash map plus list and document iterator invalidation.

