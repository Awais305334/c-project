#include <iostream>
using namespace std;

int main() {
    int km, warning;

    cout << "Enter driven kilometres: ";
    cin >> km;

    cout << "Engine warning (1 for ON, 0 for OFF): ";
    cin >> warning;

    if (km >= 10000) {
        if (warning == 1) {
            cout << "Urgent Service Required";
        }
        else if (warning == 0) {
            cout << "Regular Service Required";
        }
        else {
            cout << "Invalid Warning Status";
        }
    }
    else {
        if (warning == 1) {
            cout << "Engine Inspection Required";
        }
        else if (warning == 0) {
            cout << "No Service Required Yet";
        }
        else {
            cout << "Invalid Warning Status";
        }
    }

    return 0;
}