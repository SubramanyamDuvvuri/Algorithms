# Design Doc: Title

## Context

What problem are we solving? Who is affected? Why now?

## Goals

- Goal 1.
- Goal 2.
- Goal 3.

## Non-Goals

- Non-goal 1.
- Non-goal 2.

## Requirements

Functional:

- Requirement 1.

Non-functional:

- Latency:
- Throughput:
- Availability:
- Durability:
- Consistency:
- Security:
- Cost:

## Proposed Design

Describe the architecture, data flow, APIs, storage, and operational behavior.

## APIs

```text
Endpoint or interface:
Request:
Response:
Errors:
```

## Data Model

```text
Entity:
Fields:
Indexes:
Retention:
```

## Alternatives Considered

| Option | Pros | Cons | Decision |
| --- | --- | --- | --- |
| A | | | |
| B | | | |

## Failure Modes

- Dependency failure:
- Slow dependency:
- Partial write:
- Duplicate request:
- Queue backlog:
- Bad deploy:

## Observability

Metrics:

- Metric 1.

Logs:

- Log 1.

Alerts:

- Alert 1.

## Rollout Plan

1. Build behind flag.
2. Test internally.
3. Roll out to small percentage.
4. Monitor.
5. Ramp or rollback.

## Open Questions

- Question 1.

