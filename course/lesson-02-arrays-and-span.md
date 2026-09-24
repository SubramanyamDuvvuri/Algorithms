# Lesson 2 - Arrays, Strings, and Non-Owning Views

## What You Gain

You'll walk away able to write bounds-safe array and string code using views (`std::span`, `std::string_view`) instead of copying data everywhere -- the pattern that keeps high-throughput parsers and network code fast without sacrificing safety. This is exactly the skill tested when an interviewer asks you to parse a buffer in place, and it's what separates code that allocates on every call from code that doesn't allocate at all.

## Objective

Master contiguous owners and views, array decay, bounds, and invalidation well enough to implement, test, review, and explain C++ APIs.

## Theory

Raw arrays, array decay, extents, `sizeof`, `std::array`, `std::vector`, `std::span`, `std::string`, and `std::string_view`.

Start with indexing and contiguous layout. Then learn what information is lost when an array decays to a pointer. Only after that move to `std::array` as an owning fixed-size value and `std::span` as a non-owning view.

## Deep Dive

A raw array owns a fixed sequence of elements; in most expressions its name converts to a pointer to the first element and the size is lost. `std::array<T,N>` keeps size in its type and owns values. `std::span<T>` is a pointer-plus-size view; copying a span copies the view, never the elements or their lifetime. Subviews must stay within the original range.

### Why array decay matters

```cpp
int samples[4] = {2, 4, 6, 8};
// Here sizeof(samples) measures the complete array object.
void inspect(const int samples[]); // This parameter is really const int*.
```

Array-to-pointer conversion occurs in many expressions and function calls. It does not occur for the array operand of `sizeof` or unary `&`, and a reference to an array can preserve its extent. Inside `inspect`, `sizeof(samples)` measures a pointer, not four integers. A pointer alone cannot recover the original array length. A pointer-plus-count API must carry the count explicitly and validate it before access.

### Owner, view, and extent

`std::array<int,4>` owns four integers and has a `.size()` member. Copying the array copies its elements. `std::vector<int>` owns a growable contiguous sequence; growth may relocate elements and invalidate pointers, references, and spans into it. `std::span<const int>` borrows a contiguous range and prevents mutation through that view; `std::span<int>` permits mutation. Neither owns the data.

```cpp
#include <array>
#include <span>

std::array<int, 4> owned{2, 4, 6, 8};
std::span<const int> view{owned};
auto middle = view.subspan(1, 2); // Refers to owned[1] and owned[2].
```

`owned` must outlive both spans. A fixed-extent span encodes its length in the type; a dynamic-extent span stores a runtime length. Neither makes an invalid range safe. Check a requested offset and count against `.size()` before calling a subview function whose preconditions require them to fit. `std::array::at` performs a bounds check and throws on an invalid index; `operator[]` does not.

### API design progression

Implement the same operation in four forms: raw pointer plus count, fixed-size array reference, `std::array`, and `std::span`. For each, record what the caller must supply, whether copying occurs, whether the function can mutate, and which inputs are accepted. The syntax `const int (&values)[5]` is a reference to exactly five integers; generic array-reference templates come in Lesson 9.

`std::string` owns characters; `std::string_view` borrows them. A view of a temporary string can dangle immediately, and a vector or string mutation can invalidate an earlier view. Use slices only while their owning buffer remains alive and stable.

The [shared packet protocol](packet-protocol.md) supplies bytes for the final buffer exercise. In this lesson, read only the header after checking its minimum length. The length field and record validation come next in Lesson 3. The input span borrows the caller's buffer, so its owner must remain alive while it is used.

## Worked Reasoning

For `int a[5]`, `sizeof(a)` sees all five elements in its declaring scope. In `void f(int a[])`, the parameter is a pointer, so `sizeof(a)` measures that pointer. `std::span{a}.subspan(1,3)` sees elements 1 through 3, but cannot outlive `a`.

## Connection

Use the Lesson 1 pointer-range search on these buffers. Lesson 3 turns the buffer into structured records.

Contiguous buffers and borrowed views appear in parsers, numeric libraries, and performance-critical APIs. The interview skill is to choose an interface that carries enough size information while making ownership and invalidation clear.

## Interview Drill

Design a checksum API that accepts a raw array, `std::array`, and `std::vector` without copying. Explain who owns the bytes.

## Engineering Lab

Build equivalent sum APIs using pointer-plus-size, array references, `array`, and `span`; then validate a small packet header at every boundary.

## Required Evidence

Submit working C++20 code, focused tests, invariant and complexity notes, failure analysis, benchmark evidence where performance is relevant, and a short design review recording rejected alternatives.

## Mastery Gate

Explain every decay site and prove that each non-owning view remains valid.
