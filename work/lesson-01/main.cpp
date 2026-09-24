// Activity 1: Print an `int` value, its address, and the value read through `int*`.
// Activity 2: Change that `int` through the pointer and confirm the original value changes.
// Activity 3: Create `nullptr`; branch before dereferencing and test the null path.
// Activity 4: Write `increment(int*)` with a documented null policy and compare `increment(int&)`.
// Activity 5: Experiment with `const int*`, `int* const`, and `const int* const`; predict which assignments compile.
// Activity 6: Walk a five-element array with `[first,last)` without reading `last`.
// Activity 7: Implement linear `find(first,last,value)`; return `last` when absent.
// Activity 8: Implement binary search on a sorted range; state and preserve its invariant.
// Activity 9: Write `require_non_null(int*)` and test its explicit failure behavior.
// Activity 10: Reverse a half-open pointer range; test empty, single, odd, and even lengths.

// Learn: Addresses, indirection, pointer ranges, const, and object lifetime.
// Why it helps: Pointer lifetime reasoning is the basis for safe views, containers, and resource ownership.

// Implementations live in lesson01.hpp so both this file and tests.cpp can use
// them without two `main()` functions colliding. Implement each activity there.
#include "lesson01.hpp"

int main()
{
    // Activity 1: Print an `int` value, its address, and the value read through `int*`.
    int a = 20;
    print_value(a);

    // Activity 2
    int b = a;
    mutate_through_pointer(&b);

    // Activity 3
    check_null_before_dereference(&b);
    check_null_before_dereference(nullptr);

    // Activity 4
    increment(&b);
    increment(a);

    // Activity 5
    int x = 1;
    const int cx = 2;
    int* const fixed = &x;
    const_pointer_experiments(&cx, fixed, &cx);

    // Activities 6-10
    int values[5] = {1, 2, 3, 4, 5};
    walk_range(values, values + 5);
    find(values, values + 5, 3);
    binary_search(values, values + 5, 3);
    require_non_null(&b);
    reverse_range(values, values + 5);

    return 0;
}
