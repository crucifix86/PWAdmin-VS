#!/bin/bash

echo "Building pwAdmin Server..."

# Clean previous builds
rm -rf bin obj

# Restore packages
dotnet restore

# Build release version
dotnet build -c Release

# Publish as single file for Linux x64
dotnet publish -c Release -r linux-x64 --self-contained true -p:PublishSingleFile=true -p:PublishTrimmed=true -p:PublishReadyToRun=true

echo "Build complete!"
echo "Binary location: bin/Release/net8.0/linux-x64/publish/pwadmin-server"
echo ""
echo "To install on your server:"
echo "1. Copy pwadmin-server to /usr/local/bin/"
echo "2. Copy pwadmin.conf to /etc/"
echo "3. Copy pwadmin.service to /etc/systemd/system/"
echo "4. Run: systemctl daemon-reload"
echo "5. Run: systemctl enable pwadmin"
echo "6. Run: systemctl start pwadmin"