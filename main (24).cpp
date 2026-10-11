#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1. Burger\n";
    cout << "2. Pizza\n";
    cout << "3. Sandwich\n";
    cout << "4. Fries\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Burger - Rs. 500";
            break;
        case 2:
            cout << "Pizza - Rs. 1200";
            break;
        case 3:
            cout << "Sandwich - Rs. 300";
            break;
        case 4:
            cout << "Fries - Rs. 200";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}