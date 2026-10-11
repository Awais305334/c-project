#include <iostream>
using namespace std;

int main() {
    int age, timing;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter show timing (1 for Daytime, 2 for Evening): ";
    cin >> timing;

    if (age >= 18) {
        if (timing == 1) {
            cout << "Daytime Ticket Confirmed";
        }
        else if (timing == 2) {
            cout << "Evening Ticket Confirmed";
        }
        else {
            cout << "Invalid Show Timing";
        }
    }
    else {
        if (timing == 1) {
            cout << "Daytime Ticket Allowed";
        }
        else if (timing == 2) {
            cout << "Evening Show Not Allowed";
        }
        else {
            cout << "Invalid Show Timing";
        }
    }

    return 0;
}