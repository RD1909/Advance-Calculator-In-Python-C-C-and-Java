# Advanced Calculator in Python

import math

# Function to add two numbers
def add(x, y):
    return x + y

# Function to subtract two numbers
def subtract(x, y):
    return x - y

# Function to multiply two numbers
def multiply(x, y):
    return x * y

# Function to divide two numbers
def divide(x, y):
    return x / y

# Function to calculate the square of a number
def square(x):
    return x * x

# Function to calculate the cube of a number
def cube(x):
    return x * x * x

# Function to calculate the square root of a number
def square_root(x):
    return math.sqrt(x)

print("Select operation:")
print("1.Add")
print("2.Subtract")
print("3.Multiply")
print("4.Divide")
print("5.Square")
print("6.Cube")
print("7.Square Root")

# Take input from the user
choice = input("Enter choice(1/2/3/4/5/6/7): ")

if choice in ('1', '2', '3', '4'):
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))

    if choice == '1':
        print(num1, "+", num2, "=", add(num1, num2))

    elif choice == '2':
        print(num1, "-", num2, "=", subtract(num1, num2))

    elif choice == '3':
        print(num1, "*", num2, "=", multiply(num1, num2))

    elif choice == '4':
        print(num1, "/", num2, "=", divide(num1, num2))

elif choice in ('5', '6', '7'):
    num = float(input("Enter a number: "))

    if choice == '5':
        print("Square of", num, "=", square(num))

    elif choice == '6':
        print("Cube of", num, "=", cube(num))

    elif choice == '7':
        print("Square root of", num, "=", square_root(num))
else:
    print("Invalid input")
