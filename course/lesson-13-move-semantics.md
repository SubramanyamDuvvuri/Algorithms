# Lesson 13 - Move Semantics, Forwarding, and Copy Elision

## Objective

Master move semantics, forwarding, and copy elision well enough to implement, test, review, benchmark, and explain production code.

## Theory

Value categories, `move`, `forward`, reference collapsing, perfect forwarding, moved-from states, copy elision, and `noexcept` moves.

## Engineering Lab

Instrument a resource type; analyze vector relocation and returns; implement a move-only callable with small-buffer storage.

## Required Evidence

Submit working C++20 code, focused tests, invariant and complexity notes, failure analysis, benchmark evidence where performance is relevant, and a short design review recording rejected alternatives.

## Mastery Gate

Account for every construction and explain when `std::move` makes code worse.

