/**
 * Student Name: Harsh Dalal
 * Semester: Fall 2025
 *
 *
 * This file is to test the functions in cpractice.h. You are to write at least *TWO* (maybe more) tests for every function.
 * Some sample ones have been provided for you.
*/

#include <stdio.h>  // basic input and output
#include <stdlib.h> // standard library

#include "cpractice.h" // header file for cpractice.c


// this may help with some tests, as the array numbers match their index
int * create_simple_array(int size) {
    int * arr = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }
    return arr;
}

/**
 * Tests a basic swap
*/
int test_swap_one() {
    printf("1. test_swap_one()\n");
    int a = 5;
    int b = 10;
    swap(&a, &b);
    if (a == 10 && b == 5) {
        return 1;
    }
    return 0;
}

/**
 * Tests the reverse_array function
 */
int test_reverse_array() {
    printf("3. test_reverse_array()\n");
    int arr[] = {1, 2, 3, 4, 5};
    int expected[] = {5, 4, 3, 2, 1};
    reverse_array(arr, 5);
    for (int i = 0; i < 5; i++) {
        if (arr[i] != expected[i]) {
            return 0;
        }
    }
    return 1;
}

/**
 * Tests the double_array_size function
 */
int test_double_array_size() {
    printf("4. test_double_array_size()\n");
    int *arr = create_simple_array(3); // [0,1,2]
    int *new_arr = double_array_size(arr, 3);
    int expected[] = {0, 1, 2, 0, 0, 0};
    for (int i = 0; i < 6; i++) {
        if (new_arr[i] != expected[i]) {
            free(arr);
            free(new_arr);
            return 0;
        }
    }
    free(arr);
    free(new_arr);
    return 1;
}

/**
 * Tests the create_array_of_ints_fib function
*/
int test_create_array_of_ints_fib() {
    printf("2. test_create_array_of_ints_fib()\n");
    int* arr = create_array_of_ints_fib(5);
    int expected[] = {1, 1, 2, 3, 5};
    for (int i = 0; i < 5; i++) {
        if (arr[i] != expected[i]) {
            free(arr);
            return 0;
        }
    }
    free(arr); // note expected does not need freed.. why is that?
    // everything matched
    return 1;
}

/**
 * Tests the create_array_of_ints_fib function with edge cases
*/
int test_create_array_of_ints_fib_edge() {
    printf("5. test_create_array_of_ints_fib_edge()\n");
    // size 0
    int* arr0 = create_array_of_ints_fib(0);
    if (arr0 != NULL) return 0;
    // size 1
    int* arr1 = create_array_of_ints_fib(1);
    if (arr1[0] != 1) {
        free(arr1);
        return 0;
    }
    free(arr1);
    // size 2
    int* arr2 = create_array_of_ints_fib(2);
    if (arr2[0] != 1 || arr2[1] != 1) {
        free(arr2);
        return 0;
    }
    free(arr2);
    // negative
    int* arr_neg = create_array_of_ints_fib(-1);
    if (arr_neg != NULL) return 0;
    return 1;
}

/**
 * Tests the copy_array_start_end_loop function for simple case
 */
int test_copy_array_start_end_loop_simple() {
    printf("6. test_copy_array_start_end_loop_simple()\n");
    int arr[] = {1, 2, 3, 4, 5};
    int new_size;
    int* new_arr = copy_array_start_end_loop(arr, 5, 1, 3, &new_size);
    int expected[] = {2, 3, 4};
    if (new_size != 3) {
        free(new_arr);
        return 0;
    }
    for (int i = 0; i < 3; i++) {
        if (new_arr[i] != expected[i]) {
            free(new_arr);
            return 0;
        }
    }
    free(new_arr);
    return 1;
}

/**
 * Tests the copy_array_start_end_loop function for wrap around
 */
int test_copy_array_start_end_loop_wrap() {
    printf("7. test_copy_array_start_end_loop_wrap()\n");
    int arr[] = {1, 2, 3, 4, 5};
    int new_size;
    int* new_arr = copy_array_start_end_loop(arr, 5, 3, 1, &new_size);
    int expected[] = {4, 5, 1, 2};
    if (new_size != 4) {
        free(new_arr);
        return 0;
    }
    for (int i = 0; i < 4; i++) {
        if (new_arr[i] != expected[i]) {
            free(new_arr);
            return 0;
        }
    }
    free(new_arr);
    return 1;
}

/**
 * Tests the create_point function
 */
int test_create_point() {
    printf("8. test_create_point()\n");
    Point* p = create_point(5, 10);
    if (p->x != 5 || p->y != 10) {
        free(p);
        return 0;
    }
    free(p);
    return 1;
}

/**
 * Tests the create_polygon function
 */
int test_create_polygon() {
    printf("9. test_create_polygon()\n");
    Polygon* poly = create_polygon(3);
    if (poly->size != 3) {
        free_polygon(poly);
        return 0;
    }
    for (int i = 0; i < 3; i++) {
        if (poly->points[i] != NULL) {
            free_polygon(poly);
            return 0;
        }
    }
    free_polygon(poly);
    return 1;
}

/**
 * Tests the create_rectangle function
 */
int test_create_rectangle() {
    printf("10. test_create_rectangle()\n");
    Polygon* rect = create_rectangle(5, 10);
    if (rect->size != 4) {
        free_polygon(rect);
        return 0;
    }
    int expected_x[] = {0, 5, 5, 0};
    int expected_y[] = {0, 0, 10, 10};
    for (int i = 0; i < 4; i++) {
        if (rect->points[i]->x != expected_x[i] || rect->points[i]->y != expected_y[i]) {
            free_polygon(rect);
            return 0;
        }
    }
    free_polygon(rect);
    return 1;
}

/**
 * Tests the create_triangle function
 */
int test_create_triangle() {
    printf("11. test_create_triangle()\n");
    Polygon* tri = create_triangle(5, 10);
    if (tri->size != 3) {
        free_polygon(tri);
        return 0;
    }
    int expected_x[] = {0, 5, 5};
    int expected_y[] = {0, 0, 10};
    for (int i = 0; i < 3; i++) {
        if (tri->points[i]->x != expected_x[i] || tri->points[i]->y != expected_y[i]) {
            free_polygon(tri);
            return 0;
        }
    }
    free_polygon(tri);
    return 1;
}

/**
 * Tests the calculate_polygon_area function
 */
int test_calculate_polygon_area() {
    printf("12. test_calculate_polygon_area()\n");
    Polygon* rect = create_rectangle(5, 10);
    double area = calculate_polygon_area(rect);
    if (area != 50.0) { // 5*10
        free_polygon(rect);
        return 0;
    }
    free_polygon(rect);
    Polygon* tri = create_triangle(5, 10);
    area = calculate_polygon_area(tri);
    if (area != 25.0) { // 0.5*5*10
        free_polygon(tri);
        return 0;
    }
    free_polygon(tri);
    return 1;
}


// this is a list of all the unit tests
int (*unitTests[])() = {
        test_swap_one,
        test_create_array_of_ints_fib,
        test_reverse_array,
        test_double_array_size,
        test_create_array_of_ints_fib_edge,
        test_copy_array_start_end_loop_simple,
        test_copy_array_start_end_loop_wrap,
        test_create_point,
        test_create_polygon,
        test_create_rectangle,
        test_create_triangle,
        test_calculate_polygon_area,
        // add more test function names here
};

int main(int argc, char const *argv[])
{
    int numTests = sizeof(unitTests) / sizeof(unitTests[0]);
    int numPassed = 0;

    for (int i = 0; i < numTests; i++) {
        if (unitTests[i]()) {
            numPassed++;
        } else {
            printf("Test %d failed\n", i);
        }
    }

    printf("Passed %d out of %d tests\n", numPassed, numTests);
    return 0;
}
