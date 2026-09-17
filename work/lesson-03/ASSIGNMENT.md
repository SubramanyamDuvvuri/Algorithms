# Lesson 3 Assignment - Object layout

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Build a layout inspector using `sizeof`, `alignof`, and `offsetof`; optimize a record layout; define a portable binary format.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Round-trip serialization, malformed/truncated input, endianness, version mismatch, and alignment-safe reads.

## Write

In `notes.md`: Record layouts before/after and explain padding, standard layout, and why raw `memcpy` serialization is unsafe.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Guided)

- Compare three field orders and predict size before running.
- Encode wire fields byte-by-byte; never reinterpret network bytes as a native struct.
- Specify magic, version, lengths, byte order, payload, and checksum first.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
