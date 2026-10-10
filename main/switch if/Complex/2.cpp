#include <iostream>
using namespace std;

int main() {
    int item, quantity;
    char type;
    cout << "Enter item (1=Burger, 2=Pizza, 3=Pasta, 4=Fries), quantity and order type (D/T/H): ";
    cin >> item >> quantity >> type;

    double price = 0;
    bool valid = true;

    if (quantity <= 0) {
        cout << "Invalid quantity";
        valid = false;
    } else {
        switch (item) {
            case 1:
                price = 350;
                break;
            case 2:
                price = 800;
                break;
            case 3:
                price = 600;
                break;
            case 4:
                price = 200;
                break;
            default:
                cout << "Invalid item";
                valid = false;
        }
    }

    if (valid) {
        double total = price * quantity;

        if (total >= 3000) {
            total = total - total * 0.10;
            cout << "10% discount applied" << endl;
        }

        switch (type) {
            case 'D':
            case 'd':
                total = total + total * 0.05;
                break;
            case 'T':
            case 't':
                break;
            case 'H':
            case 'h':
                total = total + 150;
                break;
            default:
                cout << "Invalid order type";
                valid = false;
        }

        if (valid) {
            cout << "Total bill: Rs. " << total;
        }
    }

    return 0;
}