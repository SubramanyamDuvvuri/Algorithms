// Lesson 29: Processes, Address Spaces, and the OS/Process Model
// Learn: fork/exec, address-space separation, and the process lifecycle (wait, reap, signals).
// Why it helps: Every multi-process system -- shells, servers, build tools, container runtimes -- is built on exactly this contract.
//
// Activity 281: TODO - Inspect a running process's memory map via /proc/self/maps and identify each segment (text, heap, stack, mmap regions).
// Activity 282: TODO - Fork a child process and observe independent address spaces (copy-on-write) with a shared counter that does not change across processes.
// Activity 283: TODO - Use exec to replace a process image and explain what state survives fork+exec versus what is destroyed.
// Activity 284: TODO - Measure fork+exec latency versus posix_spawn for launching a short-lived helper process.
// Activity 285: TODO - Implement a parent that waits on a child and correctly reaps it, then intentionally leave a zombie and observe it with ps.
// Activity 286: TODO - Use environment variables and argv to pass configuration across an exec boundary and validate malformed input safely.
// Activity 287: TODO - Trace signal delivery (SIGCHLD, SIGTERM) between parent and child and implement clean shutdown.
// Activity 288: TODO - Compare process isolation cost (fork) against thread creation cost for the same workload and justify a choice.
// Activity 289: TODO - Use namespaces or cgroups (or explain them precisely if unavailable) to reason about resource isolation for a service process.
// Activity 290: TODO - Document the full process lifecycle (fork, exec, wait, reap, signal) as a state diagram with failure paths.

// Add your implementation below. Keep these TODOs as a working checklist.
