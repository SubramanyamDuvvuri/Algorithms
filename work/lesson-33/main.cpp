// Lesson 33: perf, Flamegraphs, and Production-Grade Benchmarking
// Learn: perf, flamegraphs, and statistically defensible benchmarking.
// Why it helps: This is the actual workflow behind credible "we made it faster" performance work.
//
// Activity 321: TODO - Profile a CPU-bound program with perf stat and interpret cache-miss and branch-misprediction counters.
// Activity 322: TODO - Generate a flamegraph (perf record + perf script, or an equivalent sampling profiler) for a workload with a known hot function.
// Activity 323: TODO - Distinguish wall-clock time, CPU time, and syscall-wait time for the same run.
// Activity 324: TODO - Build a benchmark harness that reports median, p95, and p99 latency instead of a single average.
// Activity 325: TODO - Detect and eliminate a benchmarking artifact (e.g., compiler dead-code elimination, cache warm-up skew, frequency scaling).
// Activity 326: TODO - Compare two implementations of the same function using a statistically defensible before/after methodology.
// Activity 327: TODO - Profile a multi-threaded workload and identify a lock-contention or false-sharing hotspot from the flamegraph.
// Activity 328: TODO - Set up a regression-style benchmark that fails if p99 latency degrades beyond a stated threshold.
// Activity 329: TODO - Reduce a real hotspot found via profiling and re-measure to confirm the fix, not just its plausibility.
// Activity 330: TODO - Write a performance report: methodology, environment, raw numbers, and one properly rejected optimization.

// Add your implementation below. Keep these TODOs as a working checklist.
