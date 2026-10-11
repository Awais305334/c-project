#include <iostream>
using namespace std;

int main() {
    float bill, discount;

    cout << "Enter your bill: ";
    cin >> bill;

    cout << "Enter discount amount: ";
    cin >> discount;

    if (bill >= 5000) {
        cout << "Final Bill: " << bill - discount;
    }
    else {
        cout << "Final Bill: " << bill;
    }

    return 0;
}
