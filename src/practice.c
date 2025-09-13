/*
 * practice.c
 * CS5008 C Practice Assignment - Required Functions
 * Author: Harsh Dalal
 * Date: Fall 2025
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for points
typedef struct {
    double x;
    double y;
} Point;

// Structure for polygons
typedef struct {
    Point* vertices;
    int num_vertices;
} Polygon;

// Function prototypes
void swap(int* a, int* b);
int* create_fib_array(int n);
void reverse_array(int* arr, int size);
int* double_array_size(int* arr, int size);
void copy_array_start_end_loop(int* source, int* dest, int start, int end, int size);
Point* create_point(double x, double y);
Polygon* create_polygon(Point* vertices, int num_vertices);
Polygon* create_rectangle(Point bottom_left, Point top_right);
Polygon* create_triangle(Point p1, Point p2, Point p3);
double calculate_polygon_area(Polygon* poly);

// 1.1) Swap function
void swap(int* a, int* b) {
    if (a == NULL || b == NULL) return;
    
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 1.2) Create Fibonacci array
int* create_fib_array(int n) {
    if (n <= 0) return NULL;
    
    int* fib_array = (int*)malloc(n * sizeof(int));
    if (fib_array == NULL) return NULL;
    
    if (n == 1) {
        fib_array[0] = 0;
    } else if (n == 2) {
        fib_array[0] = 0;
        fib_array[1] = 1;
    } else {
        fib_array[0] = 0;
        fib_array[1] = 1;
        for (int i = 2; i < n; i++) {
            fib_array[i] = fib_array[i-1] + fib_array[i-2];
        }
    }
    
    return fib_array;
}

// 1.3) Reverse array
void reverse_array(int* arr, int size) {
    if (arr == NULL || size <= 0) return;
    
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

// 2.2) Double array size
int* double_array_size(int* arr, int size) {
    if (arr == NULL || size < 0) return NULL;
    
    int new_size = size * 2;
    int* new_arr = (int*)calloc(new_size, sizeof(int));
    if (new_arr == NULL) return NULL;
    
    // Copy existing elements
    for (int i = 0; i < size; i++) {
        new_arr[i] = arr[i];
    }
    
    // Free the old array
    free(arr);
    
    return new_arr;
}

// 2.4) Copy array with start-end loop
void copy_array_start_end_loop(int* source, int* dest, int start, int end, int size) {
    if (source == NULL || dest == NULL || size <= 0) return;
    
    int index = 0;
    for (int i = start; i != end; i = (i + 1) % size) {
        dest[index] = source[i];
        index++;
    }
    dest[index] = source[end]; // Include the end element
}

// 2.5) Create point
Point* create_point(double x, double y) {
    Point* p = (Point*)malloc(sizeof(Point));
    if (p == NULL) return NULL;
    
    p->x = x;
    p->y = y;
    
    return p;
}

// 2.6) Create polygon
Polygon* create_polygon(Point* vertices, int num_vertices) {
    if (vertices == NULL || num_vertices < 3) return NULL;
    
    Polygon* poly = (Polygon*)malloc(sizeof(Polygon));
    if (poly == NULL) return NULL;
    
    poly->vertices = (Point*)malloc(num_vertices * sizeof(Point));
    if (poly->vertices == NULL) {
        free(poly);
        return NULL;
    }
    
    poly->num_vertices = num_vertices;
    memcpy(poly->vertices, vertices, num_vertices * sizeof(Point));
    
    return poly;
}

// 2.6) Create rectangle
Polygon* create_rectangle(Point bottom_left, Point top_right) {
    Point* vertices = (Point*)malloc(4 * sizeof(Point));
    if (vertices == NULL) return NULL;
    
    vertices[0] = bottom_left;
    vertices[1].x = top_right.x;
    vertices[1].y = bottom_left.y;
    vertices[2] = top_right;
    vertices[3].x = bottom_left.x;
    vertices[3].y = top_right.y;
    
    Polygon* rect = create_polygon(vertices, 4);
    free(vertices);
    
    return rect;
}

// 2.6) Create triangle
Polygon* create_triangle(Point p1, Point p2, Point p3) {
    Point* vertices = (Point*)malloc(3 * sizeof(Point));
    if (vertices == NULL) return NULL;
    
    vertices[0] = p1;
    vertices[1] = p2;
    vertices[2] = p3;
    
    Polygon* triangle = create_polygon(vertices, 3);
    free(vertices);
    
    return triangle;
}

// 2.8) Calculate polygon area using shoelace formula
double calculate_polygon_area(Polygon* poly) {
    if (poly == NULL || poly->vertices == NULL || poly->num_vertices < 3) return 0.0;
    
    double area = 0.0;
    int n = poly->num_vertices;
    
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        area += poly->vertices[i].x * poly->vertices[j].y;
        area -= poly->vertices[j].x * poly->vertices[i].y;
    }
    
    return abs(area) / 2.0;
}

// Test function to verify implementations
int main() {
    printf("C Practice Assignment - Testing Functions\n");
    printf("Author: Harsh Dalal\n\n");
    
    // Test swap function
    int a = 5, b = 10;
    printf("Before swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap: a=%d, b=%d\n", a, b);
    
    // Test Fibonacci array
    int n = 10;
    int* fib = create_fib_array(n);
    if (fib != NULL) {
        printf("Fibonacci array of size %d: ", n);
        for (int i = 0; i < n; i++) {
            printf("%d ", fib[i]);
        }
        printf("\n");
        free(fib);
    }
    
    // Test reverse array
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    printf("Before reverse: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    reverse_array(arr, size);
    printf("After reverse: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Test point creation
    Point* p = create_point(3.5, 4.2);
    if (p != NULL) {
        printf("Created point: (%.1f, %.1f)\n", p->x, p->y);
        free(p);
    }
    
    printf("\nAll functions implemented successfully!\n");
    
    return 0;
}
