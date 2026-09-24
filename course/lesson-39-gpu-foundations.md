# Lesson 39: GPU Execution and Kernel Mapping

## What You Gain

You'll map a CPU algorithm onto the GPU's execution model and understand why "just parallelize it" isn't how GPUs actually work. Even without CUDA hardware, the mental model here -- massive fine-grained parallelism with a completely different cost structure -- sharpens how you think about CPU concurrency too.

## Why This Comes Now

Lesson 38 established entity-component systems and data-oriented design. This chapter uses that foundation to study gpu execution and kernel mapping.

## Core Model

GPU work is organized as grids, blocks, and threads; memory transfer and launch overhead set a minimum useful workload. CPU reference remains the correctness oracle.

Each GPU thread must check its global index against N. PCIe transfer plus launch cost can dominate small workloads, so a correct CPU fallback is essential.

## Mechanism and Failure Cases

For N elements and B threads per block, launch enough blocks for ceil(N/B) groups and guard `global_index < N`. Check allocation, copy, launch, and synchronization errors separately. A CPU implementation is the reference for corner cases, including N=0 where launch decisions may differ. Compare end-to-end cost because host-device copies can outweigh a fast kernel.

## Worked Reasoning

Implement and validate vector addition with a CPU fallback and optional CUDA kernel. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 383 (Describe grid, block, thread, and global-index mapping.), what is the smallest case that exposes a wrong answer?
- For Activity 386 (Copy inputs to device and result back to host.), which invariant or ownership rule must survive each state change?
- For Activity 389 (Measure transfer, launch, and kernel times separately.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 40 builds on this by moving to gpu memory, reductions, and scans.

Start with the [ten ordered activities](../work/lesson-39/ASSIGNMENT.md).
