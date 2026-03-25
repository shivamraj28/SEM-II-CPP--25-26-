#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area() {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape* s;  // base class pointer

    Rectangle r(5, 4);
    Circle c(3);

    s = &r;
    s->area();   // calls Rectangle area

    s = &c;
    s->area();   // calls Circle area

    return 0;
}