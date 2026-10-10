#include <iostream>
using namespace std;

int main() {
    int category, option;
    double value;
    cout << "Category (1=Length, 2=Weight, 3=Temperature), option (1 or 2) and value: ";
    cin >> category >> option >> value;

    switch (category) {
        case 1:
            switch (option) {
                case 1:
                    cout << value << " km = " << value * 0.621371 << " miles";
                    break;
                case 2:
                    cout << value << " miles = " << value * 1.609344 << " km";
                    break;
                default:
                    cout << "Invalid option";
            }
            break;
        case 2:
            switch (option) {
                case 1:
                    cout << value << " kg = " << value * 2.20462 << " lb";
                    break;
                case 2:
                    cout << value << " lb = " << value * 0.453592 << " kg";
                    break;
                default:
                    cout << "Invalid option";
            }
            break;
        case 3:
            switch (option) {
                case 1:
                    cout << value << " C = " << value * 9 / 5 + 32 << " F";
                    break;
                case 2:
                    cout << value << " F = " << (value - 32) * 5 / 9 << " C";
                    break;
                default:
                    cout << "Invalid option";
            }
            break;
        default:
            cout << "Invalid category";
    }

    return 0;
}