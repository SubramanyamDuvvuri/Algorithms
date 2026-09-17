# 08 - OS, Networking, And Storage

Goal: understand the environment your C++ program lives in.

## Processes And Threads

A process owns an address space and OS resources. Threads run inside a process and share memory.

Know:

- Stack vs heap.
- File descriptors or handles.
- Virtual memory.
- Context switching.
- Scheduling.
- Signals or Windows console/control events.

## System Calls

System calls cross from user space into the kernel. They are much slower than normal function calls.

Examples:

- Read file.
- Write socket.
- Create thread.
- Allocate virtual memory.
- Wait on OS synchronization primitive.

Batch work when practical.

## Networking Basics

You should know:

- TCP vs UDP.
- Request/response.
- Connection pooling.
- Timeouts.
- Retries.
- Backoff and jitter.
- Idempotency.
- Head-of-line blocking.
- Serialization formats.

Every network call can fail, hang, duplicate, or arrive late.

## Storage Basics

Important ideas:

- Sequential writes are faster than random writes.
- fsync durability is expensive.
- Caches can lie if you do not understand flush behavior.
- Indexes speed reads but cost writes and storage.
- Compaction and cleanup matter in log-structured systems.

## C++ Boundary Code

C++ often touches OS APIs directly. Wrap platform-specific handles in RAII objects.

Boundary code should:

- Translate errors clearly.
- Own resources explicitly.
- Avoid leaking handles.
- Keep platform conditionals contained.

## Drills

1. Write a file copy program using buffered reads and writes.
2. Design a durable append-only log.
3. Build a small TCP echo server if your platform setup allows it.
4. Add timeouts and cancellation to a fake network client.
5. Explain how your program shuts down while requests are in flight.

