#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        if (num % 2 == 0) {
            cout << "Positive and even";
        } else {
            cout << "Positive and odd";
        }
    } else {
        cout << "Not a positive number";
    }

    return 0;
}