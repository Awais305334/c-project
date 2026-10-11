#include <iostream>
using namespace std;

int main() {
    int battery;

    cout << "Enter battery percentage: ";
    cin >> battery;

    if (battery < 0 || battery > 100) {
        cout << "Invalid Battery Level";
    }
    else if (battery <= 10) {
        cout << "Critical Battery";
    }
    else if (battery <= 25) {
        cout << "Low Battery";
    }
    else if (battery <= 60) {
        cout << "Battery Normal";
    }
    else {
        cout << "Battery High";
    }

    return 0;
}