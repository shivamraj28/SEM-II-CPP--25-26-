#include <iostream>
using namespace std;

// Base class
class Employee {
protected:
    int empId;
    string name;

public:
    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Name: ";
        cin >> name;
    }
};

// Multilevel Inheritance (Employee -> Department)
class Department : public Employee {
protected:
    string deptName;

public:
    void getDepartment() {
        cout << "Enter Department: ";
        cin >> deptName;
    }
};
class PF : public Department {
private:
    float basicSalary, pfAmount;

public:
    void getPF() {
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        pfAmount = basicSalary * 0.12; // 12% PF
    }

    void display() {
        cout << "\n--- Employee Details ---\n";
        cout << "ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << deptName << endl;
        cout << "PF Amount: " << pfAmount << endl;
    }
};

// Hierarchical Inheritance (Another class from Employee)
class Bonus : public Employee {
private:
    float salary, bonus;

public:
    void getBonus() {
        cout << "\nEnter Salary for Bonus Calculation: ";
        cin >> salary;

        bonus = salary * 0.10; // 10% bonus
    }

    void displayBonus() {
        cout << "\n--- Bonus Details ---\n";
        cout << "ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Bonus: " << bonus << endl;
    }
};

int main() {
    PF emp1;
    emp1.getEmployee();
    emp1.getDepartment();
    emp1.getPF();
    emp1.display();

    Bonus emp2;
    emp2.getEmployee();
    emp2.getBonus();
    emp2.displayBonus();

    return 0;
}
