#include <iostream>
using namespace std;

int main() {
    float data;

    cout << "Enter data usage in GB: ";
    cin >> data;

    if (data < 0) {
        cout << "Invalid Data";
    }
    else if (data <= 2) {
        cout << "Light User";
    }
    else if (data <= 5) {
        cout << "Normal User";
    }
    else if (data <= 10) {
        cout << "Heavy User";
    }
    else {
        cout << "Very Heavy User";
    }

    return 0;
}