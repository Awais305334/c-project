#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter a and b (for ax + b = 0): ";
    cin >> a >> b;

    if (a != 0) {
        cout << "x = " << -b / a;
    } else {
        if (b == 0) {
            cout << "Infinite solutions";
        } else {
            cout << "No solution";
        }
    }

    return 0;
}