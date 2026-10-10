#include <iostream>
using namespace std;

int main() {
    int hours;
    cout << "Enter parking hours: ";
    cin >> hours;

    if (hours <= 0) {
        cout << "Invalid hours";
    } else if (hours <= 2) {
        cout << "Fee: Rs. 50";
    } else if (hours <= 5) {
        cout << "Fee: Rs. 100";
    } else {
        cout << "Fee: Rs. 200";
    }

    return 0;
}
        