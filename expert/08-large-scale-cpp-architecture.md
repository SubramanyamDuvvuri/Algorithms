# 08 - Large-Scale C++ Architecture

Goal: design C++ codebases that survive size, teams, and years.

## Architecture Problems In C++

- Header dependency explosion.
- Long compile times.
- ABI instability.
- Global state.
- Macro abuse.
- Undefined ownership.
- Cyclic dependencies.
- Mixed exception policies.
- Inconsistent threading assumptions.

## Module Boundaries

Good modules define:

- Public API.
- Ownership rules.
- Error policy.
- Thread-safety contract.
- Dependency direction.
- Test strategy.
- Performance expectations.

## Build Architecture

Think about:

- Static vs dynamic libraries.
- Header-only vs compiled libraries.
- Pimpl for ABI and compile-time isolation.
- Explicit dependency graph.
- Code generation boundaries.
- Third-party dependency isolation.

## Runtime Architecture

Patterns:

- Layered modular monolith.
- Hexagonal architecture.
- Plugin architecture.
- Event-driven architecture.
- Actor model conceptually.
- Service-oriented architecture.

## Hard Labs

1. Design a modular monolith in C++ for a trading platform.
2. Create dependency graph and remove cycles.
3. Define plugin API with versioning.
4. Write architecture review for mini database.
5. Split a module and document all new failure modes.

## Mastery Questions

- How do you keep compile times under control?
- What belongs in a header?
- How do you avoid global state?
- What is an ABI-stable boundary?
- How do architecture choices affect testing?

