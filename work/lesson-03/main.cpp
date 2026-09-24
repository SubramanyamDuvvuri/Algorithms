// Lesson 3: Structs, Members, Unions, and Layout
// Learn: A struct groups members into one object; member access, aggregate initialization, nested records, and passing by value or reference each have distinct costs.
// Why it helps: Layout and active-member reasoning prepare you for serialization, ABI boundaries, and cache-aware records.
//
// Activity 21: Declare a two-field struct and initialize it with aggregate and designated syntax.
// Activity 22: Read and change members through an object and a pointer to that object.
// Activity 23: Pass a record by value and by `const&`; observe which operations copy.
// Activity 24: Nest one record inside another and initialize every member.
// Activity 25: Compare `sizeof`, `alignof`, and member offsets for three field orders.
// Activity 26: Check `std::is_standard_layout_v` before using `offsetof` as a portable tool.
// Activity 27: Store one of two trivial representations in a union and track the active member explicitly.
// Activity 28: Explain why a raw `memcpy` of a struct is not a portable packet format.
// Activity 29: Encode the shared packet length as two explicit little-endian bytes.
// Activity 30: Decode the two-byte length and validate total frame size before making a payload view.

#include <iostream>
#include <cstddef>
#include <cstdint>
#include <type_traits>

// Supporting types (declarations only; no behavior implemented yet).
struct Point2D
{
    int x;
    int y;
};

struct Line2D
{
    Point2D start;
    Point2D end;
};

struct LayoutOrderA { char c; int i; short s; };
struct LayoutOrderB { int i; char c; short s; };
struct LayoutOrderC { short s; int i; char c; };

enum class TrivialTag { Int, Float };

union TrivialValue
{
    int as_int;
    float as_float;
};

// Activity 21: Declare a two-field struct and initialize it with aggregate and designated syntax.
void aggregate_init_demo()
{
}

// Activity 22: Read and change members through an object and a pointer to that object.
void touch_members_via_object_and_pointer(Point2D* p)
{
}

// Activity 23: Pass a record by value and by `const&`; observe which operations copy.
void receive_by_value(Point2D p)
{
}
void receive_by_reference(const Point2D& p)
{
}

// Activity 24: Nest one record inside another and initialize every member.
void nested_record_demo()
{
}

// Activity 25: Compare `sizeof`, `alignof`, and member offsets for three field orders.
void compare_layouts()
{
}

// Activity 26: Check `std::is_standard_layout_v` before using `offsetof` as a portable tool.
void check_standard_layout_and_offsets()
{
}

// Activity 27: Store one of two trivial representations in a union and track the active member explicitly.
void tagged_union_demo(TrivialValue value, TrivialTag active)
{
}

// Activity 28: Explain why a raw `memcpy` of a struct is not a portable packet format.
void explain_memcpy_portability_issue()
{
}

// Activity 29: Encode the shared packet length as two explicit little-endian bytes.
void encode_length_le(std::uint16_t length, std::uint8_t (&out)[2])
{
}

// Activity 30: Decode the two-byte length and validate total frame size before making a payload view.
std::uint16_t decode_length_le(const std::uint8_t (&bytes)[2])
{
    return 0;
}

int main()
{
    // Activity 21
    aggregate_init_demo();

    // Activity 22-23
    Point2D point{1, 2};
    touch_members_via_object_and_pointer(&point);
    receive_by_value(point);
    receive_by_reference(point);

    // Activity 24-26
    nested_record_demo();
    compare_layouts();
    check_standard_layout_and_offsets();

    // Activity 27
    TrivialValue value{};
    value.as_int = 42;
    tagged_union_demo(value, TrivialTag::Int);

    // Activity 28
    explain_memcpy_portability_issue();

    // Activity 29-30
    std::uint8_t encoded[2] = {0, 0};
    encode_length_le(1024, encoded);
    decode_length_le(encoded);

    return 0;
}
