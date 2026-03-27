#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "This is Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "This is Derived class display function" << endl;
    }
};

int main() {
    Base* ptr; 
    Derived obj;

    ptr = &obj;    // pointing to derived object
    ptr->display();  // runtime polymorphism

    return 0;
}
