#include <iostream>
using namespace std;

int main() {
    int age, score;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 16) {
        cout << "Enter fitness test score: ";
        cin >> score;

        if (score >= 70) {
            cout << "You are selected";
        }
        else {
            cout << "Fitness test failed";
        }
    }
    else {
        cout << "Age requirement not met";
    }

    return 0;
}