# C Practice Assignment Instructions

## Assignment Overview
This assignment focuses on fundamental C programming concepts including variables, data types, control structures, functions, and arrays.

## Learning Objectives
- Understand basic C syntax and structure
- Practice with different data types and variables
- Implement control structures (loops, conditionals)
- Create and use functions
- Work with arrays and basic algorithms

## Programs to Implement

### 1. Hello World (`hello_world.c`)
- Create a simple program that prints "Hello, World!"
- Practice basic C program structure

### 2. Variables and Types (`variables_and_types.c`)
- Declare and initialize different variable types
- Demonstrate integer, float, double, char, and string variables
- Perform basic arithmetic operations

### 3. Input/Output (`input_output.c`)
- Practice user input using `scanf()` and `fgets()`
- Format output using `printf()`
- Handle different data types in I/O operations

### 4. Loops (`loops.c`)
- Implement for, while, and do-while loops
- Practice loop control and iteration
- Calculate sums and perform repetitive operations

### 5. Functions (`functions.c`)
- Define and call functions
- Pass parameters and return values
- Implement recursive functions (factorial)

### 6. Arrays (`arrays.c`)
- Declare and initialize arrays
- Perform array operations (sum, average, min, max)
- Implement array traversal and manipulation

## Compilation Instructions

### Using Makefile (Recommended)
```bash
# Compile all programs
make all

# Compile specific program
make hello_world

# Run all programs
make run

# Clean compiled files
make clean
```

### Manual Compilation
```bash
# Compile individual programs
gcc -o hello_world src/hello_world.c
gcc -o variables_and_types src/variables_and_types.c
gcc -o input_output src/input_output.c
gcc -o loops src/loops.c
gcc -o functions src/functions.c
gcc -o arrays src/arrays.c
```

## Testing Your Programs

1. **Hello World**: Should print "Hello, World!" without any input
2. **Variables and Types**: Should display various variable types and their values
3. **Input/Output**: Test with different input values
4. **Loops**: Test with different numbers to verify loop behavior
5. **Functions**: Test with different number pairs and verify calculations
6. **Arrays**: Test with different sets of numbers

## Submission Requirements

1. All source files must be in the `src/` directory
2. Include proper comments and documentation
3. Follow C coding standards and best practices
4. Ensure all programs compile without warnings
5. Test all programs thoroughly

## Grading Criteria

- **Correctness**: Programs work as expected
- **Code Quality**: Clean, readable, well-commented code
- **Completeness**: All required programs implemented
- **Documentation**: Proper comments and documentation

## Due Date
[To be specified by instructor]

## Resources
- C Programming Language by Kernighan and Ritchie
- Online C tutorials and documentation
- Compiler documentation (GCC)
