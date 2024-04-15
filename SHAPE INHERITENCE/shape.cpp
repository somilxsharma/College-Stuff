#include <iostream>

using namespace std;

class Shape {
public:
    virtual float area() const = 0;
    virtual float perimeter() const = 0;
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}

    float area() const override {
        return 3.14 * radius * radius;
    }

    float perimeter() const override {
        return 2 * 3.14 * radius;
    }
};

class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() const override {
        return length * width;
    }

    float perimeter() const override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    float side1, side2, side3;
public:
    Triangle(float s1, float s2, float s3) : side1(s1), side2(s2), side3(s3) {}

    float area() const override {
        // Implement the area calculation using Heron's formula
        float s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    float perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 4, 5);

    cout << "Circle Area: " << c.area() << " Perimeter: " << c.perimeter() << endl;
    cout << "Rectangle Area: " << r.area() << " Perimeter: " << r.perimeter() << endl;
    cout << "Triangle Area: " << t.area() << " Perimeter: " << t.perimeter() << endl;

    return 0;
}