# Alfred's Grade Calculator

A professional C++ application for calculating Grade Point Average (GPA) with input validation and user-friendly interface.

## Features

- **Professional Interface**: Clean, branded user interface with Alfred's Grade Calculator branding
- **Input Validation**: Ensures grades are between 0.0-4.0 and credit hours are positive
- **Error Handling**: Graceful handling of invalid input with helpful error messages
- **Detailed Results**: Shows comprehensive GPA calculation summary
- **Multiple Courses**: Supports up to 5 courses for GPA calculation

## Requirements

- Windows 10/11
- Microsoft Visual Studio Build Tools 2022 (already installed on your system)
- Visual Studio Code (for development)

## How to Run

### Method 1: Using the Build Script
1. Open Command Prompt or PowerShell
2. Navigate to the project folder: `cd "Alfred's Grade Calculator"`
3. Run the build script: `.\build.bat`

### Method 2: Using Visual Studio Code
1. Open the project folder in VS Code
2. Press `Ctrl+Shift+P` and select "Tasks: Run Task" → "build"
3. Or press `F5` to debug the application

### Method 3: Manual Compilation
```cmd
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat"
cl /Zi /EHsc alfreds_grade_calculator.cpp /Fe:alfreds_grade_calculator.exe
alfreds_grade_calculator.exe
```

## Usage

1. Enter the student's name and family name
2. For each course (up to 5):
   - Enter the course title
   - Enter the credit hours (must be positive)
   - Enter the grade (must be 0.0-4.0)
3. View the calculated GPA and summary

## Grade Scale

- 4.0 = A (Excellent)
- 3.0 = B (Good)
- 2.0 = C (Average)
- 1.0 = D (Below Average)
- 0.0 = F (Failing)

## File Structure

```
Alfred's Grade Calculator/
├── alfreds_grade_calculator.cpp    # Main source code
├── build.bat                       # Build and run script
├── .vscode/
│   ├── tasks.json                  # VS Code build tasks
│   └── launch.json                 # VS Code debug configuration
└── README.md                       # This file
```

## Version

v1.0 - Initial release with full functionality

## Developer

Created by Alfred Arriola From Code Serenity - Professional Grade Calculator Application
