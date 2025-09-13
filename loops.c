/*
 * loops.c
 * Demonstrates different types of loops in C
 * Author: Harsh Dalal
 * Date: Fall 2025
 */

#include <stdio.h>

int main() {
    int i, n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // For loop - count from 1 to n
    printf("\nFor loop - counting from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // While loop - count down from n to 1
    printf("While loop - counting down from %d to 1:\n", n);
    i = n;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }
    printf("\n\n");
    
    // Do-while loop - sum of numbers from 1 to n
    printf("Do-while loop - sum of numbers from 1 to %d:\n", n);
    int sum = 0;
    i = 1;
    do {
        sum += i;
        i++;
    } while (i <= n);
    printf("Sum = %d\n", sum);
    
    return 0;
}
