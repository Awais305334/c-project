#include <iostream>
using namespace std;

int main() {
    float amount, distance;
    int delivery;

    cout << "Enter order amount: ";
    cin >> amount;

    cout << "Enter delivery distance: ";
    cin >> distance;

    if (amount < 0 || distance < 0) {
        cout << "Invalid Input";
    }
    else if (amount >= 5000) {
        delivery = 0;
        cout << "Free Delivery";
    }
    else if (distance <= 5) {
        delivery = 150;
        cout << "Delivery Charges = Rs. " << delivery;
    }
    else if (distance <= 15) {
        delivery = 300;
        cout << "Delivery Charges = Rs. " << delivery;
    }
    else {
        delivery = 500;
        cout << "Delivery Charges = Rs. " << delivery;
    }

    return 0;
}