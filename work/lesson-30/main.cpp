// Lesson 30: Syscalls, the Kernel Boundary, and strace/ltrace
// Learn: The syscall boundary, strace/ltrace, and the real cost of I/O.
// Why it helps: This is the fastest way to diagnose "why is this slow" when reading code alone can't tell you.
//
// Activity 291: TODO - Trace a simple program with strace and map each observed syscall to the C++ standard library call that produced it.
// Activity 292: TODO - Write a raw syscall wrapper (e.g., via syscall()) for a function normally provided by libc and compare behavior.
// Activity 293: TODO - Measure the cost of a syscall-heavy loop (e.g., repeated small read/write) versus a batched version.
// Activity 294: TODO - Use ltrace and strace together to distinguish library-level calls from actual kernel entries.
// Activity 295: TODO - Instrument error handling for a syscall that can return EINTR, EAGAIN, or ENOMEM and test each path.
// Activity 296: TODO - Compare buffered I/O (std::fstream) against unbuffered syscalls (read/write) for the same workload.
// Activity 297: TODO - Explain and demonstrate the user/kernel mode transition cost using a microbenchmark.
// Activity 298: TODO - Reduce a program's syscall count using batching or vectored I/O (readv/writev) and measure the improvement.
// Activity 299: TODO - Diagnose a synthetic 'slow' program using strace -c and identify its dominant syscall cost.
// Activity 300: TODO - Document the syscall boundary contract for one function: preconditions, error codes, and retry policy.

// Add your implementation below. Keep these TODOs as a working checklist.
