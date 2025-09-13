# Setup Instructions for C Development Environment

## For Windows Users

### Option 1: Install MinGW-w64 (Recommended)

1. **Download MinGW-w64:**
   - Go to https://www.mingw-w64.org/downloads/
   - Download the installer for Windows
   - Or use the MSYS2 installer: https://www.msys2.org/

2. **Install MSYS2:**
   - Download and run the MSYS2 installer
   - Follow the installation wizard
   - After installation, open MSYS2 terminal

3. **Install GCC:**
   ```bash
   pacman -S mingw-w64-x86_64-gcc
   pacman -S mingw-w64-x86_64-make
   ```

4. **Add to PATH:**
   - Add `C:\msys64\mingw64\bin` to your Windows PATH environment variable
   - Restart your command prompt/PowerShell

### Option 2: Install Visual Studio Build Tools

1. **Download Visual Studio Build Tools:**
   - Go to https://visualstudio.microsoft.com/downloads/
   - Download "Build Tools for Visual Studio"

2. **Install C++ Build Tools:**
   - Run the installer
   - Select "C++ build tools" workload
   - Install the components

### Option 3: Use Online Compiler (For Testing)

If you can't install a compiler locally, you can use online compilers:
- https://www.onlinegdb.com/online_c_compiler
- https://replit.com/
- https://ideone.com/

## For macOS Users

1. **Install Xcode Command Line Tools:**
   ```bash
   xcode-select --install
   ```

2. **Or install GCC via Homebrew:**
   ```bash
   brew install gcc
   ```

## For Linux Users

1. **Ubuntu/Debian:**
   ```bash
   sudo apt update
   sudo apt install gcc make
   ```

2. **CentOS/RHEL:**
   ```bash
   sudo yum install gcc make
   ```

## Verifying Installation

After installation, verify that GCC is working:

```bash
gcc --version
```

You should see output similar to:
```
gcc (GCC) 11.2.0
Copyright (C) 2021 Free Software Foundation, Inc.
```

## Compiling and Running Programs

### Using the provided batch files (Windows):
```cmd
compile.bat
run_all.bat
```

### Using command line:
```bash
# Compile a single program
gcc -o program_name src/filename.c

# Run the program
./program_name

# On Windows
program_name.exe
```

### Using the Makefile (if make is available):
```bash
make all
make run
```

## Troubleshooting

### Common Issues:

1. **"gcc is not recognized"**
   - GCC is not installed or not in PATH
   - Follow the installation instructions above

2. **"make is not recognized"**
   - Make is not installed
   - Use the batch files instead, or install make

3. **Compilation errors**
   - Check your C syntax
   - Ensure all required headers are included
   - Check for typos in variable names

4. **Permission denied**
   - On Windows, try running as administrator
   - On Linux/macOS, check file permissions

## Getting Help

If you encounter issues:
1. Check the error messages carefully
2. Verify your C syntax
3. Ensure all required tools are installed
4. Ask your instructor or TA for help

## Next Steps

Once you have the development environment set up:
1. Compile all programs using `compile.bat` or `gcc` commands
2. Test each program individually
3. Make any necessary modifications
4. Submit your work to GradeScope
