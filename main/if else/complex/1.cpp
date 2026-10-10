#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three different numbers: ";
    cin >> a >> b >> c;

    if (a > b) {
        if (b > c) {
            cout << "Second largest: " << b;
        } else {
            if (a > c) {
                cout << "Second largest: " << c;
            } else {
                cout << "Second largest: " << a;
            }
        }
    } else {
        if (a > c) {
            cout << "Second largest: " << a;
        } else {
            if (b > c) {
                cout << "Second largest: " << c;
            } else {
                cout << "Second largest: " << b;
            }
        }
    }

    return 0;
}