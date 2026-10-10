#include <iostream>
using namespace std;

int main() {
    int age, accidents;
    double value;
    cout << "Enter age, vehicle value and accidents in last 3 years: ";
    cin >> age >> value >> accidents;

    if (value <= 0 || accidents < 0) {
        cout << "Invalid input";
    } else {
        if (age < 18) {
            cout << "Not eligible: too young";
        } else {
            if (age > 75) {
                cout << "Not eligible: age limit";
            } else {
                if (accidents > 3) {
                    cout << "Rejected: too many accidents";
                } else {
                    double base = value * 0.03;
                    double ageExtra = 0;
                    double accidentChange = 0;

                    if (age <= 25) {
                        ageExtra = 0.20;
                    } else {
                        if (age > 60) {
                            ageExtra = 0.10;
                        }
                    }

                    if (accidents == 0) {
                        accidentChange = -0.10;
                    } else {
                        if (accidents >= 2) {
                            accidentChange = 0.25;
                        }
                    }

                    double premium = base + base * ageExtra + base * accidentChange;

                    cout << "Premium: Rs. " << premium << endl;

                    if (premium > 50000) {
                        cout << "High premium";
                    }
                }
            }
        }
    }

    return 0;