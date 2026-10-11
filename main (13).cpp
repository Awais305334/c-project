#include <iostream>
using namespace std;

int main() {
    string color;

    cout << "Enter traffic light color: ";
    cin >> color;

    if (color == "red") {
        cout << "Stop";
    }
    else if (color == "yellow") {
        cout << "Wait";
    }
    else if (color == "green") {
        cout << "Go";
    }
    else {
        cout << "Invalid Color";
    }

    return 0;
}