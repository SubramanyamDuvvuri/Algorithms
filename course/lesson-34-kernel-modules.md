# Lesson 34: Linux Kernel Modules: Writing, Loading, and Debugging

## What You Gain

You'll write, load, and debug your own Linux kernel module -- the deepest layer of the stack most software engineers never touch -- and understand exactly why kernel code plays by different rules than user-space code. This is genuinely rare, high-signal knowledge: very few "senior SWE" candidates can speak to kernel-space work first-hand, and it's precisely the territory between application engineering and embedded/systems work you're aiming for.

## Why This Comes Now

Lesson 33 established perf, flamegraphs, and production-grade benchmarking. This chapter goes to the bottom of the stack: code that runs as part of the kernel itself, not as a process the kernel schedules.

**Environment note:** this lesson requires a real Linux kernel with build headers -- a disposable VM or a WSL2 distribution with a matching `linux-headers` package, never a machine you depend on. If no such environment is available yet, complete the reading, the design activities, and the dmesg/lifecycle diagram from documentation, and note explicitly which activities are pending real hardware -- do not fabricate output you have not actually observed.

## Core Model

A kernel module runs in kernel space: no libc, no user-space memory protection from itself, and a crash can take down the whole machine instead of one process. `module_init`/`module_exit` (built on `init_module`/`cleanup_module`) are the entire lifecycle contract; everything else -- logging via `printk`, exposing state via `/proc`, parameters via `module_param` -- is deliberately minimal compared to user-space APIs.

## Mechanism and Failure Cases

Because a kernel module shares one address space and one set of privileges with the entire kernel, a bug that would be a contained segfault in user space can corrupt unrelated kernel state or panic the machine -- this is exactly why this activity set requires a disposable VM. `dmesg` is your primary observability channel; there is no debugger attached by default the way there is for a user-space process. A well-designed module keeps its footprint minimal (one clear responsibility, bounded state) precisely because the safety net relied on in Parts I through III -- RAII, exceptions, sanitizers -- mostly does not exist here.

## Worked Reasoning

Build and load a minimal module that logs a message via `printk` on load and unload, confirm it in `dmesg`, then unload it and confirm cleanup. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use `dmesg` output as your oracle for what actually happened inside the kernel.

## Deep-Dive Questions

- For Activity 331 (Build and load a minimal 'hello world' kernel module (init/exit functions) in a disposable VM or container, then unload it.), what is the smallest case that exposes a wrong answer?
- For Activity 334 (Create a simple /proc entry exposing read-only state from your module.), which invariant or ownership rule must survive each state change?
- For Activity 339 (Compare the safety/isolation model of a kernel module versus an equivalent user-space daemon for the same task.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 35 builds on this by moving to patterns for extensible C++ systems.

Start with the [ten ordered activities](../work/lesson-34/ASSIGNMENT.md).
