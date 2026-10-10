#include <iostream>
using namespace std;

int main() {
    int age;
    double weight;
    cout << "Enter age (years) and weight (kg): ";
    cin >> age >> weight;

    if (age < 0 || weight <= 0) {
        cout << "Invalid input";
    } else {
        if (age < 2) {
            cout << "Consult a doctor";
        } else {
            if (age < 12) {
                if (weight < 20) {
                    cout << "Dose: 5 ml";
                } else {
                    cout << "Dose: 10 ml";
                }
            } else {
                if (weight < 50) {
                    cout << "Dose: 15 ml";
                } else {
                    cout << "Dose: 20 ml";
                }
            }
        }
    }

    return 0;
}