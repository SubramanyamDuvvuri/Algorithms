# Lesson 2 Assignment - Arrays and span

Read the matching lesson in [the course](../../course/README.md) before coding.

## Build

Implement checksum and matrix APIs using pointer+size, array reference, `std::array`, and `std::span`; build a zero-allocation packet decoder.

## Beginner Path

Do these in order and inspect the values in a debugger.

1. Declare `int values[5]`, initialize every element, print each index/value/address, and observe contiguous addresses.
2. Compute the element count inside the declaring scope using `sizeof(values) / sizeof(values[0])`.
3. Pass the array to `void inspect(const int values[])` and observe why `sizeof(values)` no longer gives the array size.
4. Fix that API first with pointer-plus-size, then with `template<std::size_t N>` and an array reference.
5. Repeat the operations using `std::array<int, 5>` and compare `.size()`, iteration, copying, and bounds-checked `.at()`.
6. Write `sum(std::span<const int>)`. Call it with a raw array, `std::array`, and `std::vector`.
7. Use `first`, `last`, and `subspan`; test invalid requested ranges before constructing them.
8. Build the checksum function, then the matrix-row function, and only then attempt the packet decoder.

Keep one page in `notes.md` titled “What owns the elements?” A raw array and `std::array` contain elements; a span only observes somebody else's elements.

Use `main.cpp` for the implementation or demonstration entry point and `tests.cpp` for automated tests. Split code into headers and additional source files when the design needs it.

## Test

Zero length, fixed/dynamic extent, malformed lengths, subspans, mutation, and dangling-view cases.

Begin with direct `assert` checks. Include one `.at()` out-of-range test and catch the expected exception.

## Write

In `notes.md`: Compare the four APIs and explain array decay and view lifetime.

In `design.md`: record requirements, invariants, ownership, API decisions, rejected alternatives, failure behavior, and complexity.

In `benchmark.md`: state the hypothesis, workload, environment, method, raw summary, interpretation, and limitations. If benchmarking is not relevant, explain why.

## Hints (Guided)

- Write one function per API style and call all with the same data.
- Use `template<std::size_t N>` plus an array reference to preserve compile-time size.
- Treat span as borrowed address plus extent; validate lengths before subspans.
- Keep backing storage alive longer than every view.

## Definition of Done

- Code compiles with warnings enabled and no ignored warnings.
- Tests cover normal, boundary, invalid, and failure paths.
- Sanitizers or equivalent diagnostics are run where available.
- Complexity and ownership are explicit.
- The matching lesson's mastery gate can be answered without notes.
