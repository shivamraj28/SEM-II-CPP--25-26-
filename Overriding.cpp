#include <iostream>
using namespace std;

// ---------- Operator Overloading ----------
class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// ---------- Function Overriding ----------
class Base {
public:
    virtual void show() {
        cout << "This is Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "This is Derived class" << endl;
    }
};

int main() {
    // Operator Overloading
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;

    cout << "Sum of Complex Numbers: ";
    c3.display();

    // Function Overriding
    Base* b;
    Derived d;

    b = &d;
    b->show();   // calls Derived version

    return 0;
}
