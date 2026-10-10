#include <iostream>
using namespace std;

int main() {
    double temp;
    cout << "Enter body temperature: ";
    cin >> temp;

    if (temp > 99.5) {
        cout << "Fever";
    } else {
        cout << "Normal";
    }

    return 0;
}