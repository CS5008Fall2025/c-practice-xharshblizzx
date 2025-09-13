/*
 * variables_and_types.c
 * Demonstrates different variable types and basic operations
 * Author: Harsh Dalal
 * Date: Fall 2025
 */

#include <stdio.h>

int main() {
    // Integer variables
    int age = 20;
    int year = 2025;
    
    // Floating point variables
    float gpa = 3.75;
    double pi = 3.14159265359;
    
    // Character variable
    char grade = 'A';
    
    // String (character array)
    char name[] = "Harsh Dalal";
    
    // Display all variables
    printf("Student Information:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Year: %d\n", year);
    printf("GPA: %.2f\n", gpa);
    printf("Grade: %c\n", grade);
    printf("Pi value: %.10f\n", pi);
    
    // Basic arithmetic operations
    int sum = age + year;
    printf("Age + Year = %d\n", sum);
    
    return 0;
}
