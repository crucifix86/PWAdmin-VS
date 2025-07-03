#!/bin/bash

echo "Building pwAdmin Server as standalone executable..."
echo "This will create a fully self-contained binary that doesn't require .NET runtime"
echo ""

# Clean previous builds
rm -rf bin obj

# Restore packages
dotnet restore

# Build release version
dotnet build -c Release

# Publish as single file for Linux x64 - fully self-contained
dotnet publish -c Release \
  -r linux-x64 \
  --self-contained true \
  -p:PublishSingleFile=true \
  -p:PublishTrimmed=true \
  -p:PublishReadyToRun=true \
  -p:IncludeNativeLibrariesForSelfExtract=true \
  -p:EnableCompressionInSingleFile=true \
  -p:StripSymbols=true \
  -p:DebugType=none

echo ""
echo "Build complete!"
echo "Binary location: bin/Release/net8.0/linux-x64/publish/pwadmin-server"
echo ""

# Check file size
if [ -f "bin/Release/net8.0/linux-x64/publish/pwadmin-server" ]; then
    SIZE=$(ls -lh bin/Release/net8.0/linux-x64/publish/pwadmin-server | awk '{print $5}')
    echo "Standalone binary size: $SIZE"
    echo "This binary includes the entire .NET runtime and all dependencies"
fi

echo ""
echo "To install on your server:"
echo "1. Copy pwadmin-server to /usr/local/bin/"
echo "   scp bin/Release/net8.0/linux-x64/publish/pwadmin-server user@server:/usr/local/bin/"
echo "2. Copy pwadmin.conf to /etc/"
echo "   scp pwadmin.conf user@server:/etc/"
echo "3. Copy pwadmin.service to /etc/systemd/system/"
echo "   scp pwadmin.service user@server:/etc/systemd/system/"
echo "4. Make executable: chmod +x /usr/local/bin/pwadmin-server"
echo "5. Run: systemctl daemon-reload"
echo "6. Run: systemctl enable pwadmin"
echo "7. Run: systemctl start pwadmin"
echo ""
echo "NOTE: No .NET runtime installation required on the target server!"