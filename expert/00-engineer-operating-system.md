# 00 - Engineer Operating System

This course is not passive. You will study like someone preparing to own hard production C++ systems.

## Your Weekly Loop

1. Learn one concept deeply.
2. Implement it from scratch.
3. Replace it with the standard or proven production approach.
4. Compare both.
5. Write a design note.
6. Write tests.
7. Benchmark if performance matters.
8. Review your work as if it came from another engineer.

## The Six Questions

Ask these about every C++ design:

1. Who owns this?
2. How long does it live?
3. What can fail?
4. What can run concurrently?
5. What does it cost?
6. How will we observe and recover it in production?

## Output Standard

For each module, create:

- `notes.md`: your explanation.
- `implementation.cpp`: your code.
- `tests.md`: cases and edge cases.
- `benchmark.md`: measurement if relevant.
- `review.md`: risks and improvements.
- `design.md`: tradeoffs for complex topics.

## Senior Engineer Behavior

Do not only ask "does it work?"

Ask:

- Does the API make misuse hard?
- Does it fail predictably?
- Can a teammate maintain it?
- Can it be tested without heroic setup?
- Can it be deployed safely?
- Can it be debugged at 3 a.m.?

