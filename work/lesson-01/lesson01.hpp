#pragma once

// Lesson 1: Pointers, Addresses, and Lifetime
// Function declarations + stub definitions, shared by main.cpp (demonstration)
// and tests.cpp (assertions), so both can exercise the same code without
// duplicate `main()` symbols.

#include <iostream>

// Activity 1: Print an `int` value, its address, and the value read through `int*`.
void print_value(int a)
{
    std::cout<<a<<std::endl;
    std::cout<<&a<<std::endl;
     int *ptr=&a;
    std::cout<<*ptr<<std::endl;
}

// Activity 2: Change that `int` through the pointer and confirm the original value changes.
void mutate_through_pointer(int* p)
{
}

// Activity 3: Create `nullptr`; branch before dereferencing and test the null path.
void check_null_before_dereference(int* p)
{
}

// Activity 4: Write `increment(int*)` with a documented null policy and compare `increment(int&)`.
void increment(int* p)
{
}
void increment(int& r)
{
}

// Activity 5: Experiment with `const int*`, `int* const`, and `const int* const`; predict which assignments compile.
void const_pointer_experiments(const int* p1, int* const p2, const int* const p3)
{
}

// Activity 6: Walk a five-element array with `[first,last)` without reading `last`.
void walk_range(const int* first, const int* last)
{
}

// Activity 7: Implement linear `find(first,last,value)`; return `last` when absent.
int* find(int* first, int* last, int value)
{
    return last;
}

// Activity 8: Implement binary search on a sorted range; state and preserve its invariant.
int* binary_search(int* first, int* last, int value)
{
    return last;
}

// Activity 9: Write `require_non_null(int*)` and test its explicit failure behavior.
void require_non_null(int* p)
{
}

// Activity 10: Reverse a half-open pointer range; test empty, single, odd, and even lengths.
void reverse_range(int* first, int* last)
{
}
