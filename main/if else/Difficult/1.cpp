#include <iostream>
using namespace std;

int main() {
    int hour, minute;
    cout << "Enter hour and minute: ";
    cin >> hour >> minute;

    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        cout << "Invalid time";
    } else if (hour >= 5 && hour <= 11) {
        cout << "Good morning";
    } else if (hour >= 12 && hour <= 16) {
        cout << "Good afternoon";
    } else if (hour >= 17 && hour <= 20) {
        cout << "Good evening";
    } else {
        cout << "Good night";
    }

    return 0;
}