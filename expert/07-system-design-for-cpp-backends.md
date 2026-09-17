# 07 - System Design For C++ Backends

Goal: design backend systems where C++ is a deliberate technical choice.

## When C++ Makes Sense

C++ is often chosen for:

- Low latency.
- High throughput.
- Tight memory control.
- Embedded or systems constraints.
- Existing native codebase.
- Trading, gaming, storage, networking, media, databases.

It is not always the best default for ordinary CRUD systems.

## C++ Backend Concerns

- ABI and deployment.
- Native dependency management.
- Crash safety.
- Memory leaks.
- Threading model.
- Request cancellation.
- Backpressure.
- Observability.
- Config reload.
- Graceful shutdown.
- Rolling upgrades.

## Service Design Checklist

For every service:

- API contract.
- Ownership of data.
- Threading model.
- Storage model.
- Queueing model.
- Failure model.
- Retry and timeout policy.
- Metrics and logs.
- Deployment model.
- Rollback plan.

## Hard Labs

1. Design C++ service runtime: config, logging, metrics, thread pools, signal handling.
2. Design low-latency market data service.
3. Design distributed cache node in C++.
4. Design file ingestion pipeline.
5. Write capacity estimates and p99 latency budget.

## Mastery Questions

- Why choose C++ over Go/Java/Rust/Python?
- What crashes the process?
- How do you contain memory bugs?
- How do you roll out native services safely?
- How do you expose observability from C++?

