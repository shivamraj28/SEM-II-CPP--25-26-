#include <iostream>
using namespace std;

class Add {
private:
    int a, b;

public:
    void input(int x, int y) {
        a = x;
        b = y;
    }

    inline int sum() {   // inline member function
        return a + b;
    }
};

int main() {
    Add obj;
    obj.input(10, 20);

    cout << "Sum = " << obj.sum();

    return 0;
}