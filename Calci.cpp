#include <iostream>
using namespace std;

int main() {
    float num1, num2, result;
    char op;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Input operation
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    // Perform operation using switch
    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "Result = " << result << endl;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result = " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result = " << result << endl;
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result = " << result << endl;
            } else {
                cout << "Error: Cannot divide by zero!" << endl;
            }
            break;

        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}