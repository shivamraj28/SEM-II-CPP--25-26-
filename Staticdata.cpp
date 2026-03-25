#include <iostream>
using namespace std;

class Demo {
private:
    static int count;   // static data member

public:
    Demo() {
        count++;   // increment when object is created
    }

    // static member function
    static void showCount() {
        cout << "Total Objects Created: " << count << endl;
    }
};

// Definition of static member outside class
int Demo::count = 0;

int main() {
    Demo d1, d2, d3;

    // Access static function using class name
    Demo::showCount();

    return 0;
}