// Advanced Calculator in C++

#include <iostream>
#include <cmath>

using namespace std;

// Function to add two numbers
double add(double x, double y) {
    return x + y;
}

// Function to subtract two numbers
double subtract(double x, double y) {
    return x - y;
}

// Function to multiply two numbers
double multiply(double x, double y) {
    return x * y;
}

// Function to divide two numbers
double divide(double x, double y) {
    return x / y;
}

// Function to calculate the square of a number
double square(double x) {
    return x * x;
}

// Function to calculate the cube of a number
double cube(double x) {
    return x * x * x;
}

// Function to calculate the square root of a number
double square_root(double x) {
    return sqrt(x);
}

int main() {
    int choice;
    double num1, num2, num;

    cout << "Select operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Square" << endl;
    cout << "6. Cube" << endl;
    cout << "7. Square Root" << endl;

    // Take input from the user
    cout << "Enter choice (1/2/3/4/5/6/7): ";
    cin >> choice;

    if (choice == 1 || choice == 2 || choice == 3 || choice == 4) {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        if (choice == 1) {
            cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
        } else if (choice == 2) {
            cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
        } else if (choice == 3) {
            cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
        } else if (choice == 4) {
            cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
        }
    } else if (choice == 5 || choice == 6 || choice == 7) {
        cout << "Enter a number: ";
        cin >> num;

        if (choice == 5) {
            cout << "Square of " << num << " = " << square(num) << endl;
        } else if (choice == 6) {
            cout << "Cube of " << num << " = " << cube(num) << endl;
        } else if (choice == 7) {
            cout << "Square root of " << num << " = " << square_root(num) << endl;
        }
    } else {
        cout << "Invalid input" << endl;
    }

    return 0;
}
