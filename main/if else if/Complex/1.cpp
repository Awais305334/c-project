#include <iostream>
using namespace std;

int main() {
    int plan;
    double used;
    cout << "Enter plan (1/2/3) and data used (GB): ";
    cin >> plan >> used;

    if (used < 0) {
        cout << "Invalid usage";
    } else if (plan < 1 || plan > 3) {
        cout << "Invalid plan";
    } else {
        double base, included, rate;

        if (plan == 1) {
            base = 500;
            included = 5;
            rate = 50;
        } else if (plan == 2) {
            base = 900;
            included = 15;
            rate = 40;
        } else {
            base = 1500;
            included = 40;
            rate = 30;
        }

        double extra = used - included;
        double charge = 0;

        if (extra > 0) {
            charge = extra * rate;
        }

        double subtotal = base + charge;
        double total = subtotal + subtotal * 0.10;

        cout << "Total bill: Rs. " << total << endl;

        if (extra > 0) {
            cout << "Extra data charged" << endl;
        }
        if (total > 2000) {
            cout << "High bill";
        }
    }

    return 0;
}