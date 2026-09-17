# Project 01 - Concurrent Log Engine

Build a high-throughput logging engine in C++.

## Problem

Many producer threads generate log events. A background system batches events and writes them to disk without blocking producers too much.

## Requirements

- Multiple producer threads.
- Bounded queue with backpressure.
- Background flush thread.
- Batch writes.
- Graceful shutdown.
- No lost logs during normal shutdown.
- Configurable queue capacity and flush interval.
- Metrics for dropped, queued, flushed, and failed events.

## Stretch Requirements

- Per-producer ordering.
- Log rotation.
- Compression.
- Crash recovery notes.
- Async API returning futures.
- Structured JSON output.

## Concepts Practiced

- RAII.
- Mutexes.
- Condition variables.
- Thread shutdown.
- Backpressure.
- Batching.
- File I/O.
- Failure modes.

## Design Questions

1. What happens when the queue is full?
2. Do producers block, drop logs, or sample?
3. What durability guarantee do you provide?
4. What happens if disk writes fail?
5. How do you stop while producers are still running?
6. What metrics indicate the logger is unhealthy?

## Deliverables

- Working implementation.
- Unit or stress tests.
- Design doc.
- Benchmark with 1, 4, 16, and 64 producers.
- Postmortem for a simulated disk-full incident.

