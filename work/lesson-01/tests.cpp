// Lesson 1 tests: exercise the functions declared in lesson01.hpp.
// Build and run this separately from main.cpp (it has its own `main`):
//   g++ -std=c++20 -Wall -Wextra -Wpedantic tests.cpp -o tests && ./tests
//
// Add one test_* function per activity as you implement it, then call it
// below. assert() aborts with a message if a check fails, which is enough
// for these small, single-file exercises.

#include "lesson01.hpp"
#include <cassert>
#include <iostream>

// Example pattern for Activity 7, once `find` is actually implemented:
//
// void test_find_returns_last_when_absent()
// {
//     int values[] = {1, 2, 3};
//     int* result = find(values, values + 3, 99);
//     assert(result == values + 3);
// }
//
// void test_find_returns_pointer_to_match()
// {
//     int values[] = {1, 2, 3};
//     int* result = find(values, values + 3, 2);
//     assert(result == values + 1);
// }

// TODO: Activity 2 - test that mutating through the pointer changes the original int.
// TODO: Activity 4 - test increment(int*) and increment(int&) each change their target by 1.
// TODO: Activity 7 - test find() on: value present, value absent, empty range.
// TODO: Activity 8 - test binary_search() against the same cases as find(), on sorted input.
// TODO: Activity 9 - test require_non_null()'s behavior for a null pointer.
// TODO: Activity 10 - test reverse_range() on lengths 0, 1, 4 (even), 5 (odd).

int main()
{
    // Call each test_* function here as you write it, e.g.:
    // test_find_returns_last_when_absent();
    // test_find_returns_pointer_to_match();

    std::cout << "All lesson 1 tests passed." << std::endl;
    return 0;
}
