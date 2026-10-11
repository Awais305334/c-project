#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 7 == 0 && num % 11 == 0) {
        cout << "Divisible by Both";
    }
    else {
        cout << "Not Divisible by Both";
    }

    return 0;
}
