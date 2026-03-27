#include <iostream>
using namespace std;

// Compile-time Polymorphism (Function Overloading)
class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
};
// Runtime Polymorphism (Function Overriding)
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Math m;
    cout << "Sum (int): " << m.add(5, 3) << endl;
    cout << "Sum (float): " << m.add((float)2.5, (float)3.5) << endl;

    // Runtime polymorphism
    Animal* a;
    Dog d;

    a = &d;
    a->sound();   // calls Dog's function

    return 0;
}
