# Project 06 - Distributed Cache

Design and prototype a distributed cache in C++.

## Problem

Build a cache service that stores key-value entries across multiple nodes with low latency.

## Local Prototype

Implement:

- In-memory LRU cache.
- TTL expiration.
- Background cleanup.
- Thread-safe access.
- Metrics: hits, misses, evictions, expired keys.

## Distributed Design

Design:

- Consistent hashing.
- Replication factor.
- Read and write paths.
- Node join and leave.
- Hot key handling.
- Cache invalidation.
- Failure behavior.

## Requirements

- `get`, `put`, `delete`.
- TTL.
- Capacity limit.
- Eviction policy.
- Multi-node sharding design.
- Observability.

## Stretch Requirements

- Write-through mode.
- Read-through mode.
- Bloom filter for missing keys.
- Compression.
- Multi-region design.
- Client library with connection pooling.

## DSA Focus

- Hashing.
- LRU list plus hash map.
- Consistent hashing ring.
- Heap or timing wheel for expirations.
- Bloom filter.

## Architecture Questions

1. What consistency does the cache provide?
2. How do clients find the right node?
3. What happens when a node dies?
4. How do you prevent cache stampede?
5. What happens with hot keys?
6. What metrics indicate cache harm instead of help?

## Deliverables

- Local cache implementation.
- Distributed system design doc.
- ADR for eviction policy.
- Failure-mode table.
- Benchmark and hit-rate simulation.

