#include <cassert>
#include <cmath>
#include <iostream>
#include <memory>
#include <numbers>
#include <variant>
#include <vector>

class Shape {
public:
    virtual ~Shape() = default;
    virtual double area() const = 0;
};

class Circle final : public Shape {
public:
    explicit Circle(double radius) : radius_{radius} {
        assert(radius >= 0.0);
    }

    double area() const override {
        return std::numbers::pi * radius_ * radius_;
    }

private:
    double radius_{};
};

class Rectangle final : public Shape {
public:
    Rectangle(double width, double height) : width_{width}, height_{height} {
        assert(width >= 0.0);
        assert(height >= 0.0);
    }

    double area() const override {
        return width_ * height_;
    }

private:
    double width_{};
    double height_{};
};

struct VariantCircle {
    double radius{};
};

struct VariantRectangle {
    double width{};
    double height{};
};

using VariantShape = std::variant<VariantCircle, VariantRectangle>;

double area(const VariantShape& shape) {
    return std::visit(
        [](const auto& value) -> double {
            using T = std::decay_t<decltype(value)>;

            if constexpr (std::is_same_v<T, VariantCircle>) {
                return std::numbers::pi * value.radius * value.radius;
            } else {
                return value.width * value.height;
            }
        },
        shape);
}

int main() {
    std::vector<std::unique_ptr<Shape>> polymorphic_shapes;
    polymorphic_shapes.push_back(std::make_unique<Circle>(2.0));
    polymorphic_shapes.push_back(std::make_unique<Rectangle>(3.0, 4.0));

    double total_area{};
    for (const auto& shape : polymorphic_shapes) {
        total_area += shape->area();
    }

    std::vector<VariantShape> variant_shapes{
        VariantCircle{2.0},
        VariantRectangle{3.0, 4.0},
    };

    double variant_total{};
    for (const auto& shape : variant_shapes) {
        variant_total += area(shape);
    }

    std::cout << "virtual total: " << total_area << '\n';
    std::cout << "variant total: " << variant_total << '\n';

    // TODO: Add Triangle and CompositeShape to both designs.
    // TODO: Write a short note comparing extensibility and performance.
}

