#include <iostream>
#include <cmath>  
class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
 virtual ~Shape() {}
};
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
double area() const override {
        return length * width;
    }
double perimeter() const override {
        return 2 * (length + width);
    }
};
class Triangle : public Shape {
private:
    double sideA;
    double sideB;
    double sideC;

public:
    Triangle(double a, double b, double c) : sideA(a), sideB(b), sideC(c) {}
    double area() const override {
        double s = (sideA + sideB + sideC) / 2; // Semi-perimeter
        return std::sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
    }
 double perimeter() const override {
        return sideA + sideB + sideC;
    }
};

int main() {
    Shape* rect = new Rectangle(5.0, 3.0);
    Shape* tri = new Triangle(3.0, 4.0, 5.0);
    std::cout << "Rectangle Area: " << rect->area() << std::endl;
    std::cout << "Rectangle Perimeter: " << rect->perimeter() << std::endl;
std::cout << "Triangle Area: " << tri->area() << std::endl;
    std::cout << "Triangle Perimeter: " << tri->perimeter() << std::endl;
 delete rect;
    delete tri;
return 0;
}
