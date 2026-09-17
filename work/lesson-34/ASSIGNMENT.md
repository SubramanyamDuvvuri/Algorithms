# Lesson 34 Assignment - Plugins and ABI

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Build a host plus two dynamically loaded plugins behind a versioned C ABI with capability negotiation.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Missing symbols, incompatible versions, plugin errors, allocator boundaries, live objects during unload, and reload generations.

## Write

In `notes.md`: Specify ownership, exception containment, compatibility, discovery, and hot-reload safety.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Minimal)

- Freeze a minimal C ABI first.
- Use opaque handles and versioned plain structs across modules.
- Model generations and live object counts before reload.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
