# 10 - Distributed Systems

Goal: understand the hard parts that appear when a system spans machines.

## Why Distributed Systems Are Hard

The network is unreliable, latency varies, clocks disagree, machines fail, and retries can duplicate work.

Local reasoning is not enough. You need protocols and operational thinking.

## Consistency

Common models:

- Strong consistency: reads reflect the latest successful write.
- Eventual consistency: replicas converge over time.
- Read-your-writes: a user sees their own writes.
- Monotonic reads: reads do not go backward for a client.

Stronger consistency usually costs latency, availability, or complexity.

## CAP, Carefully

CAP says that during a network partition, a distributed data system must choose between consistency and availability.

Do not use CAP as a slogan. Ask what failure is happening, what users see, and how the system recovers.

## Replication And Sharding

Replication improves availability and read throughput.

Sharding distributes data by key.

Problems:

- Hot shards.
- Rebalancing.
- Cross-shard transactions.
- Replica lag.
- Split brain.
- Backup and restore.

## Queues And Streams

Queues decouple producers from consumers.

Design questions:

- At-most-once, at-least-once, or exactly-once-like behavior?
- Ordering requirements?
- Dead letter queue?
- Retry policy?
- Idempotent consumers?
- Backpressure?

Exactly-once is usually a system property built from idempotency, deduplication, transactions, and careful boundaries.

## Time And Clocks

Distributed clocks are not perfectly synchronized.

Prefer logical ordering when correctness depends on order. Use wall-clock time carefully for expiration, metrics, and user-facing timestamps.

## Drills

1. Design idempotency keys for a payment API.
2. Explain how a queue consumer handles duplicate messages.
3. Design sharding for a chat message table.
4. Handle a hot celebrity user in a news feed.
5. Design conflict resolution for offline document edits.
6. Write a runbook for database replica lag.

