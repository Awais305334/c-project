#include <iostream>
using namespace std;

int main() {
    int salary, years;

    cout << "Enter salary: ";
    cin >> salary;

    cout << "Enter experience in years: ";
    cin >> years;

    if (salary <= 50000 && years >= 5) {
        cout << "Bonus = 10000";
    }
    else {
        cout << "Bonus = 0";
    }

    return 0;
}
