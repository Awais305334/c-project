#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3;
    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    bool invalid = (m1 < 0 || m1 > 100 ||
                    m2 < 0 || m2 > 100 ||
                    m3 < 0 || m3 > 100);

    bool fail = (m1 < 40 || m2 < 40 || m3 < 40);

    if (invalid) {
        cout << "Invalid marks";
    }
    if (!invalid && fail) {
        cout << "Fail";
    }
    if (!invalid && !fail) {
        int total = m1 + m2 + m3;
        double percentage = total / 3.0;

        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << endl;

        if (percentage >= 80) {
            cout << "Grade A" << endl;
        }
        if (percentage >= 60 && percentage < 80) {
            cout << "Grade B" << endl;
        }
        if (percentage >= 40 && percentage < 60) {
            cout << "Grade C" << endl;
        }
        if (m1 >= 90 && m2 >= 90 && m3 >= 90) {
            cout << "Distinction";
        }
    }

    return 0;
}