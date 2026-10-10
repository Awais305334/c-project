#include <iostream>
using namespace std;

int main() {
    int units, type;
    cout << "Enter units and customer type (1=home, 2=shop): ";
    cin >> units >> type;

    if (units <= 0) {
        cout << "Invalid units";
    } else {
        if (type != 1 && type != 2) {
            cout << "Invalid customer type";
        } else {
            int rate;

            if (type == 1) {
                if (units <= 200) {
                    rate = 10;
                } else {
                    rate = 15;
                }
            } else {
                if (units <= 200) {
                    rate = 20;
                } else {
                    rate = 30;
                }
            }

            double bill = units * rate;
            bool discount = false;

            if (bill > 5000) {
                bill = bill - bill * 0.10;
                discount = true;
            }

            cout << "Final bill: " << bill << endl;

            if (discount) {
                cout << "Discount applied";
            }
        }
    }

    return 0;
}