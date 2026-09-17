# 11 - Software Architecture

Goal: structure software so teams can change it safely over time.

## Architecture Is Tradeoff Management

Architecture is not drawing boxes. It is deciding boundaries, dependencies, data ownership, failure behavior, and evolution paths.

Good architecture makes important changes easier and dangerous changes visible.

## Key Forces

Architecture balances:

- Simplicity.
- Modularity.
- Performance.
- Reliability.
- Security.
- Cost.
- Team ownership.
- Deployment speed.
- Observability.

You rarely maximize all of them.

## Common Styles

- Layered architecture: UI, application, domain, infrastructure.
- Hexagonal architecture: domain core with adapters around it.
- Clean architecture: dependency rule points inward.
- Modular monolith: one deployable with clear internal modules.
- Microservices: independent deployables with operational cost.
- Event-driven architecture: components communicate through events.

Microservices are not automatically advanced. A well-modularized monolith is often the stronger engineering choice until scale or team boundaries demand otherwise.

## Boundaries

A good boundary has:

- Clear ownership.
- Stable API.
- Hidden internals.
- Explicit data contracts.
- Minimal shared mutable state.
- Tests around behavior.

Bad boundaries leak database tables, internal enums, and implementation timing assumptions.

## Dependency Direction

High-level policy should not depend directly on low-level details.

Example:

- Domain defines `PaymentGateway` interface.
- Infrastructure implements `StripePaymentGateway`.
- Application wires them together.

This keeps business rules testable and stable.

## Architecture Documents

Write docs that help decisions happen:

- Context.
- Goals and non-goals.
- Constraints.
- Options considered.
- Decision.
- Consequences.
- Risks.
- Rollout plan.
- Metrics.

Use `templates/design-doc-template.md` and `templates/adr-template.md`.

## Drills

1. Convert a tangled program into layered modules.
2. Design a modular monolith for an ecommerce app.
3. Split one module into a service and list all new failure modes.
4. Write three ADRs for technical choices.
5. Review an architecture for coupling, ownership, and operability.

