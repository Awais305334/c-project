#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three different numbers: ";
    cin >> a >> b >> c;

    if ((a > b && a < c) || (a < b && a > c)) {
        cout << "Median: " << a;
    }
    if ((b > a && b < c) || (b < a && b > c)) {
        cout << "Median: " << b;
    }
    if ((c > a && c < b) || (c < a && c > b)) {
        cout << "Median: " << c;
    }

    return 0;
}