#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    if (num < 100 || num > 999) {
        cout << "Invalid number";
    } else {
        int d1 = num / 100;
        int d2 = (num / 10) % 10;
        int d3 = num % 10;

        if (d1 == d2 && d2 == d3) {
            cout << "All digits same";
        } else if (d1 < d2 && d2 < d3) {
            cout << "Increasing";
        } else if (d1 > d2 && d2 > d3) {
            cout << "Decreasing";
        } else {
            cout << "Mixed";
        }
    }

    return 0;
}