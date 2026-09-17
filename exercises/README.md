# Exercise Bank

These are not toy exercises. They are designed to make you practice design, correctness, testing, performance, and explanation.

For every exercise, submit:

- Code.
- Tests or a test plan.
- Complexity analysis.
- Failure analysis.
- A short design note.

## Level 1 - Refresh But Serious

1. **Modern Binary Search Library**
   - Implement lower bound, upper bound, exact search, rotated-array search, and answer-space binary search.
   - Support custom comparators.
   - Explain iterator category requirements.
   - Add edge-case tests.

2. **String Algorithms Pack**
   - Palindrome with Unicode discussion, even if implementation is ASCII.
   - KMP substring search.
   - Rabin-Karp with collision handling.
   - Run-length encoding.
   - Streaming tokenizer using `std::string_view`.

3. **Expression Evaluator**
   - Parse arithmetic expressions with precedence and parentheses.
   - Add variables.
   - Add useful error messages with line and column.
   - Avoid memory leaks and dangling references.

## Level 2 - OOP And API Design

4. **Plugin-Based Shape Engine**
   - Define a `Shape` abstraction.
   - Implement circle, rectangle, polygon, and composite shape.
   - Add serialization.
   - Add a non-inheritance implementation using `std::variant`.
   - Compare both designs.

5. **Banking Domain Model**
   - Account, ledger entry, transfer, overdraft policy, fraud rule.
   - Every state transition must preserve invariants.
   - Add rollback behavior for failed transfers.
   - Write an ADR for your error-handling strategy.

6. **Configuration System**
   - Parse config from file, environment, and command line.
   - Support precedence.
   - Validate schema.
   - Produce useful diagnostics.
   - Make it testable without touching real environment variables.

## Level 3 - Modern C++ And Memory

7. **RAII Resource Pack**
   - File handle wrapper.
   - Temporary directory wrapper.
   - Scoped timer.
   - Mutex guard.
   - Move-only socket-like fake resource.
   - Prove each resource is released once.

8. **Generic LRU Cache**
   - Template over key, value, hash, equality, and clock.
   - Support capacity limit and TTL.
   - Add hit/miss metrics.
   - Add optional thread-safe wrapper.
   - Benchmark against simple map lookup.

9. **Object Pool**
   - Fixed-capacity pool.
   - Stable handles.
   - No use-after-free.
   - Optional debug poisoning.
   - Explain why this is risky in production unless carefully tested.

## Level 4 - Multithreading

10. **Blocking Queue**
    - Multiple producers and consumers.
    - Close operation.
    - Timed pop.
    - Graceful shutdown.
    - Stress test with thousands of operations.

11. **Thread Pool**
    - Submit tasks returning futures.
    - Support shutdown and drain.
    - Propagate exceptions.
    - Avoid running tasks after stop.
    - Add metrics: queued tasks, active workers, completed tasks.

12. **Concurrent Log Pipeline**
    - Producers write log events.
    - Background workers batch and flush to disk.
    - Preserve per-producer order.
    - Support backpressure.
    - Define durability guarantees.

13. **Rate Limiter**
    - Implement token bucket and sliding window.
    - Add thread-safe version.
    - Add distributed design on paper.
    - Explain clock issues.

## Level 5 - Systems And Architecture

14. **Mini Database**
    - Append-only log.
    - In-memory index.
    - Get, put, delete.
    - Crash recovery.
    - Compaction.
    - Benchmarks.

15. **Feature Flag Platform**
    - API design.
    - Local SDK cache.
    - Rollout percentages.
    - Audit log.
    - Kill switch.
    - Consistency and latency tradeoffs.

16. **Notification System**
    - Email, SMS, push channels.
    - User preferences.
    - Retries and dead letters.
    - Idempotency keys.
    - Rate limits.
    - Observability dashboard design.

17. **Search Autocomplete**
    - Trie or sorted-vector implementation.
    - Ranking.
    - Prefix updates.
    - Cache hot prefixes.
    - Design distributed indexing on paper.

18. **Trading Order Book**
    - Limit orders.
    - Market orders.
    - Price-time priority.
    - Cancellation.
    - Snapshot and replay.
    - Latency-sensitive data structures.

## Brutal Interview Set

Solve these under time pressure, then rewrite them cleanly afterward:

1. LRU cache with O(1) get/put.
2. Thread-safe bounded blocking queue.
3. Merge k sorted streams.
4. Serialize and deserialize binary tree.
5. Top k frequent words with tie-breaking.
6. Build dependency graph and detect cycles.
7. Implement filesystem-like path normalization.
8. Design parking lot with pricing rules.
9. Design elevator scheduler.
10. Design URL shortener at 100 million URLs/day.
11. Debug a deadlock from two locks acquired in opposite order.
12. Explain why a `std::string_view` is dangling.

## Self Review Rubric

Score each serious exercise from 1 to 5:

- Correctness.
- Simplicity.
- Ownership clarity.
- Error handling.
- Test quality.
- Performance awareness.
- Concurrency safety.
- Explanation quality.

If any score is below 3, revise before moving on.

## DSA Mastery Ladder

For each item, implement it in C++ and write invariant, complexity, tests, and production usage.

### Core Structures

1. Dynamic array with amortized growth.
2. Doubly linked list with iterators.
3. Circular buffer.
4. Binary heap.
5. Hash table with separate chaining.
6. Hash table with open addressing.
7. Binary search tree.
8. AVL tree or red-black tree.
9. Trie with autocomplete.
10. Disjoint set union.

### Advanced Structures

1. Fenwick tree.
2. Segment tree with lazy propagation.
3. Sparse table.
4. Bloom filter.
5. Skip list.
6. Consistent hash ring.
7. Timing wheel.
8. LSM-tree design prototype.
9. B+tree page-layout design.
10. Inverted index.

### Algorithm Sets

1. Sorting: quicksort, mergesort, heapsort, counting sort.
2. Binary search: lower bound, upper bound, answer search.
3. Graphs: BFS, DFS, Dijkstra, Bellman-Ford, topo sort, SCC, MST.
4. DP: knapsack, edit distance, LIS, interval DP, tree DP, bitmask DP.
5. Strings: KMP, rolling hash, trie search, suffix-array concept.
6. Greedy: interval scheduling, Huffman coding, activity selection.
7. Backtracking: permutations, subsets, N-queens, constraint search.

### Production Bridges

1. Use trie for autocomplete service.
2. Use heap for timer scheduler.
3. Use DSU for clustering or connectivity.
4. Use segment tree for metrics range queries.
5. Use Bloom filter for cache/database miss filtering.
6. Use consistent hashing for distributed cache.
7. Use LSM design for mini database.
8. Use graph algorithms for dependency resolver.
9. Use sliding window for rate limiter.
10. Use LRU for cache eviction.

## Expert Integration Challenges

These combine multiple tracks and are closer to real engineering.

1. **Thread-Safe LRU Cache**
   - Hash map plus list.
   - TTL.
   - Metrics.
   - Lock striping design.
   - Benchmark single lock vs striped lock.

2. **Dependency Build Scheduler**
   - Graph parser.
   - Cycle detection.
   - Topological scheduling.
   - Thread pool execution.
   - Failure propagation.

3. **Low-Latency Timer Service**
   - Heap or timing wheel.
   - Cancellation.
   - Thread-safe scheduling.
   - p99 latency benchmark.

4. **Mini Search Engine**
   - Tokenization.
   - Inverted index.
   - Ranking.
   - Query parser.
   - Memory usage report.

5. **Storage Engine Index**
   - Append-only log.
   - Sparse index.
   - Bloom filter.
   - Compaction plan.
   - Crash recovery tests.
