#include <iostream>
using namespace std;

class Patient {
private:
    string name;
    int age;
    float billAmount;
    string appointmentDate;
public:
    // Default Constructor
    Patient() {
        name = "Unknown";
        age = 0;
        billAmount = 0;
        appointmentDate = "Not Set";
    }
    // Parameterized Constructor
    Patient(string n, int a, float bill, string date) {
        name = n;
        age = a;
        billAmount = bill;
        appointmentDate = date;
    }
    Patient(const Patient &p) {
        name = p.name;
        age = p.age;
        billAmount = p.billAmount;
        appointmentDate = p.appointmentDate;
    }

    // Function to display billing and appointment
    void display() {
        cout << "\nPatient Name: " << name;
        cout << "\nAge: " << age;
        cout << "\nBilling Amount: " << billAmount;
        cout << "\nAppointment Date: " << appointmentDate << endl;
    }
};

int main() {
    // Using Default Constructor
    Patient p1;
    p1.display();

    // Using Parameterized Constructor
    Patient p2("Shivam", 20, 1500.50, "25-03-2026");
    p2.display();

    // Using Copy Constructor
    Patient p3 = p2;
    p3.display();

    return 0;
}
