# Lesson 2 - Arrays, Decay, `std::array`, and `std::span`

## Objective

Master arrays, decay, `std::array`, and `std::span` well enough to implement, test, review, benchmark, and explain production code.

## Theory

Raw arrays, array decay, extents, `sizeof`, `std::array`, static/dynamic `std::span`, subviews, and why raw-array parameters lie about size.

Start with indexing and contiguous layout. Then learn what information is lost when an array decays to a pointer. Only after that move to `std::array` as an owning fixed-size value and `std::span` as a non-owning view.

## Engineering Lab

Build checksum, matrix-row, and packet-decoder APIs using pointer-plus-size, array references, `array`, and `span`; fuzz every boundary.

## Required Evidence

Submit working C++20 code, focused tests, invariant and complexity notes, failure analysis, benchmark evidence where performance is relevant, and a short design review recording rejected alternatives.

## Mastery Gate

Explain every decay site and prove that each non-owning view remains valid.
