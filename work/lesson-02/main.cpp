// Lesson 2: Arrays, Strings, and Non-Owning Views
// Learn: Raw arrays and `std::array` own fixed-size elements; `std::vector` and `std::string` own growable contiguous storage.
// Why it helps: Bounded ranges and borrowed views let you design APIs without losing size or lifetime information.
//
// Activity 11: Print indices, values, and addresses of a four-element raw array.
// Activity 12: Calculate its count with `sizeof(a)/sizeof(a[0])` in its declaring scope.
// Activity 13: Pass it to a pointer parameter and explain the lost count.
// Activity 14: Write pointer-plus-size and fixed-array-reference `sum` overloads.
// Activity 15: Repeat with `std::array`; compare `.size()`, copying, `[]`, and `.at()`.
// Activity 16: Create a `std::vector`; record when growth invalidates a saved pointer.
// Activity 17: Write `sum(std::span<const int>)` and call it with three owning containers.
// Activity 18: Create checked `first`, `last`, and `subspan` views; test invalid requests before construction.
// Activity 19: Compare `std::string` and `std::string_view` ownership with a token slice.
// Activity 20: Read packet magic and version only after checking the minimum header size; test every shorter input.

#include <iostream>
#include <array>
#include <vector>
#include <span>
#include <string>
#include <string_view>
#include <cstdint>

// Activity 11: Print indices, values, and addresses of a four-element raw array.
void inspect_array(const int* values, std::size_t count)
{
}

// Activity 12: Calculate its count with `sizeof(a)/sizeof(a[0])` in its declaring scope.
void array_size_via_sizeof()
{
}

// Activity 13: Pass it to a pointer parameter and explain the lost count.
void receives_decayed_array(const int* values)
{
}

// Activity 14: Write pointer-plus-size and fixed-array-reference `sum` overloads.
int sum(const int* values, std::size_t count)
{
    return 0;
}
int sum(const int (&values)[4])
{
    return 0;
}

// Activity 15: Repeat with `std::array`; compare `.size()`, copying, `[]`, and `.at()`.
void array_container_experiments(std::array<int, 4> values)
{
}

// Activity 16: Create a `std::vector`; record when growth invalidates a saved pointer.
void vector_growth_invalidation()
{
}

// Activity 17: Write `sum(std::span<const int>)` and call it with three owning containers.
int sum(std::span<const int> values)
{
    return 0;
}

// Activity 18: Create checked `first`, `last`, and `subspan` views; test invalid requests before construction.
void span_bounds_checks(std::span<const int> values)
{
}

// Activity 19: Compare `std::string` and `std::string_view` ownership with a token slice.
void string_vs_string_view(const std::string& text)
{
}

// Activity 20: Read packet magic and version only after checking the minimum header size; test every shorter input.
void read_packet_header(std::span<const std::uint8_t> data)
{
}

int main()
{
    int raw[4] = {10, 20, 30, 40};

    // Activity 11-14
    inspect_array(raw, 4);
    array_size_via_sizeof();
    receives_decayed_array(raw);
    sum(raw, 4);
    sum(raw);

    // Activity 15
    std::array<int, 4> fixed{1, 2, 3, 4};
    array_container_experiments(fixed);

    // Activity 16
    vector_growth_invalidation();

    // Activity 17-18
    std::vector<int> growable{1, 2, 3};
    sum(std::span<const int>(raw));
    sum(std::span<const int>(fixed));
    sum(std::span<const int>(growable));
    span_bounds_checks(std::span<const int>(raw));

    // Activity 19
    std::string text = "token-example-string";
    string_vs_string_view(text);

    // Activity 20
    std::uint8_t packet[] = {0xAB, 0xCD, 0x01, 0x00};
    read_packet_header(std::span<const std::uint8_t>(packet));

    return 0;
}
