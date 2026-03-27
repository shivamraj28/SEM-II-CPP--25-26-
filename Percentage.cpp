#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int subjects;
    float marks[100], total = 0, percentage;

public:
    void input() {
        cout << "\nEnter Student Name: ";
        cin >> name;

        cout << "Enter number of subjects: ";
        cin >> subjects;

        for (int i = 0; i < subjects; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }
    }
    void calculate() {
        percentage = total / subjects;
    }
    void display() {
        cout << "\nName: " << name;
        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage: " << percentage << "%\n";
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[100];

    for (int i = 0; i < n; i++) {
        cout << "\n--- Student " << i + 1 << " ---\n";
        s[i].input();
        s[i].calculate();
        s[i].display();
    }

    return 0;
}
