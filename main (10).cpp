#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 100 && num <= 999) {
        cout << "Number is in Range";
    }
    else {
        cout << "Number is Out of Range";
    }

    return 0;
}
