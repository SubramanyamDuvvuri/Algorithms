// Lesson 5: Functions, Overloads, Function Pointers, and Callbacks
// Learn: A function declaration states a callable contract; a definition provides behavior.
// Why it helps: Callback signatures and captured-state lifetimes appear throughout extensible C++ systems.
//
// Activity 41: Separate one function declaration from its definition and compile both.
// Activity 42: Write pass-by-value, pointer, and reference versions of an update function.
// Activity 43: State and test each function's null and mutation behavior.
// Activity 44: Add two overloads and predict which one is called for each argument type.
// Activity 45: Use one default argument and explain where its value is supplied.
// Activity 46: Declare a function pointer, assign it a named function, and call through it.
// Activity 47: Use `using Operation = int(*)(int,int)`; compare with raw syntax.
// Activity 48: Write `apply(a,b,Operation)` and test two callbacks.
// Activity 49: Pass a noncapturing lambda as a function pointer; explain why a capturing lambda fails.
// Activity 50: Use a stateful callable with a template parameter or `std::function`, document ownership and allocation tradeoffs.

#include <iostream>
#include <string>
#include <functional>

// Supporting alias (declaration only).
using Operation = int (*)(int, int);

// Activity 41: declared here, defined after main() to keep declaration and definition visibly separate.
void declared_then_defined(int value);

// Activity 42: Write pass-by-value, pointer, and reference versions of an update function.
void update_by_value(int value)
{
}
void update_by_pointer(int* value)
{
}
void update_by_reference(int& value)
{
}

// Activity 43: State and test each function's null and mutation behavior.
void test_update_null_and_mutation()
{
}

// Activity 44: Add two overloads and predict which one is called for each argument type.
void describe_overload(int value)
{
}
void describe_overload(double value)
{
}

// Activity 45: Use one default argument and explain where its value is supplied.
void greet(const std::string& name, int times = 1)
{
}

// Activity 46: Declare a function pointer, assign it a named function, and call through it.
int add(int a, int b)
{
    return 0;
}
void function_pointer_demo()
{
}

// Activity 47: Use `using Operation = int(*)(int,int)`; compare with raw syntax.
void operation_alias_demo()
{
}

// Activity 48: Write `apply(a,b,Operation)` and test two callbacks.
int apply(int a, int b, Operation op)
{
    return 0;
}
int subtract(int a, int b)
{
    return 0;
}

// Activity 49: Pass a noncapturing lambda as a function pointer; explain why a capturing lambda fails.
void lambda_as_function_pointer_demo()
{
}

// Activity 50: Use a stateful callable with a template parameter or `std::function`, document ownership and allocation tradeoffs.
void stateful_callable_demo(const std::function<int(int)>& callable)
{
}

int main()
{
    // Activity 41
    declared_then_defined(1);

    // Activity 42-43
    int value = 5;
    update_by_value(value);
    update_by_pointer(&value);
    update_by_reference(value);
    test_update_null_and_mutation();

    // Activity 44
    describe_overload(1);
    describe_overload(1.0);

    // Activity 45
    greet("Ada");
    greet("Ada", 3);

    // Activity 46
    function_pointer_demo();

    // Activity 47-48
    operation_alias_demo();
    apply(2, 3, add);
    apply(2, 3, subtract);

    // Activity 49
    lambda_as_function_pointer_demo();

    // Activity 50
    int captured = 10;
    stateful_callable_demo([captured](int x) { return x + captured; });

    return 0;
}

// Activity 41: Separate one function declaration from its definition and compile both.
void declared_then_defined(int value)
{
}
