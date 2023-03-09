import java.util.Scanner;

public class AdvancedCalculator {

    // Function to add two numbers
    public static double add(double x, double y) {
        return x + y;
    }

    // Function to subtract two numbers
    public static double subtract(double x, double y) {
        return x - y;
    }

    // Function to multiply two numbers
    public static double multiply(double x, double y) {
        return x * y;
    }

    // Function to divide two numbers
    public static double divide(double x, double y) {
        return x / y;
    }

    // Function to calculate the square of a number
    public static double square(double x) {
        return x * x;
    }

    // Function to calculate the cube of a number
    public static double cube(double x) {
        return x * x * x;
    }

    // Function to calculate the square root of a number
    public static double squareRoot(double x) {
        return Math.sqrt(x);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int choice;
        double num1, num2, num;

        System.out.println("Select operation:");
        System.out.println("1. Add");
        System.out.println("2. Subtract");
        System.out.println("3. Multiply");
        System.out.println("4. Divide");
        System.out.println("5. Square");
        System.out.println("6. Cube");
        System.out.println("7. Square Root");

        // Take input from the user
        System.out.print("Enter choice (1/2/3/4/5/6/7): ");
        choice = input.nextInt();

        if (choice == 1 || choice == 2 || choice == 3 || choice == 4) {
            System.out.print("Enter first number: ");
            num1 = input.nextDouble();
            System.out.print("Enter second number: ");
            num2 = input.nextDouble();

            if (choice == 1) {
                System.out.println(num1 + " + " + num2 + " = " + add(num1, num2));
            } else if (choice == 2) {
                System.out.println(num1 + " - " + num2 + " = " + subtract(num1, num2));
            } else if (choice == 3) {
                System.out.println(num1 + " * " + num2 + " = " + multiply(num1, num2));
            } else if (choice == 4) {
                System.out.println(num1 + " / " + num2 + " = " + divide(num1, num2));
            }
        } else if (choice == 5 || choice == 6 || choice == 7) {
            System.out.print("Enter a number: ");
            num = input.nextDouble();

            if (choice == 5) {
                System.out.println("Square of " + num + " = " + square(num));
            } else if (choice == 6) {
                System.out.println("Cube of " + num + " = " + cube(num));
            } else if (choice == 7) {
                System.out.println("Square root of " + num + " = " + squareRoot(num));
            }
        } else {
            System.out.println("Invalid input");
        }

        input.close();
    }
}
