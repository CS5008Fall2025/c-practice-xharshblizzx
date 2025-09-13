# GradeScope Submission Guide

## Repository Information
- **Student Name**: Harsh Dalal
- **GitHub Username**: xharshblizzx
- **Repository URL**: https://github.com/CS5008Fall2025/c-practice-xharshblizzx
- **Course**: CS5008 Fall 2025

## Files Included in Submission

### Source Code (`src/` directory)
- `hello_world.c` - Basic "Hello, World!" program
- `variables_and_types.c` - Demonstrates different C data types
- `input_output.c` - User input and output operations
- `loops.c` - Different loop structures (for, while, do-while)
- `functions.c` - Function definitions and recursion
- `arrays.c` - Array operations and algorithms

### Documentation
- `README.md` - Main project documentation with student information
- `Report.md` - Detailed assignment report
- `instructions/README.md` - Assignment instructions and requirements

### Build Files
- `Makefile` - Unix/Linux compilation instructions
- `compile.bat` - Windows batch file for compilation
- `run_all.bat` - Windows batch file to run all programs
- `.gitignore` - Git ignore file for C projects

### Setup Instructions
- `SETUP_INSTRUCTIONS.md` - Detailed setup guide for development environment

## How to Submit to GradeScope

### Method 1: GitHub Integration (Recommended)
1. **Ensure your GitHub repository is up to date**
   - All files should be committed and pushed to the main branch
   - Verify that all source files are present in the `src/` directory

2. **Log into GradeScope**
   - Go to your course page on GradeScope
   - Find the "C Practice" assignment

3. **Submit via GitHub**
   - Click on the assignment
   - Select "Submit via GitHub" option
   - Authorize GradeScope to access your GitHub account if prompted
   - Select your repository: `c-practice-xharshblizzx`
   - Select the branch: `main`
   - Click "Submit"

### Method 2: Direct File Upload
1. **Prepare your files**
   - Create a ZIP file containing all the files
   - Ensure the directory structure is preserved

2. **Upload to GradeScope**
   - Go to the assignment page
   - Click "Upload Files"
   - Select your ZIP file
   - Click "Submit"

## Verification Checklist

Before submitting, ensure:

- [ ] All 6 C programs are present in `src/` directory
- [ ] All programs compile without errors
- [ ] README.md contains your name (Harsh Dalal) and GitHub username (xharshblizzx)
- [ ] Report.md is completed with program descriptions
- [ ] All files are properly committed to GitHub
- [ ] Repository is public and accessible

## Testing Your Submission

### Local Testing
1. **Install development environment** (see SETUP_INSTRUCTIONS.md)
2. **Compile all programs**:
   ```bash
   # On Windows
   compile.bat
   
   # On Unix/Linux/macOS
   make all
   ```
3. **Test each program**:
   ```bash
   # Run individual programs
   bin/hello_world.exe
   bin/variables_and_types.exe
   # etc.
   ```

### Online Testing
If you can't install a compiler locally, use online compilers:
- Copy and paste each program into https://www.onlinegdb.com/online_c_compiler
- Test compilation and basic functionality

## Troubleshooting

### Common Issues:
1. **"Repository not found"**: Ensure the repository is public
2. **"Permission denied"**: Check GitHub account permissions
3. **"Compilation errors"**: Verify all source files are present and syntactically correct

### Getting Help:
- Check the SETUP_INSTRUCTIONS.md for development environment issues
- Review the instructions/README.md for assignment requirements
- Contact your instructor or TA if you encounter persistent issues

## Important Notes

- **Deadline**: Submit before the assignment deadline
- **Resubmissions**: You can resubmit multiple times before the deadline
- **File Size**: Ensure total submission is under GradeScope's file size limit
- **Format**: All C files should have proper .c extension
- **Comments**: All code includes proper comments and documentation

## Final Steps

1. Double-check all files are in your GitHub repository
2. Test compilation locally or online
3. Submit to GradeScope using your preferred method
4. Verify submission confirmation
5. Keep a backup of your work

Good luck with your submission!
