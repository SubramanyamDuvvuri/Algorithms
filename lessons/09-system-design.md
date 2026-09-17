# 09 - System Design

Goal: learn to design systems from requirements to tradeoffs, not from memorized diagrams.

## System Design Interview Flow

1. Clarify requirements.
2. Define APIs and data model.
3. Estimate scale.
4. Sketch high-level architecture.
5. Deep dive into key components.
6. Address bottlenecks and failure modes.
7. Discuss observability and operations.
8. Summarize tradeoffs.

## Requirements

Split requirements into:

- Functional: what the system does.
- Non-functional: latency, throughput, availability, durability, consistency, privacy, cost.
- Constraints: team size, existing stack, compliance, geography.

Ask what matters most. A design optimized for latency may differ from one optimized for cost or correctness.

## Capacity Estimation

Estimate:

- Users.
- Requests per second.
- Read/write ratio.
- Payload size.
- Storage growth.
- Peak traffic.
- Cache hit rate.
- Fanout.

Approximation is fine. Being directionally sane is the goal.

## Core Components

Common pieces:

- API gateway or load balancer.
- Stateless application servers.
- Cache.
- Database.
- Search index.
- Queue or stream.
- Object storage.
- Background workers.
- Monitoring and alerting.

Do not add components for decoration. Every component must solve a problem and create some cost.

## Data Design

Know when to choose:

- Relational database.
- Key-value store.
- Document database.
- Wide-column database.
- Search engine.
- Graph database.
- Object storage.

Think about access patterns before schema.

## Caching

Caching improves latency and reduces load, but introduces invalidation, staleness, and consistency questions.

Patterns:

- Cache-aside.
- Write-through.
- Write-behind.
- Read-through.
- TTL-based expiration.

## Failure Modes

Every design must discuss:

- Dependency outage.
- Slow dependency.
- Partial failure.
- Network partition.
- Queue backlog.
- Hot keys.
- Data corruption.
- Retry storm.
- Bad deploy.

## Drills

Design these systems in writing:

1. URL shortener.
2. News feed.
3. Chat service.
4. File storage service.
5. Metrics ingestion pipeline.
6. Ride matching service.
7. Notification system.
8. Feature flag platform.

For each, produce API, schema, scale estimates, architecture, failure modes, and metrics.

