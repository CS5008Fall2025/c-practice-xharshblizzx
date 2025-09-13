/*
 * practice.h
 * CS5008 C Practice Assignment - Header File
 * Author: Harsh Dalal
 * Date: Fall 2025
 */

#ifndef PRACTICE_H
#define PRACTICE_H

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

#endif // PRACTICE_H
