#include <iostream>
using namespace std;

int main() {
    int travelClass, age;
    double weight;
    cout << "Enter class (1=economy, 2=business), baggage weight (kg) and age: ";
    cin >> travelClass >> weight >> age;

    if (age <= 0) {
        cout << "Invalid age";
    } else {
        if (travelClass != 1 && travelClass != 2) {
            cout << "Invalid class";
        } else {
            if (weight <= 0) {
                cout << "Invalid weight";
            } else {
                double allowance, rate;

                if (travelClass == 1) {
                    allowance = 20;
                    rate = 500;
                } else {
                    allowance = 40;
                    rate = 300;
                }

                if (weight <= allowance) {
                    cout << "No extra charge";
                } else {
                    double extra = weight - allowance;

                    if (extra > 15) {
                        cout << "Overweight: not allowed";
                    } else {
                        double charge = extra * rate;

                        if (age >= 65) {
                            charge = charge / 2;
                            cout << "Senior discount applied" << endl;
                        }

                        cout << "Extra charge: Rs. " << charge;
                    }
                }
            }
        }
    }

    return 0;
}