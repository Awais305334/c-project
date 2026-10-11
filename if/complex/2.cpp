#include <iostream>
using namespace std;

int main() {
    double salary;
    double tax = 0;

    cout << "Enter salary: ";
    cin >> salary;

    if (salary < 0) {
        cout << "Invalid salary";
    }
    if (salary > 50000 && salary <= 100000) {
        tax = (salary - 50000) * 0.05;
    }
    if (salary > 100000 && salary <= 200000) {
        tax = 50000 * 0.05 + (salary - 100000) * 0.10;
    }
    if (salary > 200000) {
        tax = 50000 * 0.05 + 100000 * 0.10 + (salary - 200000) * 0.15;
    }

    if (salary >= 0) {
        cout << "Tax: " << tax << endl;
        cout << "Net salary: " << salary - tax << endl;
    }
    if (salary >= 0 && tax > 10000) {
        cout << "High tax payer";
    }

    return 0;
}