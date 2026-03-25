#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    int rollNo;
    string name;

public:
    void getData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;
    }
};

// Derived class
class Result : public Student {
private:
    float marks;

public:
    void getMarks() {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Result s;

    s.getData();   // from base class
    s.getMarks();  // from derived class
    s.display();   // from derived class

    return 0;
}