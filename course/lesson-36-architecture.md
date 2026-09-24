# Lesson 36: Ports, Adapters, and Testable Boundaries

## What You Gain

You'll design a system with a dependency-inverted core (ports/adapters/hexagonal architecture) and know how and when real production teams reach for microservices vs. a modular monolith, CQRS, and event sourcing, and what each actually costs operationally. This is "real software architecture" in the sense you asked for: boundaries chosen because of testability and failure isolation, not diagrams for their own sake -- the tradeoffs a staff engineer has to defend in a design review.

## Why This Comes Now

Lesson 35 established patterns for extensible c++ systems. This chapter uses that foundation to study ports, adapters, and testable boundaries.

## Core Model

Architecture should isolate volatile I/O from stable domain rules. Dependency direction, error contracts, and deterministic tests matter more than folder names.

The domain layer should not import file, thread, or GPU concerns. Adapters translate external failure into domain-level results while preserving a deterministic core.

## Mechanism and Failure Cases

Draw dependencies from adapters toward the domain core, never from the core toward a particular file or GPU API. A pure core is easy to test with deterministic inputs, but time, randomness, and error translation must be supplied at the boundary. Keep external formats separate from domain types so malformed records cannot masquerade as valid state. An architecture review should show one actual feature change, not only boxes.

## Real Production Architecture Patterns

Ports and adapters is the mechanism; the choices below are where it gets applied at system scale, and where "real software architecture" tradeoffs actually get argued in a design review:

- **Modular monolith vs. microservices.** A modular monolith keeps ports/adapters boundaries as in-process module edges: cheap to refactor, trivially consistent, and deployable as one unit. Microservices turn those same boundaries into network calls: independently deployable and scalable, at the cost of partial failure, versioning, and distributed debugging becoming permanent facts of life. Split a boundary into a service only when its failure, scaling, or ownership needs genuinely diverge from its neighbors -- not by default.
- **CQRS (command/query responsibility segregation).** Separating the write model (enforces invariants, optimized for correctness) from the read model (denormalized, optimized for query shape) is a port/adapter split applied to data access itself. It buys read scalability and simpler queries at the cost of eventual consistency between the two models -- a cost that is invisible until a user reads their own just-written data from the stale side.
- **Event sourcing.** Storing the sequence of state-changing events, rather than current state, makes the domain core's history auditable and replayable (rebuild any past state, add new read models later without touching the write path). It costs real complexity: every event schema is now a long-lived contract, and "delete this data" requires deliberate design instead of a `DELETE` statement.
- **Failure domains.** A production architecture review should be able to answer, for every boundary: what happens when the thing on the other side is slow, wrong, or gone. A dependency-inverted core makes that answerable in isolation (mock the port, force the failure, watch the core's response) instead of only discoverable in an incident.

Each pattern is a real cost paid for a real property (deployability, read scalability, auditability, blast-radius containment). Choosing one without being able to state which property you are buying, and what it costs, is exactly the gap between drawing boxes and doing architecture.

## Worked Reasoning

Turn an earlier processor into a domain core plus file and in-memory adapters. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 353 (Define an input port interface or function boundary.), what is the smallest case that exposes a wrong answer?
- For Activity 356 (Test core behavior without filesystem access.), which invariant or ownership rule must survive each state change?
- For Activity 359 (Draw dependency direction and ownership diagram.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 37 builds on this by moving to dynamic libraries, c abi, and plugins.

Start with the [ten ordered activities](../work/lesson-36/ASSIGNMENT.md).
