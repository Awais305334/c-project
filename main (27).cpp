#include <iostream>
using namespace std;

int main() {
    int amount;

    cout << "Enter shopping amount: ";
    cin >> amount;

    if (amount >= 5000) {
        if (amount >= 10000) {
            cout << "20% Discount";
        }
        else {
            cout << "10% Discount";
        }
    }
    else {
        cout << "No Discount";
    }

    return 0;
}