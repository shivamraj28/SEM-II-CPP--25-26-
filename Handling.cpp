#include <iostream>
using namespace std;

int main() {
    int a, c, result;

    cout << "Enter two numbers: ";
    cin >> a >> c;
    try {
        if (c == 0) {
            throw "Division by zero is not allowed!";
        }

        result = a / c;
        cout << "Result: " << result << endl;
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    return 0;
}
