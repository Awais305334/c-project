#include <iostream>
using namespace std;

int main() {
    double amount, distance;
    int type;
    cout << "Enter amount, distance (km) and delivery type (1=normal, 2=express): ";
    cin >> amount >> distance >> type;

    if (amount <= 0 || distance < 0) {
        cout << "Invalid input";
    } else {
        if (type != 1 && type != 2) {
            cout << "Invalid delivery type";
        } else {
            if (distance > 20) {
                cout << "Delivery not available";
            } else {
                double charge;

                if (distance <= 5) {
                    charge = 50;
                } else {
                    charge = 100;
                }

                if (type == 2) {
                    charge = charge * 2;
                }

                if (amount >= 3000) {
                    if (type == 1) {
                        charge = 0;
                    } else {
                        charge = charge / 2;
                    }
                }

                cout << "Delivery charge: " << charge << endl;
                cout << "Total: " << amount + charge;
            }
        }
    }

    return 0;
}