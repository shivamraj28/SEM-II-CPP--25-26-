#include <iostream>
using namespace std;

class Number {
private:
    int a, b;

public:
    void input(int x, int y) {
        a = x;
        b = y;
    }

    // Declare friend function
    friend int add(Number n);
};

// Define friend function outside class
int add(Number n) {
    // Accessing private data directly
    return n.a + n.b;
}

int main() {
    Number obj;
    obj.input(10, 20);

    cout << "Sum = " << add(obj);

    return 0;
}