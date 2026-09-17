# Project 03 - Distributed Rate Limiter

Design and prototype a rate limiter suitable for a backend service.

## Problem

Limit requests by user, API key, IP address, or route across multiple application servers.

## Local Prototype

Implement:

- Token bucket.
- Sliding window counter.
- Fixed window counter.
- Thread-safe local limiter.

## Distributed Design

Write a design doc for:

- Centralized Redis-like limiter.
- Local approximate limiter with periodic sync.
- Sharded limiter by key.
- Failure behavior when the limiter backend is down.

## Requirements

- Configurable limits.
- Per-key limits.
- Burst support.
- Low-latency decision path.
- Metrics.
- Audit logs for rejected requests.

## Stretch Requirements

- Hierarchical limits: user plus organization plus global.
- Dynamic config reload.
- Shadow mode.
- Multi-region behavior.
- Abuse detection signals.

## Design Questions

1. Fail open or fail closed when limiter storage is down?
2. How accurate must the limiter be?
3. How do you handle hot keys?
4. How do clocks affect correctness?
5. How do you roll out a new limit safely?
6. What metrics show false positives or false negatives?

## Deliverables

- Local C++ limiter implementation.
- System design doc.
- ADR comparing algorithms.
- Load test plan.
- Incident runbook for limiter outage.

