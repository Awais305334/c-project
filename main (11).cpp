#include <iostream>
using namespace std;

int main() {
    int balance, withdraw;

    cout << "Enter balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> withdraw;

    if (withdraw > 0 && withdraw <= balance) {
        cout << "Withdrawal Successful" << endl;
        cout << "Remaining Balance: "
             << balance - withdraw;
    }
    else {
        cout << "Invalid Withdrawal";
    }

    return 0;
}

