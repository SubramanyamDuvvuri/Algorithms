# Lesson 6 Assignment - References and lifetime

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Build a `std::string_view` tokenizer, then audit and redesign ten reference/view-returning APIs.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Empty input, temporary strings, container reallocation, returned locals, reference members, and lifetime extension.

## Write

In `notes.md`: Classify expression value categories and write explicit lifetime contracts.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Guided)

- Label every parameter owned/borrowed, mutable/read-only, nullable/non-null, and its validity period.
- `string_view` never extends string lifetime; reason about bad cases without executing UB.
- Use `decltype((expr))` with `static_assert` to inspect value categories.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
