# Project 04 - Trading Order Book

Build a simplified exchange order book.

## Problem

Maintain buy and sell limit orders and match incoming orders using price-time priority.

## Requirements

- Add limit order.
- Add market order.
- Cancel order.
- Modify order.
- Match trades.
- Maintain price-time priority.
- Snapshot book state.
- Replay events from log.
- Deterministic tests.

## Data Model

Think about:

- Order ID.
- Side: buy or sell.
- Price.
- Quantity.
- Timestamp or sequence number.
- User/account ID.
- Order status.

## Performance Constraints

The design should explain:

- Complexity of add, cancel, and match.
- Memory layout.
- Allocation strategy.
- Hot path.
- Logging strategy.
- Single-threaded matching vs concurrent ingestion.

## Stretch Requirements

- Multiple symbols.
- Stop orders.
- Iceberg orders.
- Risk checks.
- Market data snapshots.
- Latency histogram.

## Design Questions

1. Why is matching often single-threaded per symbol?
2. Which operations must be deterministic?
3. How do you cancel in O(1) or near O(1)?
4. How do you recover after crash?
5. How do you test fairness?
6. What would you measure before optimizing?

## Deliverables

- Working order book implementation.
- Replayable event log.
- Unit tests for matching.
- Benchmark.
- Architecture note explaining concurrency choices.

