#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size (1=small, 2=medium, 3=large): ";
    cin >> size;

    if (size == 1) {
        cout << "Price: Rs. 150";
    } else if (size == 2) {
        cout << "Price: Rs. 200";
    } else if (size == 3) {
        cout << "Price: Rs. 250";
    } else {
        cout << "Invalid size";
    }

    return 0;
}
        