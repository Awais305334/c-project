#include <iostream>
using namespace std;

int main() {
    int units;
    cout << "Enter the units: ";
    cin >> units;

    if (units >= 100)
    {
        cout << "High usage";
    }

    if (units >= 200)
    {
        cout << "Very high usage";
    }

    if (units >= 500)
    {
        cout << "Extremely high usage";
    }

    return 0;
}