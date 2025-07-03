# PowerShell build script for Windows
# This creates a standalone Linux executable from Windows

Write-Host "═══════════════════════════════════════════════════════════════" -ForegroundColor Cyan
Write-Host "  pwAdmin Server - Windows Build for Linux Deployment" -ForegroundColor Cyan
Write-Host "═══════════════════════════════════════════════════════════════" -ForegroundColor Cyan
Write-Host ""
Write-Host "This script builds a standalone Linux executable from Windows"
Write-Host "No .NET runtime required on the target Linux server!"
Write-Host ""

# Clean
Write-Host "→ Cleaning previous builds..." -ForegroundColor Yellow
Remove-Item -Path "bin", "obj" -Recurse -Force -ErrorAction SilentlyContinue

# Restore
Write-Host "→ Restoring packages..." -ForegroundColor Yellow
dotnet restore -r linux-x64

# Build
Write-Host "→ Building standalone Linux executable..." -ForegroundColor Yellow
dotnet publish -c Release `
    -r linux-x64 `
    --self-contained true `
    -p:PublishSingleFile=true `
    -p:PublishTrimmed=true `
    -p:PublishReadyToRun=true `
    -p:IncludeNativeLibrariesForSelfExtract=true `
    -p:EnableCompressionInSingleFile=true `
    -p:DebugType=none

Write-Host ""
Write-Host "═══════════════════════════════════════════════════════════════" -ForegroundColor Green
Write-Host "  Build Complete!" -ForegroundColor Green
Write-Host "═══════════════════════════════════════════════════════════════" -ForegroundColor Green
Write-Host ""

# Check if build succeeded
$binary = "bin\Release\net8.0\linux-x64\publish\pwadmin-server"
if (Test-Path $binary) {
    $size = (Get-Item $binary).Length / 1MB
    Write-Host "✓ Binary location: $binary" -ForegroundColor Green
    Write-Host "✓ Binary size: $([math]::Round($size, 2)) MB" -ForegroundColor Green
    Write-Host "✓ Target OS: Linux x64" -ForegroundColor Green
    Write-Host "✓ Self-contained: YES" -ForegroundColor Green
    Write-Host "✓ .NET Runtime required: NO" -ForegroundColor Green
    
    Write-Host ""
    Write-Host "To deploy to your Linux server:" -ForegroundColor Cyan
    Write-Host "1. Copy the binary to your server:"
    Write-Host "   scp $binary user@server:/tmp/" -ForegroundColor Yellow
    Write-Host ""
    Write-Host "2. SSH to your server and install:"
    Write-Host "   ssh user@server" -ForegroundColor Yellow
    Write-Host "   sudo mv /tmp/pwadmin-server /usr/local/bin/" -ForegroundColor Yellow
    Write-Host "   sudo chmod +x /usr/local/bin/pwadmin-server" -ForegroundColor Yellow
    Write-Host ""
    Write-Host "3. Copy configuration files and start service"
    Write-Host "   (See SETUP.md for details)" -ForegroundColor Yellow
} else {
    Write-Host "✗ Build failed - binary not found" -ForegroundColor Red
    exit 1
}