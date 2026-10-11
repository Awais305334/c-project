#include <iostream>
using namespace std;

int main() {
    int power, internet, browser;

    cout << "Computer power (1 for ON, 0 for OFF): ";
    cin >> power;

    if (power == 1) {
        cout << "Internet status (1 for Connected, 0 for Disconnected): ";
        cin >> internet;

        if (internet == 1) {
            cout << "Browser status (1 for Working, 0 for Not Working): ";
            cin >> browser;

            if (browser == 1) {
                cout << "System Working Properly";
            }
            else if (browser == 0) {
                cout << "Browser Problem";
            }
            else {
                cout << "Invalid Browser Status";
            }
        }
        else if (internet == 0) {
            cout << "Check Internet Connection";
        }
        else {
            cout << "Invalid Internet Status";
        }
    }
    else if (power == 0) {
        cout << "Turn On the Computer";
    }
    else {
        cout << "Invalid Power Status";
    }

    return 0;
}