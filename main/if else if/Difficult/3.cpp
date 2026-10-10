#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int distA = a - 100;
    int distB = b - 100;

    if (distA < 0) {
        distA = -distA;
    }
    if (distB < 0) {
        distB = -distB;
    }

    if (distA < distB) {
        cout << a << " is closer to 100";
    } else if (distB < distA) {
        cout << b << " is closer to 100";
    } else {
        cout << "Same distance";
    }

    return 0;
}