#include <iostream>

using namespace std;

int main() {
    double x;
    double y;
    char op;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "Enter operation (+, -, *, or /): ";
    cin >> op;

    if (op == '+') {
        cout << x + y << endl;
    }
    else if (op == '-') {
        cout << x - y << endl;
    }
    else if (op == '*') {
        cout << x * y << endl;
    }
    else if (op == '/') {
        cout << x / y << endl;
    }
}
