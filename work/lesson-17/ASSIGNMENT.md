# Lesson 17 Assignment - Error handling

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement the same parser using exceptions and `std::expected`; add failure injection.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Malformed input, allocation/I/O failure, rollback, nested context, retryable/fatal errors, and no-throw paths.

## Write

In `notes.md`: Document each API's errors, channel, guarantee, resulting state, and retry policy.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Moderate)

- Write failure taxonomy before choosing a mechanism.
- For a strong guarantee, perform risky work on temporary state and commit last.
- Audit all callees before declaring `noexcept`.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
