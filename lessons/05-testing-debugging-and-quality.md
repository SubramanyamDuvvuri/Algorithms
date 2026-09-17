# 05 - Testing, Debugging, And Quality

Goal: learn how professional C++ code is proven, inspected, and kept maintainable.

## Testing Pyramid

For C++ systems:

- Unit tests: pure logic, small components.
- Integration tests: components working together.
- System tests: real process behavior.
- Stress tests: high load and repeated execution.
- Fuzz tests: unexpected inputs.
- Regression tests: bugs that must never return.

You do not need perfect coverage. You need useful confidence.

## Testable Design

Testable C++ usually has:

- Small pure functions for logic.
- Explicit dependencies.
- Clear ownership.
- Deterministic clocks and random sources.
- Interfaces around slow or unreliable external systems.

If code is impossible to test, it is usually too coupled.

## Debugging Method

1. Reproduce.
2. Reduce.
3. State the expected behavior.
4. Find the first point where reality diverges.
5. Fix the cause, not the symptom.
6. Add a regression test.

## Tools To Know

On your platform, learn equivalents for:

- Compiler warnings.
- Debugger breakpoints and watch windows.
- AddressSanitizer.
- UndefinedBehaviorSanitizer.
- ThreadSanitizer.
- Static analyzers.
- Profilers.
- Core dumps or crash dumps.

MSVC, Clang, and GCC all have useful warning and sanitizer support, though availability differs by OS and version.

## Code Review Checklist

Ask:

- Is ownership obvious?
- Are lifetimes safe?
- Are errors handled?
- Are invariants protected?
- Are names honest?
- Is concurrency protected?
- Is performance acceptable for the expected load?
- Are tests covering important behavior and failure cases?

## Drills

1. Pick a buggy program and write a debugging diary.
2. Add tests before fixing it.
3. Create one memory bug and catch it with tooling.
4. Create one race condition and explain why it is nondeterministic.
5. Review your own code as if it came from a teammate.

