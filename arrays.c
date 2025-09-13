/*
 * arrays.c
 * Demonstrates array operations in C
 * Author: Harsh Dalal
 * Date: Fall 2025
 */

#include <stdio.h>

#define SIZE 5

int main() {
    int numbers[SIZE];
    int i, sum = 0, max, min;
    
    printf("Enter %d numbers:\n", SIZE);
    
    // Input array elements
    for (i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Display array elements
    printf("\nArray elements: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    // Calculate sum
    for (i = 0; i < SIZE; i++) {
        sum += numbers[i];
    }
    printf("Sum of array elements: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / SIZE);
    
    // Find maximum and minimum
    max = min = numbers[0];
    for (i = 1; i < SIZE; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    
    // Reverse array
    printf("Reversed array: ");
    for (i = SIZE - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
