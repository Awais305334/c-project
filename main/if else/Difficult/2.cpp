#include <iostream>
using namespace std;

int main() {
    int age, salary;
    cout << "Enter age and monthly salary: ";
    cin >> age >> salary;

    if (age < 21 || age > 60) {
        cout << "Rejected: age not allowed";
    } else {
        if (salary < 50000) {
            cout << "Rejected: low salary";
        } else {
            if (salary >= 100000) {
                cout << "Approved: Loan of Rs. 1000000";
            } else {
                cout << "Approved: Loan of Rs. 500000";
            }
        }
    }

    return 0;
}