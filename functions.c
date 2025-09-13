/*
 * functions.c
 * Demonstrates function definition and usage
 * Author: Harsh Dalal
 * Date: Fall 2025
 */

#include <stdio.h>

// Function prototypes
int add(int a, int b);
int multiply(int a, int b);
void printMessage(char message[]);
int factorial(int n);

int main() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Function calls
    int sum = add(num1, num2);
    int product = multiply(num1, num2);
    
    printMessage("Results:");
    printf("Sum: %d + %d = %d\n", num1, num2, sum);
    printf("Product: %d * %d = %d\n", num1, num2, product);
    
    // Factorial function
    printf("Factorial of %d = %d\n", num1, factorial(num1));
    printf("Factorial of %d = %d\n", num2, factorial(num2));
    
    return 0;
}

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

// Function to print a message
void printMessage(char message[]) {
    printf("\n--- %s ---\n", message);
}

// Function to calculate factorial
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
