#include <stdio.h>
#include <math.h>

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
double squareRoot(double x) {
    return sqrt(x);
}

int main() {
    int choice;
    double num1, num2, num;

    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Square\n");
    printf("6. Cube\n");
    printf("7. Square Root\n");

    // Take input from the user
    printf("Enter choice (1/2/3/4/5/6/7): ");
    scanf("%d", &choice);

    if (choice == 1 || choice == 2 || choice == 3 || choice == 4) {
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        if (choice == 1) {
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, add(num1, num2));
        } else if (choice == 2) {
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, subtract(num1, num2));
        } else if (choice == 3) {
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, multiply(num1, num2));
        } else if (choice == 4) {
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, divide(num1, num2));
        }
    } else if (choice == 5 || choice == 6 || choice == 7) {
        printf("Enter a number: ");
        scanf("%lf", &num);

        if (choice == 5) {
            printf("Square of %.2lf = %.2lf\n", num, square(num));
        } else if (choice == 6) {
            printf("Cube of %.2lf = %.2lf\n", num, cube(num));
        } else if (choice == 7) {
            printf("Square root of %.2lf = %.2lf\n", num, squareRoot(num));
        }
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
