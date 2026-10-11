#include <iostream>
using namespace std;

int main() {
    int choice, balance, price;

    cout << "1. Social Package - Rs. 300\n";
    cout << "2. Weekly Package - Rs. 500\n";
    cout << "3. Monthly Package - Rs. 1000\n";
    cout << "4. Premium Package - Rs. 1500\n";

    cout << "Select package: ";
    cin >> choice;

    switch(choice) {
        case 1:
            price = 300;
            break;
        case 2:
            price = 500;
            break;
        case 3:
            price = 1000;
            break;
        case 4:
            price = 1500;
            break;
        default:
            cout << "Invalid choice";
            return 0;
    }

    cout << "Enter your balance: ";
    cin >> balance;

    if(balance >= price) if(balance >= price)
        cout << "Package activated";
    else
        cout << "Insufficient balance";

    return 0;
}