#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Enter first number, operator (+ - * /) and second number: ";
    cin >> a >> op >> b;

    switch (op) {
        case '+':
            cout << "Result: " << a + b;
            break;
        case '-':
            cout << "Result: " << a - b;
            break;
        case '*':
            cout << "Result: " << a * b;
            break;
        case '/':
            cout << "Result: " << a / b;
            break;
        default:
            cout << "Invalid operator";
    }

    return 0;
}