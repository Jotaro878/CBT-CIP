#include <iostream>
#include <cmath>

using namespace std;

// Function to perform addition
void add() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Result: " << num1 + num2 << endl;
}

// Function to perform subtraction
void subtract() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Result: " << num1 - num2 << endl;
}

// Function to perform multiplication
void multiply() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Result: " << num1 * num2 << endl;
}

// Function to perform division
void divide() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    if (num2 != 0) {
        cout << "Result: " << num1 / num2 << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
}

// Function to perform exponentiation
void exponentiate() {
    double num1, num2;
    cout << "Enter the base: ";
    cin >> num1;
    cout << "Enter the exponent: ";
    cin >> num2;
    cout << "Result: " << pow(num1, num2) << endl;
}

// Function to perform square root
void squareRoot() {
    double num;
    cout << "Enter the number: ";
    cin >> num;
    if (num >= 0) {
        cout << "Result: " << sqrt(num) << endl;
    } else {
        cout << "Error: Square root of negative number!" << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "Digital Calculator" << endl;
        cout << "-----------------" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exponentiation" << endl;
        cout << "6. Square Root" << endl;
        cout << "7. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                exponentiate();
                break;
            case 6:
                squareRoot();
                break;
            case 7:
                cout << "Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Try again!" << endl;
        }
    }
    return 0;
}