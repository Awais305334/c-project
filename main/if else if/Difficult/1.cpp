#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    cout << "Enter first time (hour minute) and second time (hour minute): ";
    cin >> h1 >> m1 >> h2 >> m2;

    if (h1 < h2) {
        cout << "First time is earlier";
    } else if (h1 > h2) {
        cout << "Second time is earlier";
    } else if (m1 < m2) {
        cout << "First time is earlier";
    } else if (m1 > m2) {
        cout << "Second time is earlier";
    } else {
        cout << "Both times are same";
    }

    return 0;
}