#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int tableNo, quantity;
    string customerName, contact, item;
    float price, total = 0, discount = 0, finalBill;

    cout << "Enter Table Number: ";
    cin >> tableNo;
    cin.ignore();

    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Contact Number: ";
    getline(cin, contact);

    char choice;

    do {
        cout << "\nEnter Item Name: ";
        getline(cin, item);

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;

        total += price * quantity;

        cout << "Add more items? (y/n): ";
        cin >> choice;
        cin.ignore();

    } while(choice == 'y' || choice == 'Y');

    // Discount logic
    if (total > 1000) {
        discount = total * 0.10; // 10% discount
    } else if (total > 500) {
        discount = total * 0.05; // 5% discount
    }

    finalBill = total - discount;

    cout << "\n===== HOTEL BILL =====\n";
    cout << "Table No: " << tableNo << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Contact: " << contact << endl;

    cout << fixed << setprecision(2);
    cout << "Total Amount: " << total << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Bill: " << finalBill << endl;

    cout << "======================\n";

    return 0;
}
