#include <iostream>
using namespace std;

int main() 
{
    float obtained, total, percentage;

    cout << "Enter obtained marks: ";
    cin >> obtained;

    cout << "Enter total marks: ";
    cin >> total;

    if (total <= 0 || obtained < 0 || obtained > total)
    {
        cout << "Invalid Input";
    }
      else 
      {
        percentage = (obtained / total) * 100;

        if (percentage >= 90) {
            cout << "Outstanding";
        }
        else if (percentage >= 80) {
            cout << "Excellent";
        }
        else if (percentage >= 70) {
            cout << "Good";
        }
        else if (percentage >= 50) {
            cout << "Pass";
        }
        else {
            cout << "Fail";
        }
        return 0;
    }
}