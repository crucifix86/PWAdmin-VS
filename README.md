# PWAdmin-VS

A comprehensive administration tool for Perfect World private servers, featuring both Windows client and Linux server components.

## Features

- **Windows Client** (.NET 8.0 Windows Forms)
  - Modern dark-themed UI
  - Server management and monitoring
  - Account and character administration
  - Real-time server statistics
  - GM privilege management
  - Multi-language support (English)

- **Linux Server Daemon** (.NET 8.0)
  - Handles client-server communication
  - Forwards requests to game servers
  - MySQL database integration
  - Process and memory monitoring
  - Systemd service support

## Project Structure

```
PWAdmin-VS/
├── C#/
│   ├── pwAdmin - Cliente 2/     # Windows client application
│   └── pwAdmin.Server/          # Linux server daemon
├── Qt5 C++/                     # Original Qt5 reference implementation
└── README.md
```

## Quick Start

### Windows Client

1. Open `C#/pwAdmin - Cliente 2/pwAdmin - Cliente by Alien.csproj` in Visual Studio 2022
2. Build and run the application
3. Configure server connection in Settings

### Linux Server Daemon

1. Navigate to `C#/pwAdmin.Server/`
2. Run `./build.sh` to build the daemon
3. Follow the setup instructions in `C#/pwAdmin.Server/SETUP.md`

## Requirements

### Client
- Windows 10/11
- .NET 8.0 Desktop Runtime
- Visual Studio 2022 (for development)

### Server
- Linux (Ubuntu/Debian recommended)
- .NET 8.0 Runtime
- MySQL/MariaDB
- Perfect World server installation

## Installation

### Server Daemon Quick Setup

```bash
# Build
cd C#/pwAdmin.Server
./build.sh

# Deploy to server
scp bin/Release/net8.0/linux-x64/publish/pwadmin-server root@server:/usr/local/bin/
scp pwadmin.conf root@server:/etc/
scp pwadmin.service root@server:/etc/systemd/system/

# Start service
ssh root@server systemctl enable --now pwadmin
```

See `C#/pwAdmin.Server/SETUP.md` for detailed instructions.

## Configuration

### Client Settings
- Server IP and port
- Client file paths (elements.data, PCK files)
- Profile management

### Server Configuration (`/etc/pwadmin.conf`)
- Server connection settings
- MySQL database credentials
- Game server IPs and ports
- Security settings

## Development

### Building from Source

#### Windows Client
```bash
cd "C#/pwAdmin - Cliente 2"
dotnet build
```

#### Linux Server
```bash
cd C#/pwAdmin.Server
./build.sh
```

### Contributing

1. Fork the repository
2. Create a feature branch
3. Commit your changes
4. Push to the branch
5. Create a Pull Request

## Security

- Always use strong passwords for server connections
- Restrict server daemon access by IP
- Run the daemon as a non-root user
- Keep your Perfect World server files secure

## Troubleshooting

### Client Issues
- Ensure .NET 8.0 Desktop Runtime is installed
- Check firewall settings
- Verify server connection details

### Server Issues
- Check logs: `journalctl -u pwadmin -f`
- Verify all game servers are running
- Test MySQL connection
- Ensure correct file permissions

## License

This project is provided as-is for use with Perfect World private servers.

## Acknowledgments

- Original Qt5 C++ implementation for reference
- Perfect World community for protocol documentation

## Support

For issues, questions, or contributions, please use the GitHub issue tracker.

---

**Note**: This tool is intended for legitimate server administration only. Please ensure you have the proper rights to administer any servers you connect to.