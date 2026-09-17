# Expert C++ Systems Engineering Course

This repo is a deep training program for becoming dangerous in modern C++, multithreaded systems, performance work, system design, and large-scale software architecture.

The goal is not "know C++ syntax." The goal is to think like an engineer who can design and defend complex C++ systems: ownership, lifetime, APIs, concurrency, memory layout, failure modes, deployment, observability, and architecture tradeoffs.

## How This Course Works

The canonical path is `course/README.md`: 36 numbered lessons from pointers and object lifetime through a multithreaded order-matching engine. Supporting source labs live under `src/`, larger build specifications under `projects/`, and engineering templates under `templates/`.

Do not just read. For every serious topic, you must produce:

- Working C++.
- Tests or a test plan.
- A design doc.
- A benchmark or performance note.
- A failure analysis.
- A review note explaining tradeoffs.

## Build Setup

From the repo root:

```powershell
cmake -S . -B build
cmake --build build
ctest --test-dir build
```

On this Windows/MSYS2 setup, this worked:

```powershell
cmake -S . -B build -G "MinGW Makefiles"
cmake --build build
ctest --test-dir build --output-on-failure
```

The starter programs under `src/exercises/` compile now, but they are intentionally incomplete. Treat each TODO as a lab.

## Expert Skill Targets

By the end, you should be able to:

- Read C++ code and immediately identify ownership, lifetime, exception, and thread-safety risks.
- Use modern C++ idioms without cargo-culting smart pointers, inheritance, templates, or atomics.
- Implement and analyze core data structures: arrays, strings, hash tables, heaps, trees, graphs, tries, DSU, Fenwick trees, segment trees, sparse tables, caches, and indexing structures.
- Recognize algorithmic patterns: two pointers, sliding window, binary search on answer, divide and conquer, greedy, graph traversal, shortest paths, topological sorting, dynamic programming, and amortized analysis.
- Design APIs that make invalid states difficult and resource leaks unlikely.
- Understand object layout, virtual dispatch, move semantics, ABI boundaries, and undefined behavior.
- Build high-quality concurrent code with mutexes, condition variables, futures, atomics, cancellation, and clean shutdown.
- Explain the C++ memory model well enough to avoid fake lock-free designs.
- Design complex backend systems in C++ with clear module boundaries, data ownership, observability, deployment, and recovery behavior.
- Analyze performance from algorithm to allocator to cache line to system call.
- Write design docs, ADRs, incident reports, and architecture reviews that sound like real engineering work.
- Pass senior-level C++, concurrency, architecture, and system design interviews.

## Non-Negotiable Rule

For every serious exercise, produce six artifacts:

1. Working code.
2. Tests or a test plan.
3. Complexity analysis.
4. Design note.
5. Failure analysis.
6. Review checklist.

That habit is what moves you from "I can code" to "I can own systems."

## Start Here

1. Open `course/README.md`.
2. Complete Lesson 1, then Lesson 2, through Lesson 36 without skipping mastery gates.
3. Keep each lesson's code and evidence together; reading alone does not complete a lesson.
4. Build and run the starter labs.
5. Pick one capstone from `projects/` and keep improving it throughout the course.
6. Use `templates/` for every design decision.
