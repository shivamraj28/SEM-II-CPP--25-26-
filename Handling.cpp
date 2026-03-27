#include <iostream>
using namespace std;

int main() {
    int a, b, result;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    try {
        if (b == 0) {
            throw "Division by zero is not allowed!";
        }

        result = a / b;
        cout << "Result: " << result << endl;
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    return 0;
}
