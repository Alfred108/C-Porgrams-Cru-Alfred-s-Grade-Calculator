@echo off
echo ==========================================
echo    ALFRED'S GRADE CALCULATOR BUILD
echo ==========================================
echo.

call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat"
cl /Zi /EHsc alfreds_grade_calculator.cpp /Fe:alfreds_grade_calculator.exe

if %ERRORLEVEL% EQU 0 (
    echo.
    echo ==========================================
    echo           BUILD SUCCESSFUL!
    echo ==========================================
    echo.
    echo Running Alfred's Grade Calculator...
    echo.
    alfreds_grade_calculator.exe
) else (
    echo.
    echo ==========================================
    echo             BUILD FAILED!
    echo ==========================================
    echo Please check for compilation errors.
)
echo.
pause
