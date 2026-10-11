#include <iostream>
using namespace std;

int main() {
    int choice, hours, rate, fee;

    cout << "1. Bike\n";
    cout << "2. Car\n";
    cout << "3. Bus\n";

    cout << "Select vehicle: ";
    cin >> choice;

    switch(choice) {
        case 1:
            rate = 50;
            break;
        case 2:
            rate = 100;
            break;
        case 3:
            rate = 200;
            break;
        default:
            cout << "Invalid vehicle";
            return 0;
    }

    cout << "Enter parking hours: ";
    cin >> hours;

    if(hours <= 0) {
        cout << "Invalid parking hours";
    }
    else {
        fee = rate * hours;
        cout << "Total parking fee: Rs. " << fee;
    }

    return 0;
}