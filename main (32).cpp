#include <iostream>
using namespace std;

int main() {
    int package;
    int usage;

    cout << "Select package (1 for Basic, 2 for Premium): ";
    cin >> package;

    cout << "Enter monthly usage in GB: ";
    cin >> usage;

    if (package == 1) {
        if (usage >= 0) {
            if (usage <= 50) {
                cout << "Basic Package Within Limit";
            }
            else {
                cout << "Basic Package Limit Exceeded";
            }
        }
        else {
            cout << "Invalid Usage";
        }
    }
    else if (package == 2) {
        if (usage >= 0) {
            if (usage <= 200) {
                cout << "Premium Package Within Limit";
            }
            else {
                cout << "Premium Package Limit Exceeded";
            }
        }
        else {
            cout << "Invalid Usage";
        }
    }
    else {
        cout << "Invalid Package";
    }

    return 0;
}