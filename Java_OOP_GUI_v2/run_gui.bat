@echo off
echo ===========================================
echo   Java OOP Student Management System v2
echo ===========================================
echo Starting GUI application...
cd /d "%~dp0"
javaw StudentManagementGUI
if %errorlevel% neq 0 (
    echo Error starting GUI. Trying console mode...
    java StudentManagementGUI
    pause
)
echo GUI application closed.