#include <iostream>
using namespace std;

int main() {
    double balance = 10000;
    int choice;
    double amount;

    cout << "1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Balance: Rs. " << balance;
            break;
        case 2:
            cout << "Enter deposit amount: ";
            cin >> amount;
            if (amount <= 0) {
                cout << "Invalid amount";
            } else {
                balance = balance + amount;
                cout << "New balance: Rs. " << balance;
            }
            break;
        case 3:
            cout << "Enter withdraw amount: ";
            cin >> amount;
            if (amount <= 0 || (int)amount % 500 != 0) {
                cout << "Invalid amount";
            } else if (amount > balance) {
                cout << "Insufficient balance";
            } else {
                balance = balance - amount;
                cout << "New balance: Rs. " << balance;
                if (balance < 1000) {
                    cout << "\nLow balance warning";
                }
            }
            break;
        case 4:
            cout << "Thank you";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}