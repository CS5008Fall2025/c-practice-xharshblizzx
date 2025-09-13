# C Practice Assignment

**Name:** Harsh Dalal  
**GitHub Username:** xharshblizzx  
**Link to Assignment on Github:** https://github.com/CS5008Fall2025/c-practice-xharshblizzx

## Assignment Information

**How many hours did it take you to complete this assignment (estimate)?**  
Approximately 4-6 hours

**Did you collaborate with any other students/TAs/Professors? If so, tell us who and in what capacity.**  
No collaboration with other students or TAs for this assignment.

**Did you use any external resources (you do not have to cite in class material)? (Cite them below)**  
- C Programming Language by Kernighan and Ritchie (reference for syntax)
- Online C documentation for standard library functions
- GCC compiler documentation for compilation flags

## About

This repository contains C programming practice exercises for CS5008 Fall 2025.

### Repository Structure
- `src/` - Contains all C source files
- `instructions/` - Contains assignment instructions
- `Report.md` - Assignment report

### How to Compile and Run

To compile the main assignment program:
```bash
gcc -o practice src/practice.c
./practice
```

To compile other practice programs:
```bash
gcc -o program_name src/filename.c
./program_name
```

Using the provided batch files (Windows):
```cmd
compile.bat
run_all.bat
```

### Programs Included
1. **practice.c** - Main assignment file with all required functions:
   - `swap()` - Swaps two integer values
   - `create_fib_array()` - Creates Fibonacci array
   - `reverse_array()` - Reverses an array
   - `double_array_size()` - Doubles array size
   - `copy_array_start_end_loop()` - Copies array with wrap-around
   - `create_point()` - Creates a point structure
   - `create_polygon()` - Creates polygon structure
   - `create_rectangle()` - Creates rectangle polygon
   - `create_triangle()` - Creates triangle polygon
   - `calculate_polygon_area()` - Calculates polygon area

2. **practice.h** - Header file with function prototypes and structures

3. Additional practice programs demonstrating C fundamentals
