#include <iostream>
using namespace std;

int main() {
    int hours;

    cout << "Enter parking hours: ";
    cin >> hours;

    if (hours <= 0) {
        cout << "Invalid Hours";
    }
    else if (hours == 1) {
        cout << "Parking Fee = Rs. 100";
    }
    else if (hours >= 2 && hours <= 4) {
        cout << "Parking Fee = Rs. 200";
    }
    else if (hours >= 5 && hours <= 8) {
        cout << "Parking Fee = Rs. 350";
    }
    else {
        cout << "Parking Fee = Rs. 500";
    }

    return 0;
}