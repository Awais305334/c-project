#include <iostream>
using namespace std;

int main() {
    int light;

    cout << "1. Red\n2. Yellow\n3. Green\n";
    cout << "Enter your choice: ";
    cin >> light;

    switch(light) {
        case 1:
            cout << "Stop";
            break;
        case 2:
            cout << "Get Ready";
            break;
        case 3:
            cout << "Go";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}