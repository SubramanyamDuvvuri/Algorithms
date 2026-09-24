# Lesson 3 - Structs, Members, Unions, and Layout

## What You Gain

You'll be able to predict a struct's exact memory layout -- padding, alignment, and size -- before compiling it, and know when a union is a legitimate space optimization versus a footgun. This matters the moment you touch binary protocols, serialization, or anything that has to match a wire format byte-for-byte.

## Objective

Master structs, padding, alignment, and layout well enough to implement, test, review, benchmark, and explain production code.

## Theory

Structs, aggregate/designated initialization, nested members, unions, standard layout, padding, alignment, `offsetof`, endianness, and trivial copyability.

## Deep Dive

A struct groups fields into one object with one lifetime. Field order, alignment, and padding determine native layout, but native layout is not a wire format: padding values, byte order, and compiler decisions can differ. `offsetof` is only appropriate where its standard-layout preconditions hold; byte parsing must validate length before each read.

### Records and initialization

```cpp
struct Reading {
    int count;
    char state;
};

Reading a{3, 'R'};
Reading b{.count = 4, .state = 'S'}; // C++20 designated initialization.
```

A `Reading` object contains its members; copying it copies their values. A pointer to one member does not own that member or extend the containing object's lifetime. Aggregate initialization supplies fields in declaration order. Designated initialization names fields and makes changes to a record easier to review, but the names are C++ source details, not wire-format bytes. Keep invariants such as a valid state and nonnegative count explicit when later code starts accepting untrusted input.

### Alignment, padding, and offsets

An object may need an address aligned to a particular boundary. The compiler can insert padding between fields and after the last field so that arrays of the struct keep each element properly aligned. `sizeof(T)` includes padding; `alignof(T)` reports alignment. Do not assume `int` is four bytes or that your compiler's field offsets hold on another target.

For example, with four-byte `int` alignment, `{char tag; int count; char state;}` commonly needs padding before `count` and at the end. Reordering to `{int count; char tag; char state;}` may reduce its size. **Predict and measure on your compiler**, then explain the result using offsets. `offsetof` is guaranteed for standard-layout types; check that condition before using it as a portable layout tool. Trivial copyability is a separate property and still does not make native bytes a stable protocol.

### Unions and active members

A union gives multiple members overlapping storage. Track which member is active and read only that member; switching members can end another member's lifetime. Do not use a union as a general-purpose safe tagged value without separately maintaining and validating its tag. Lesson 10 uses `std::variant` for an enforced tagged alternative.

### Native layout is not a wire format

The [shared packet protocol](packet-protocol.md) defines byte positions, little-endian length, and an XOR checksum. A host machine may use a different byte order, and struct padding bytes can hold unspecified data. Sending `sizeof(Reading)` bytes or casting received bytes to `Reading*` would also raise alignment, lifetime, and validation problems. Parse each field from checked byte offsets into a normal C++ object instead.

For a two-byte little-endian unsigned length, compute `low | (high << 8)` after confirming both bytes exist and converting them to an unsigned integer type wide enough for the shift. Check the length and total frame size before making a payload view. Activity 29 encodes the length; Activity 30 validates it. A full frame encoder is an optional extension, not a prerequisite for Lesson 4.

### Layout versus performance

A smaller struct can improve cache use when scanning many records, but field reordering is not automatically faster. Compare the same operation on identical data, with correctness checked first. Record element count, field access pattern, compiler options, timing method, and measurement noise. Later performance lessons revisit these measurements with cache and allocator models.

## Worked Reasoning

Compare `{char tag; int count; char state;}` with `{int count; char tag; char state;}` using `sizeof` and `alignof`; predict before running. Serialize the count into four explicitly ordered bytes, rather than copying the struct's object representation.

## Connection

Wrap Lesson 2's packet bytes in named records. Lesson 4 gives fields explicit valid states.

Layout reasoning matters when records are numerous, cross a binary boundary, or move between machines. In an interview, distinguish native representation from a portable format and defend a measurement before claiming a layout optimization.

## Interview Drill

Why can a struct have a size larger than the sum of its fields, and why must you not send its raw bytes over a network?

## Engineering Lab

Build a layout inspector; reorder hot records and benchmark traversal. Design a versioned wire format without dumping native object bytes.

## Required Evidence

Submit working C++20 code, focused tests, invariant and complexity notes, failure analysis, benchmark evidence where performance is relevant, and a short design review recording rejected alternatives.

## Mastery Gate

Defend every layout and serialization assumption across compilers and machines.
