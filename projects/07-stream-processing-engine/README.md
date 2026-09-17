# Project 07 - Stream Processing Engine

Build a small stream processing engine.

## Problem

Consume events, transform them, window them, aggregate them, and write results while handling backpressure and failures.

## Requirements

- Source interface.
- Sink interface.
- Transform stage.
- Filter stage.
- Windowed aggregation.
- Bounded queues between stages.
- Backpressure.
- Checkpoint design.
- Error handling.
- Metrics.

## Stretch Requirements

- Event-time vs processing-time windows.
- Watermarks.
- Exactly-once-like discussion.
- Replay from checkpoint.
- Parallel stages.
- Dynamic topology.

## C++ Focus

- Pipeline architecture.
- Thread ownership.
- Move-only event payloads.
- Backpressure.
- Cancellation.
- Memory reuse.
- Interface design.

## DSA Focus

- Queues.
- Heaps for timers.
- Hash maps for keyed aggregation.
- Ring buffers.
- Sliding windows.

## Architecture Questions

1. What happens when a sink is slow?
2. How do you avoid unbounded memory growth?
3. What state must be checkpointed?
4. What does replay do to duplicates?
5. How do you partition work by key?
6. Which metrics show lag and data loss?

## Deliverables

- Local pipeline prototype.
- Design doc.
- Backpressure test.
- Checkpoint/replay design.
- Postmortem for duplicate output incident.

