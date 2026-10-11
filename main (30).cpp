#include <iostream>
using namespace std;

int main() {
    int units;

    cout << "Enter electricity units: ";
    cin >> units;

    if (units > 100) {
        if (units > 300) {
            cout << "High Electricity Usage";
        }
        else {
            cout << "Moderate Electricity Usage";
        }
    }
    else {
        if (units > 0) {
            cout << "Low Electricity Usage";
        }
        else {
            cout << "Invalid Units";
        }
    }

    return 0;
}