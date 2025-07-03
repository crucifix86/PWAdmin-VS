# pwAdmin Server Daemon

A Linux server daemon for pwAdmin that handles communication between the Windows client and Perfect World game servers.

## Features

- TCP server for client connections
- Protocol handling for various game server operations
- Memory and process monitoring
- MySQL database integration
- Forwarding requests to game servers (GDelivery, GameDBD, etc.)
- System command execution
- Configuration via INI file

## Requirements

- .NET 8.0 Runtime on Linux
- MySQL/MariaDB server
- Perfect World game server components

## Building

```bash
cd pwAdmin.Server
dotnet build -c Release
dotnet publish -c Release -r linux-x64
```

## Installation

1. Copy the published binary to your server:
```bash
scp bin/Release/net8.0/linux-x64/publish/pwadmin-server user@server:/usr/local/bin/
```

2. Copy the configuration file:
```bash
scp pwadmin.conf user@server:/etc/pwadmin.conf
```

3. Edit the configuration file to match your server setup:
```bash
nano /etc/pwadmin.conf
```

4. Create a systemd service file `/etc/systemd/system/pwadmin.service`:
```ini
[Unit]
Description=pwAdmin Server Daemon
After=network.target mysql.service

[Service]
Type=notify
ExecStart=/usr/local/bin/pwadmin-server start
ExecStop=/usr/local/bin/pwadmin-server stop
Restart=on-failure
User=pwserver
WorkingDirectory=/root/pwserver

[Install]
WantedBy=multi-user.target
```

5. Enable and start the service:
```bash
systemctl daemon-reload
systemctl enable pwadmin
systemctl start pwadmin
```

## Usage

### Command Line
```bash
# Start the daemon
pwadmin-server start

# Stop the daemon
pwadmin-server stop

# Check status
pwadmin-server status
```

### Systemd
```bash
# Start service
systemctl start pwadmin

# Stop service
systemctl stop pwadmin

# Check status
systemctl status pwadmin

# View logs
journalctl -u pwadmin -f
```

## Configuration

Edit `/etc/pwadmin.conf` to configure:

- Server port and authentication
- MySQL database connection
- Game server IPs and ports
- File paths and logging

## Protocol Support

The server implements the following operations:

- Memory and process monitoring
- User account management
- GM privilege management
- Game attribute control
- Chat broadcasting
- Role data management
- Faction information
- Instance management

## Security

- Use a strong password in the configuration
- Restrict MySQL user permissions
- Run the service as a non-root user
- Configure firewall to limit access to the port

## Troubleshooting

1. Check logs:
```bash
tail -f pwadmin.log
journalctl -u pwadmin -f
```

2. Verify configuration:
```bash
pwadmin-server status
```

3. Test connectivity:
```bash
telnet localhost 630
```

## License

This software is provided as-is for use with Perfect World game servers.