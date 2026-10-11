#include <iostream>
using namespace std;

int main() {
    int temperature;

    cout << "Enter temperature: ";
    cin >> temperature;

    if (temperature >= 30) {
        if (temperature > 40) {
            cout << "Very Hot";
        }
        else {
            cout << "Hot Weather";
        }
    }
    else {
        cout << "Normal Weather";
    }
 return 0;
}