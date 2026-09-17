# 06 - Dynamic Programming

Goal: recognize overlapping subproblems and build correct state transitions.

## DP Thinking

Ask:

1. What is the state?
2. What decision changes the state?
3. What recurrence relates states?
4. What are the base cases?
5. What order computes states safely?
6. Can memory be compressed?

## Patterns

- 1D DP.
- 2D grid DP.
- Knapsack.
- Longest common subsequence.
- Longest increasing subsequence.
- Interval DP.
- Tree DP.
- Bitmask DP.
- Digit DP.

## C++ Traps

- Overflow in counts.
- Huge memory allocation.
- Incorrect initialization.
- Accidental O(n^3) when O(n^2) is possible.
- Recursion depth.
- Memo key copying too much data.

## Brutal Exercises

1. Coin change variants.
2. Edit distance with reconstruction.
3. Longest increasing subsequence O(n log n).
4. Matrix chain multiplication.
5. Weighted interval scheduling.
6. Tree diameter and tree DP.
7. Traveling salesman with bitmask DP for small n.
8. Convert recursive memoization to bottom-up tabulation.

