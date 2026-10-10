#include <iostream>
using namespace std;

int main() {
    double salary;
    int years, rating;
    cout << "Enter salary, years of experience and rating (1-5): ";
    cin >> salary >> years >> rating;

    if (salary <= 0 || years < 0) {
        cout << "Invalid input";
    } else if (rating < 1 || rating > 5) {
        cout << "Invalid rating";
    } else {
        double increment = 0;
        double bonus = 0;

        if (years > 5) {
            increment = salary * 0.10;
        } else if (years >= 2) {
            increment = salary * 0.05;
        }

        if (rating == 5) {
            bonus = salary * 0.20;
        } else if (rating == 4) {
            bonus = salary * 0.10;
        } else if (rating == 3) {
            bonus = salary * 0.05;
        }

        double finalSalary = salary + increment + bonus;

        cout << "Final salary: Rs. " << finalSalary << endl;

        if (rating == 1) {
            cout << "Performance warning" << endl;
        }
        if (years >= 10) {
            cout << "Long service award";
        }
    }

    return 0;
}