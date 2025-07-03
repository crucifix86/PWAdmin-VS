#!/bin/bash

# Build script for creating a fully standalone pwAdmin server daemon
# This creates a single executable file that includes the .NET runtime
# No .NET installation required on the target server!

set -e

echo "═══════════════════════════════════════════════════════════════"
echo "  pwAdmin Server - Standalone Build"
echo "═══════════════════════════════════════════════════════════════"
echo ""
echo "This script creates a fully self-contained Linux executable"
echo "that includes the .NET runtime and all dependencies."
echo ""

# Detect architecture
ARCH=$(uname -m)
if [ "$ARCH" = "x86_64" ]; then
    RID="linux-x64"
elif [ "$ARCH" = "aarch64" ]; then
    RID="linux-arm64"
else
    echo "Unsupported architecture: $ARCH"
    exit 1
fi

echo "Building for: $RID"
echo ""

# Clean
echo "→ Cleaning previous builds..."
rm -rf bin obj

# Restore
echo "→ Restoring packages..."
dotnet restore -r $RID

# Build configurations for different server types
echo ""
echo "Select build configuration:"
echo "1) Standard (recommended) - Optimized for most servers"
echo "2) Minimal - Smallest possible size, may be slower"
echo "3) Performance - Larger size, fastest execution"
echo ""
read -p "Enter choice (1-3): " choice

case $choice in
    1)
        echo "→ Building Standard configuration..."
        dotnet publish -c Release \
            -r $RID \
            --self-contained true \
            -p:PublishSingleFile=true \
            -p:PublishTrimmed=true \
            -p:PublishReadyToRun=true \
            -p:IncludeNativeLibrariesForSelfExtract=true \
            -p:EnableCompressionInSingleFile=true \
            -p:DebugType=none
        ;;
    2)
        echo "→ Building Minimal configuration..."
        dotnet publish -c Release \
            -r $RID \
            --self-contained true \
            -p:PublishSingleFile=true \
            -p:PublishTrimmed=true \
            -p:TrimMode=full \
            -p:PublishReadyToRun=false \
            -p:IncludeNativeLibrariesForSelfExtract=true \
            -p:EnableCompressionInSingleFile=true \
            -p:DebugType=none \
            -p:StripSymbols=true
        ;;
    3)
        echo "→ Building Performance configuration..."
        dotnet publish -c Release \
            -r $RID \
            --self-contained true \
            -p:PublishSingleFile=true \
            -p:PublishTrimmed=false \
            -p:PublishReadyToRun=true \
            -p:IncludeNativeLibrariesForSelfExtract=true \
            -p:EnableCompressionInSingleFile=false \
            -p:DebugType=none
        ;;
    *)
        echo "Invalid choice"
        exit 1
        ;;
esac

echo ""
echo "═══════════════════════════════════════════════════════════════"
echo "  Build Complete!"
echo "═══════════════════════════════════════════════════════════════"
echo ""

# Display results
BINARY="bin/Release/net8.0/$RID/publish/pwadmin-server"
if [ -f "$BINARY" ]; then
    SIZE=$(ls -lh "$BINARY" | awk '{print $5}')
    echo "✓ Binary location: $BINARY"
    echo "✓ Binary size: $SIZE"
    echo "✓ Architecture: $RID"
    echo "✓ Self-contained: YES"
    echo "✓ .NET Runtime required: NO"
    
    # Create deployment package
    echo ""
    echo "→ Creating deployment package..."
    mkdir -p deploy
    cp "$BINARY" deploy/
    cp pwadmin.conf deploy/pwadmin.conf.example
    cp pwadmin.service deploy/
    cp processes_config.ini deploy/processes_config.ini.example
    
    # Create deployment README
    cat > deploy/README.txt << 'EOF'
pwAdmin Server - Standalone Deployment
======================================

This is a fully self-contained executable that includes the .NET runtime.
No additional software installation is required on your server.

Files included:
- pwadmin-server: The main executable
- pwadmin.conf.example: Example configuration file
- pwadmin.service: systemd service file
- processes_config.ini.example: Example process configuration

Quick deployment:
1. Copy pwadmin-server to /usr/local/bin/
2. Copy pwadmin.conf.example to /etc/pwadmin.conf and edit
3. Copy pwadmin.service to /etc/systemd/system/
4. chmod +x /usr/local/bin/pwadmin-server
5. systemctl daemon-reload
6. systemctl enable --now pwadmin

Test the binary:
./pwadmin-server status
EOF
    
    # Create tarball
    TARBALL="pwadmin-server-$RID-standalone.tar.gz"
    cd deploy
    tar czf "../$TARBALL" *
    cd ..
    
    echo "✓ Deployment package: $TARBALL"
    echo ""
    echo "To deploy on your server:"
    echo "1. scp $TARBALL user@server:/tmp/"
    echo "2. ssh user@server"
    echo "3. cd /tmp && tar xzf $TARBALL"
    echo "4. sudo cp pwadmin-server /usr/local/bin/"
    echo "5. sudo chmod +x /usr/local/bin/pwadmin-server"
    echo "6. Follow instructions in README.txt"
else
    echo "✗ Build failed - binary not found"
    exit 1
fi