# 02 - OOP And The C++ Object Model

Goal: understand object-oriented programming without turning every problem into inheritance.

## OOP Is About Boundaries

Good OOP gives you:

- Encapsulation: hide representation and protect invariants.
- Abstraction: expose what users need, not how it works.
- Polymorphism: use different implementations through a common interface.
- Substitutability: derived types must honor base expectations.

Bad OOP gives you:

- Deep inheritance trees.
- Base classes with too many responsibilities.
- Virtual functions used where a simple function object or template would do.
- Objects that are mutable bags of public state.

## Classes

A class should own an invariant.

```cpp
class BankAccount {
public:
    explicit BankAccount(long long cents) : balance_cents_{cents} {
        if (cents < 0) {
            throw std::invalid_argument("negative opening balance");
        }
    }

    void deposit(long long cents);
    bool withdraw(long long cents);
    long long balance_cents() const { return balance_cents_; }

private:
    long long balance_cents_;
};
```

The private field is not the point. The invariant is the point.

## Constructors And Destructors

Constructor job:

- Establish a valid object.
- Acquire resources if necessary.
- Fail early if the object cannot be valid.

Destructor job:

- Release resources.
- Never throw.

## Inheritance

Use public inheritance for "is substitutable as", not just "has similar fields."

If a class has virtual functions, its destructor should almost always be virtual:

```cpp
struct Shape {
    virtual ~Shape() = default;
    virtual double area() const = 0;
};
```

Prefer composition when behavior is assembled from parts:

```cpp
class ReportService {
public:
    ReportService(Repository& repo, Formatter& formatter);

private:
    Repository& repo_;
    Formatter& formatter_;
};
```

## Virtual Dispatch Cost

Virtual calls usually involve an indirect function call through a vtable. The cost is often acceptable, but it can matter in tight loops, cache-sensitive code, and high-frequency trading or game loops.

Design first for clarity. Measure before optimizing away polymorphism.

## The Rule Of Zero

If your class only uses members that manage themselves, write no destructor, copy constructor, copy assignment, move constructor, or move assignment.

```cpp
class UserProfile {
    std::string name_;
    std::vector<std::string> roles_;
};
```

Rule of zero is a design victory.

## SOLID, C++ Style

- Single responsibility: one reason to change.
- Open/closed: add behavior without rewriting stable code, but do not worship abstraction.
- Liskov substitution: derived classes must not weaken contracts.
- Interface segregation: smaller interfaces are easier to implement and test.
- Dependency inversion: high-level policy should not depend directly on low-level details.

In C++, templates and free functions are often cleaner than classical inheritance.

## Drills

1. Build a drawing engine with `Shape`, `Circle`, `Rectangle`, and `Polygon`. Then rewrite it without inheritance using `std::variant`.
2. Design a payment system with `PaymentMethod`. Include card, wallet, bank transfer, refund, and failure states.
3. Refactor a public-field data class into an invariant-protecting class.
4. Create an inheritance hierarchy that violates Liskov substitution, then fix it.
5. Explain when you would choose virtual dispatch, templates, `std::function`, or `std::variant`.

