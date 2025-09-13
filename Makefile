# Makefile for C Practice Assignment
# Author: Harsh Dalal
# Date: Fall 2025

CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
SRCDIR = src
BINDIR = bin

# Create bin directory if it doesn't exist
$(BINDIR):
	mkdir -p $(BINDIR)

# Compile all programs
all: $(BINDIR) hello_world variables_and_types input_output loops functions arrays

# Individual program targets
hello_world: $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/hello_world $(SRCDIR)/hello_world.c

variables_and_types: $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/variables_and_types $(SRCDIR)/variables_and_types.c

input_output: $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/input_output $(SRCDIR)/input_output.c

loops: $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/loops $(SRCDIR)/loops.c

functions: $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/functions $(SRCDIR)/functions.c

arrays: $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/arrays $(SRCDIR)/arrays.c

# Run all programs
run: all
	@echo "Running Hello World:"
	@./$(BINDIR)/hello_world
	@echo "\nRunning Variables and Types:"
	@./$(BINDIR)/variables_and_types
	@echo "\nRunning Input/Output (requires user input):"
	@echo "Note: This program requires user input"
	@echo "\nRunning Loops (requires user input):"
	@echo "Note: This program requires user input"
	@echo "\nRunning Functions (requires user input):"
	@echo "Note: This program requires user input"
	@echo "\nRunning Arrays (requires user input):"
	@echo "Note: This program requires user input"

# Clean compiled files
clean:
	rm -rf $(BINDIR)

# Help target
help:
	@echo "Available targets:"
	@echo "  all          - Compile all programs"
	@echo "  hello_world  - Compile hello_world program"
	@echo "  variables_and_types - Compile variables_and_types program"
	@echo "  input_output - Compile input_output program"
	@echo "  loops        - Compile loops program"
	@echo "  functions    - Compile functions program"
	@echo "  arrays       - Compile arrays program"
	@echo "  run          - Compile and run all programs"
	@echo "  clean        - Remove compiled files"
	@echo "  help         - Show this help message"

.PHONY: all run clean help
