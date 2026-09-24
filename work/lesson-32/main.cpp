// Lesson 32: Scheduling, Context Switches, and Cache/NUMA Topology
// Learn: Context switches, CPU affinity, and cache/NUMA effects on real workloads.
// Why it helps: Thread-to-core layout decisions are invisible in source code but show up directly in latency numbers.
//
// Activity 311: TODO - Measure context-switch cost between two threads using a ping-pong benchmark over a pipe or condition variable.
// Activity 312: TODO - Inspect CPU topology (cores, sockets, cache sizes) using /proc/cpuinfo or lscpu and record it.
// Activity 313: TODO - Pin a thread to a CPU core with sched_setaffinity (or platform equivalent) and verify placement.
// Activity 314: TODO - Compare throughput of a CPU-bound workload with and without CPU pinning under contention from other threads.
// Activity 315: TODO - Demonstrate the effect of oversubscription (more runnable threads than cores) on latency.
// Activity 316: TODO - Measure cross-core cache-line migration cost by bouncing a hot variable between pinned threads.
// Activity 317: TODO - Explain and test the difference between time-sliced scheduling behavior and priority-based expectations.
// Activity 318: TODO - Design a thread-to-core assignment strategy for a multi-stage pipeline and justify it with measurements.
// Activity 319: TODO - Reason about NUMA effects (or explain them precisely if hardware is single-node) on memory access latency.
// Activity 320: TODO - Document a scheduling/affinity policy: assumptions, measured tradeoffs, and when default scheduling is preferable.

// Add your implementation below. Keep these TODOs as a working checklist.
