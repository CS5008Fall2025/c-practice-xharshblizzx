@echo off
REM Batch file to compile C programs on Windows
REM Author: Harsh Dalal
REM Date: Fall 2025

echo Creating bin directory...
if not exist bin mkdir bin

echo Compiling C programs...

REM Compile hello_world.c
echo Compiling hello_world.c...
gcc -Wall -Wextra -std=c99 -g -o bin/hello_world.exe src/hello_world.c
if %errorlevel% neq 0 (
    echo Error compiling hello_world.c
    pause
    exit /b 1
)

REM Compile variables_and_types.c
echo Compiling variables_and_types.c...
gcc -Wall -Wextra -std=c99 -g -o bin/variables_and_types.exe src/variables_and_types.c
if %errorlevel% neq 0 (
    echo Error compiling variables_and_types.c
    pause
    exit /b 1
)

REM Compile input_output.c
echo Compiling input_output.c...
gcc -Wall -Wextra -std=c99 -g -o bin/input_output.exe src/input_output.c
if %errorlevel% neq 0 (
    echo Error compiling input_output.c
    pause
    exit /b 1
)

REM Compile loops.c
echo Compiling loops.c...
gcc -Wall -Wextra -std=c99 -g -o bin/loops.exe src/loops.c
if %errorlevel% neq 0 (
    echo Error compiling loops.c
    pause
    exit /b 1
)

REM Compile functions.c
echo Compiling functions.c...
gcc -Wall -Wextra -std=c99 -g -o bin/functions.exe src/functions.c
if %errorlevel% neq 0 (
    echo Error compiling functions.c
    pause
    exit /b 1
)

REM Compile arrays.c
echo Compiling arrays.c...
gcc -Wall -Wextra -std=c99 -g -o bin/arrays.exe src/arrays.c
if %errorlevel% neq 0 (
    echo Error compiling arrays.c
    pause
    exit /b 1
)

echo.
echo All programs compiled successfully!
echo.
echo To run a program, use: bin\program_name.exe
echo For example: bin\hello_world.exe
echo.
pause
