// Lesson 31: Virtual Memory, mmap, and Custom Allocator Design
// Learn: mmap, page faults, virtual memory, and building allocators on top of them.
// Why it helps: This is memory management below malloc/new -- the depth real allocator and systems work requires.
//
// Activity 301: TODO - Map a file into memory with mmap and read/modify it, comparing against read()/write() for the same file.
// Activity 302: TODO - Demonstrate a page fault by touching a lazily-allocated (MAP_ANONYMOUS) page and explain what the kernel did.
// Activity 303: TODO - Implement a simple bump/arena allocator over a fixed buffer and verify allocation correctness.
// Activity 304: TODO - Extend the arena allocator with reset semantics and measure allocation throughput versus malloc/new.
// Activity 305: TODO - Implement a free-list allocator for fixed-size blocks and test fragmentation behavior under mixed alloc/free patterns.
// Activity 306: TODO - Use mprotect to make a region read-only and verify a write fault is correctly caught/reported (segfault) as expected behavior.
// Activity 307: TODO - Compare private vs shared mmap mappings across two processes and verify observed semantics.
// Activity 308: TODO - Design a slab-style allocator for one fixed object size and benchmark it against std::allocator for the same workload.
// Activity 309: TODO - Reason about virtual memory overcommit: allocate more than physical RAM lazily and explain the failure mode when touched.
// Activity 310: TODO - Document your allocator's ownership, thread-safety, and failure contract, and state when it should not be used.

// Add your implementation below. Keep these TODOs as a working checklist.
