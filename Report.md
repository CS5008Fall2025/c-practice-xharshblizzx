# C Practice Assignment - Advanced Memory Management

**Student Name:** Harsh Dalal  
**GitHub Username:** xharshblizzx  
**Course:** CS5008 - Data Structures, Algorithms, and their Applications  
**Semester:** Fall 2025  
**Repository:** [https://github.com/xharshblizzx/cs5008-c-practice](https://github.com/xharshblizzx/cs5008-c-practice)

## Assignment Overview

This assignment focuses on advanced C programming concepts including dynamic memory management, pointer arithmetic, structs, and geometric algorithms. The implementation demonstrates proficiency in manual memory management and complex data structure manipulation.

## Learning Objectives

- Master dynamic memory allocation with `malloc()`, `calloc()`, and `free()`
- Implement complex array manipulation functions
- Work with nested structures and pointer arrays
- Apply mathematical algorithms (Fibonacci sequence, Shoelace formula)
- Develop comprehensive testing strategies
- Practice defensive programming and memory leak prevention

## Files Structure

```
.
├── cpractice.h      # Header file with all function implementations
├── main.c           # Sample program demonstrating all functions
├── tests.c          # Comprehensive test suite
├── Report.md        # Assignment report and documentation
└── README.md        # This file
```

## Implemented Functions

### Array Operations
- **`swap(int *a, int *b)`** - Swaps two integer values using pointers
- **`print_array(int *arr, int size)`** - Prints array elements to console
- **`create_array_of_ints_fib(int size)`** - Generates Fibonacci sequence array
- **`reverse_array(int *arr, int size)`** - Reverses array in-place
- **`double_array_size(int *arr, int size)`** - Doubles array size with zero padding
- **`copy_array_start_end_loop()`** - Circular array copying with wrap-around

### Struct Operations
- **`create_point(int x, int y)`** - Creates a Point struct on heap
- **`create_polygon(int size)`** - Creates a Polygon with point array
- **`free_polygon(Polygon *p)`** - Properly frees all polygon memory
- **`create_rectangle(int width, int height)`** - Creates rectangle polygon
- **`create_triangle(int width, int height)`** - Creates right triangle polygon
- **`calculate_polygon_area(Polygon *p)`** - Calculates area using Shoelace formula

## Compilation Instructions

### Using GCC directly:
```bash
# Compile the test suite
gcc -o tests tests.c -Wall -Wextra -g

# Compile the main program
gcc -o main main.c -Wall -Wextra -g

# For memory leak detection
gcc -o tests tests.c -Wall -Wextra -g -fsanitize=address
```

### Using Make (create a Makefile):
```makefile
CC = gcc
CFLAGS = -Wall -Wextra -g

all: tests main

tests: tests.c cpractice.h
	$(CC) $(CFLAGS) -o tests tests.c

main: main.c cpractice.h
	$(CC) $(CFLAGS) -o main main.c

clean:
	rm -f tests main
```

## Running and Testing

### Run the test suite:
```bash
./tests
```

Expected output:
```
1. test_swap_one()
2. test_create_array_of_ints_fib()
...
Passed 16 out of 16 tests
```

### Run the main program:
```bash
./main
```

### Memory leak checking with Valgrind:
```bash
valgrind --leak-check=full --show-leak-kinds=all ./tests
```

Expected: "All heap blocks were freed -- no leaks are possible"

## Test Coverage

The `tests.c` file contains 16+ comprehensive tests covering:

1. **Swap Function** - Basic swapping and edge cases
2. **Fibonacci Array** - Normal cases, edge cases (0, 1, 2, negative)
3. **Array Reversal** - Odd/even lengths, single element
4. **Array Doubling** - Proper copying and zero initialization
5. **Circular Copy** - Simple copy, wrap-around, invalid indices
6. **Point/Polygon** - Creation, memory management
7. **Geometric Shapes** - Rectangle and triangle creation
8. **Area Calculation** - Shoelace formula verification

## Key Implementation Details

### Memory Management Strategy
- All heap allocations are paired with corresponding `free()` calls
- Polygon deallocation follows reverse order of allocation
- Defensive programming with NULL checks before operations

### Circular Array Algorithm
The `copy_array_start_end_loop` function implements circular array semantics:
- When `start <= end`: Copy elements [start, end] inclusive
- When `start > end`: Copy [start, size-1] then [0, end]

### Shoelace Formula Implementation
```c
area = Σ(x[i] * y[i+1] - x[i+1] * y[i]) / 2
```
Where indices wrap around using modulo arithmetic.

## Autograder Results

✅ **All 13 tests passed:**
- 1.0-1.3: Learning objectives (compilation, basic functions)
- 2.0-2.8: Approaching objectives (edge cases, complex functions)


## Common Pitfalls and Solutions

1. **Off-by-one errors** - Carefully handle inclusive vs exclusive ranges
2. **Memory leaks** - Always free in reverse order of allocation
3. **Wrap-around logic** - Draw out the circular array cases
4. **Integer overflow** - Fibonacci limited to 95 elements
5. **NULL pointer access** - Always check before dereferencing

## Development Process

### Commit History
1. Initial setup with skeleton files
2. Implemented array manipulation functions
3. Added Fibonacci sequence generation
4. Implemented polygon structures and operations
5. Added Shoelace formula for area calculation
6. Created comprehensive test suite
7. Fixed memory leaks and edge cases
8. Documentation and code cleanup

## Resources Used

- The C Programming Language (K&R)
- Valgrind Documentation for memory debugging
- GeeksforGeeks for Shoelace formula reference
- CS5008 Lecture notes and slides

## Future Improvements

- Add more complex polygon shapes (pentagon, hexagon)
- Implement convex hull algorithm
- Add performance benchmarks
- Create visualization for polygon operations

