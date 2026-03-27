#include <iostream>
using namespace std;
template <class T>
void swapValues(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    float p = 1.5, q = 2.5;

    cout << "Before Swapping (int): " << x << " " << y << endl;
    swapValues(x, y);
    cout << "After Swapping (int): " << x << " " << y << endl;

    cout << "\nBefore Swapping (float): " << p << " " << q << endl;
    swapValues(p, q);
    cout << "After Swapping (float): " << p << " " << q << endl;

    return 0;
}
