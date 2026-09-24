# Lesson 37: Dynamic Libraries, C ABI, and Plugins

## What You Gain

You'll build a plugin system across a `.so`/`.dll` boundary using a stable C ABI, and understand exactly why C++ ABI stability is so hard. This is the mechanism behind every plugin architecture, driver interface, and versioned shared library you'll encounter -- genuinely systems-level knowledge with direct embedded-adjacent relevance.

## Why This Comes Now

Lesson 36 established ports, adapters, and testable boundaries. This chapter uses that foundation to study dynamic libraries, c abi, and plugins.

## Core Model

C++ ABI varies by compiler and build settings. A narrow C-compatible boundary needs versioned structures, ownership rules, and error conventions.

Name mangling, exception propagation, STL layouts, and allocator behavior are not portable C++ plugin contracts. Version negotiation and opaque handles keep both sides honest.

## Mechanism and Failure Cases

A C-compatible function table can include a size and version field so a host can negotiate capability without assuming a C++ class layout. The same side that allocates an opaque object should normally destroy it through an exported function. Do not throw exceptions or pass STL objects across a boundary with unspecified runtime compatibility. Unloading a module while its function pointers or handles remain live is unsafe.

## Worked Reasoning

Expose one earlier transform as a versioned dynamically loaded plugin. Before coding, name the input contract, state an invariant, identify ownership and failure behavior, and predict the time and extra-space costs. Use the standard library or a simple reference implementation as an oracle where possible.

## Deep-Dive Questions

- For Activity 363 (Use opaque handles for internal C++ objects.), what is the smallest case that exposes a wrong answer?
- For Activity 366 (Reject missing symbol and incompatible version safely.), which invariant or ownership rule must survive each state change?
- For Activity 369 (Build a second plugin implementation against the same header.), which preconditions make the correctness and cost claims valid?

## Evidence to Produce

- A small reference case and boundary/invalid-input tests for the relevant activities.
- An invariant or ownership diagram, plus time and extra-space analysis.
- A comparison that explains when the chosen method wins and when it does not.

## Next Step

Lesson 38 builds on this by moving to entity-component systems and data-oriented design.

Start with the [ten ordered activities](../work/lesson-37/ASSIGNMENT.md).
