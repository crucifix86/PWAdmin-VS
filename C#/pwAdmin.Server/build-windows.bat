@echo off
REM Batch file to build standalone Linux executable from Windows

echo ===============================================================
echo   pwAdmin Server - Windows Build for Linux Deployment
echo ===============================================================
echo.
echo This creates a standalone Linux executable from Windows
echo No .NET runtime required on the target Linux server!
echo.

REM Clean
echo Cleaning previous builds...
rmdir /s /q bin 2>nul
rmdir /s /q obj 2>nul

REM Restore
echo Restoring packages...
dotnet restore -r linux-x64

REM Build
echo Building standalone Linux executable...
dotnet publish -c Release ^
    -r linux-x64 ^
    --self-contained true ^
    -p:PublishSingleFile=true ^
    -p:PublishTrimmed=true ^
    -p:PublishReadyToRun=true ^
    -p:IncludeNativeLibrariesForSelfExtract=true ^
    -p:EnableCompressionInSingleFile=true ^
    -p:DebugType=none

echo.
echo ===============================================================
echo   Build Complete!
echo ===============================================================
echo.

if exist "bin\Release\net8.0\linux-x64\publish\pwadmin-server" (
    echo Binary location: bin\Release\net8.0\linux-x64\publish\pwadmin-server
    echo.
    echo To deploy to your Linux server:
    echo 1. Use WinSCP or similar to copy pwadmin-server to your server
    echo 2. Make it executable: chmod +x pwadmin-server
    echo 3. See SETUP.md for configuration instructions
) else (
    echo Build failed - binary not found
    exit /b 1
)

pause