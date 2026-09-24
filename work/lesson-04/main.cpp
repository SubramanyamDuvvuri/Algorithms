// Lesson 4: Enums, Type Aliases, and Named States
// Learn: `typedef` and `using` give existing types new names; aliases improve readability but do not create distinct runtime types.
// Why it helps: Named states and aliases make protocol and API contracts easier to review.
//
// Activity 31: Write a `typedef` and an equivalent `using` alias for an unsigned byte.
// Activity 32: Show with a compile-time check that aliases do not create new types.
// Activity 33: Define an unscoped enum and a scoped enum; compare allowed conversions.
// Activity 34: Choose and inspect an explicit enum underlying type.
// Activity 35: Decode raw message-type values 1, 2, and 7 with a known/unknown result.
// Activity 36: Write a switch for all known states with an explicit unknown policy.
// Activity 37: Define independent permission bits and combine them without mixing in message states.
// Activity 38: Implement concrete `PermissionFlags` set, reset, and contains.
// Activity 39: Preserve an unknown permission bit through decode and encode.
// Activity 40: Test zero, combinations, highest bit, and invalid-state handling.

#include <iostream>
#include <cstdint>
#include <type_traits>

// Supporting types (declarations only; no behavior implemented yet).
enum LegacyColor { Red, Green, Blue };
enum class Color { Red, Green, Blue };

enum class MessageType : std::uint8_t
{
    Ping = 1,
    Pong = 2,
    Data = 7,
};

enum class Permission : std::uint8_t
{
    Read = 1 << 0,
    Write = 1 << 1,
    Execute = 1 << 2,
};

struct PermissionFlags
{
    std::uint8_t bits = 0;
};

// Activity 31: Write a `typedef` and an equivalent `using` alias for an unsigned byte.
void byte_alias_demo()
{
}

// Activity 32: Show with a compile-time check that aliases do not create new types.
void static_assert_alias_identity()
{
}

// Activity 33: Define an unscoped enum and a scoped enum; compare allowed conversions.
void enum_conversion_demo()
{
}

// Activity 34: Choose and inspect an explicit enum underlying type.
void inspect_enum_underlying_type()
{
}

// Activity 35: Decode raw message-type values 1, 2, and 7 with a known/unknown result.
bool decode_message_type(std::uint8_t raw, MessageType& out)
{
    return false;
}

// Activity 36: Write a switch for all known states with an explicit unknown policy.
const char* message_type_name(MessageType type)
{
    return "";
}

// Activity 37: Define independent permission bits and combine them without mixing in message states.
void permission_bits_demo()
{
}

// Activity 38: Implement concrete `PermissionFlags` set, reset, and contains.
void set(PermissionFlags& flags, Permission permission)
{
}
void reset(PermissionFlags& flags, Permission permission)
{
}
bool contains(const PermissionFlags& flags, Permission permission)
{
    return false;
}

// Activity 39: Preserve an unknown permission bit through decode and encode.
PermissionFlags decode_permissions(std::uint8_t raw)
{
    return PermissionFlags{};
}
std::uint8_t encode_permissions(const PermissionFlags& flags)
{
    return 0;
}

// Activity 40: Test zero, combinations, highest bit, and invalid-state handling.
void test_permission_edge_cases()
{
}

int main()
{
    // Activity 31-34
    byte_alias_demo();
    static_assert_alias_identity();
    enum_conversion_demo();
    inspect_enum_underlying_type();

    // Activity 35-36
    MessageType type{};
    decode_message_type(2, type);
    message_type_name(MessageType::Ping);

    // Activity 37
    permission_bits_demo();

    // Activity 38
    PermissionFlags flags{};
    set(flags, Permission::Read);
    reset(flags, Permission::Write);
    contains(flags, Permission::Execute);

    // Activity 39
    decode_permissions(0b101);
    encode_permissions(flags);

    // Activity 40
    test_permission_edge_cases();

    return 0;
}
