# Project 08 - Modular C++ Platform

Design a large modular C++ application that can grow for years.

## Problem

Create the architecture for a complex C++ platform with multiple modules, clear boundaries, plugins, configuration, persistence, and operational concerns.

Example domains:

- Trading platform.
- Game server.
- Robotics control system.
- Storage engine.
- Media processing platform.
- Simulation engine.

## Requirements

- Module dependency graph.
- Public/private headers.
- Stable core domain model.
- Plugin boundary.
- Versioned API.
- Build strategy.
- Testing strategy.
- Observability strategy.
- Deployment strategy.
- Architecture decision records.

## Stretch Requirements

- ABI-stable plugin interface.
- Scripting extension boundary.
- Hot reload design.
- Multi-process split.
- Security sandbox design.
- Migration plan from monolith to modules.

## C++ Focus

- Header hygiene.
- Pimpl.
- Static vs dynamic libraries.
- ABI stability.
- Dependency inversion.
- Compile-time control.
- Ownership contracts.
- Exception policy.

## Architecture Questions

1. What are the top-level modules?
2. Which module owns each data model?
3. Which dependencies are forbidden?
4. How do plugins interact with core?
5. What is the error-handling policy?
6. How do teams work independently?
7. How do you keep build times sane?
8. How do you test architecture rules?

## Deliverables

- Architecture doc.
- Module dependency graph.
- ADR set.
- API boundary examples.
- Review explaining risks and future evolution.

