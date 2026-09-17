# 07 - Advanced Data Structures

Goal: handle problems where ordinary arrays/maps are not enough.

## Disjoint Set Union

Operations:

- `find`.
- `unite`.
- `connected`.

Optimizations:

- Path compression.
- Union by rank or size.

Used for:

- Kruskal MST.
- Connectivity.
- Clustering.
- Offline query processing.

## Fenwick Tree

Supports prefix sums with O(log n) update and query.

Used when:

- Operation is invertible.
- You need prefix aggregation.
- Simpler than segment tree.

## Segment Tree

Supports range queries and point or range updates.

Variants:

- Min/max/sum/gcd.
- Lazy propagation.
- Persistent segment tree.
- Dynamic segment tree.

## Sparse Table

Preprocess immutable array for O(1) idempotent range queries like min/gcd.

## Bloom Filter

Probabilistic set:

- False positives possible.
- False negatives not possible if implemented correctly.

Used for:

- Cache penetration protection.
- Database storage engines.
- Dedup prefiltering.

## Skip List

Probabilistic ordered structure.

Used in some storage systems and in-memory indexes.

## Production Index Structures

Study conceptually:

- B+tree.
- LSM tree.
- Inverted index.
- R-tree.

## Brutal Exercises

1. Implement DSU with rollback.
2. Implement Fenwick tree for prefix sums and range updates.
3. Implement segment tree with lazy propagation.
4. Implement sparse table for range minimum query.
5. Implement Bloom filter and measure false positive rate.
6. Design an LSM-tree compaction strategy.
7. Explain which structure you would use for time-series metrics.

