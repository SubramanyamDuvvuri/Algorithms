# Project 05 - C++ Service Runtime Framework

Build the runtime foundation that a serious C++ backend service would use.

## Problem

Most backend services need the same core runtime features: configuration, logging, metrics, thread pools, lifecycle management, health checks, graceful shutdown, and dependency initialization.

Build a minimal but clean framework for those concerns.

## Requirements

- Typed configuration loader.
- Validation errors with useful messages.
- Structured logger interface.
- Metrics registry with counters, gauges, histograms conceptually.
- Thread pool integration.
- Service lifecycle: initialize, start, stop.
- Graceful shutdown.
- Health check interface.
- Dependency injection without a giant framework.
- Clear ownership model.

## Stretch Requirements

- Hot config reload.
- Plugin registration.
- Request context with correlation ID.
- Watchdog for stuck workers.
- Crash-safe fatal logging.
- Admin endpoint design.

## C++ Focus

- RAII.
- Interface boundaries.
- `unique_ptr` ownership.
- Avoiding globals.
- Thread-safe metrics.
- Shutdown order.
- ABI boundary discussion.

## Architecture Questions

1. Which objects are global, and can you avoid them?
2. Who owns each service component?
3. What starts first and stops last?
4. Can logging be used during shutdown?
5. How do you test without real threads or real time?
6. How would this framework be adopted by multiple services?

## Deliverables

- Runtime skeleton.
- Design doc.
- Lifecycle state diagram.
- Thread-safety contract.
- Runbook for service failing to shut down.

