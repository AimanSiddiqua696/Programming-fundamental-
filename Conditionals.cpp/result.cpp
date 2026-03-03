#include <iostream>
using namespace std;

int main() {

    float num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+') {
        result = num1 - num2;   // inverse of addition
    }
    else if (op == '-') {
        result = num1 + num2;   // inverse of subtraction
    }
    else if (op == '*') {
        if (num2 != 0)
            result = num1 / num2;   // inverse of multiplication
        else {
            cout << "Division by zero not allowed!" << endl;
            return 0;
        }
    }
    else if (op == '/') {
        result = num1 * num2;   // inverse of division
    }
    else {
        cout << "Invalid operator!" << endl;
        return 0;
    }

    cout << "Result (Inverse Operation): " << result << endl;

    return 0;
}