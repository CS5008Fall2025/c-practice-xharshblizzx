/*
 * input_output.c
 * Demonstrates user input and output operations
 * Author: Harsh Dalal
 * Date: Fall 2025
 */

#include <stdio.h>

int main() {
    char name[50];
    int age;
    float height;
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your height (in feet): ");
    scanf("%f", &height);
    
    printf("\n--- User Information ---\n");
    printf("Name: %s", name);
    printf("Age: %d years old\n", age);
    printf("Height: %.2f feet\n", height);
    
    return 0;
}
