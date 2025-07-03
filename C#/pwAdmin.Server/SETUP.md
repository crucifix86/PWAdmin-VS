# pwAdmin Server Daemon Setup Guide

This guide will help you set up the pwAdmin server daemon on your Linux server to handle communication between the Windows client and Perfect World game servers.

## Prerequisites

- Linux server (Ubuntu/Debian recommended)
- .NET 8.0 Runtime
- MySQL/MariaDB server
- Perfect World server files already installed
- Root or sudo access

## Quick Start

### 1. Install .NET 8.0 Runtime

For Ubuntu/Debian:
```bash
wget https://packages.microsoft.com/config/ubuntu/$(lsb_release -rs)/packages-microsoft-prod.deb -O packages-microsoft-prod.deb
sudo dpkg -i packages-microsoft-prod.deb
rm packages-microsoft-prod.deb
sudo apt-get update
sudo apt-get install -y dotnet-runtime-8.0
```

For other distributions, see: https://dotnet.microsoft.com/download/dotnet/8.0

### 2. Build the Server

On your development machine:
```bash
cd C#/pwAdmin.Server
./build.sh
```

This creates a self-contained Linux binary at:
`bin/Release/net8.0/linux-x64/publish/pwadmin-server`

### 3. Deploy to Server

Copy files to your server:
```bash
# Copy the binary
scp bin/Release/net8.0/linux-x64/publish/pwadmin-server root@yourserver:/usr/local/bin/

# Copy configuration files
scp pwadmin.conf root@yourserver:/etc/
scp processes_config.ini root@yourserver:/etc/

# Copy systemd service
scp pwadmin.service root@yourserver:/etc/systemd/system/

# Make binary executable
ssh root@yourserver chmod +x /usr/local/bin/pwadmin-server
```

### 4. Configure the Server

Edit `/etc/pwadmin.conf` on your server:

```ini
[General]
# IMPORTANT: Change these values to match your setup
servname = YourServerName
password = YourSecurePasswordHash
port = 630
homepath = /home/pwserver  # Your PW server directory

[Mysql]
# Your MySQL connection details
user = root
pass = yourpassword
host = 127.0.0.1
port = 3306
base = pw  # Your PW database name

[GDelivery]
# Game server IPs and ports
ip = 127.0.0.1
port = 29100
provider_port = 29300

[GameDBD]
ip = 127.0.0.1
port = 29400
```

### 5. Create Service User (Optional but Recommended)

```bash
# Create a dedicated user for the service
sudo useradd -r -s /bin/false pwserver
sudo chown pwserver:pwserver /usr/local/bin/pwadmin-server
```

### 6. Start the Service

```bash
# Reload systemd
sudo systemctl daemon-reload

# Enable auto-start on boot
sudo systemctl enable pwadmin

# Start the service
sudo systemctl start pwadmin

# Check status
sudo systemctl status pwadmin
```

## Configuration Details

### pwadmin.conf Settings

#### [General] Section
- `servname`: Display name for your server
- `password`: MD5 hash of connection password (leave empty to set on first connection)
- `port`: TCP port for client connections (default: 630)
- `homepath`: Base directory of your Perfect World server
- `pidfile`: Location of PID file (default: /var/run/pwadmin.pid)
- `ServerVersion`: Protocol version (156 for 1.5.x servers)

#### [Mysql] Section
- Configure your MySQL/MariaDB connection
- The `base` parameter should match your PW database name

#### Game Server Connections
- `[GDelivery]`: gdeliveryd connection settings
- `[GameDBD]`: gamedbd connection settings
- `[Uniquenamed]`: uniquenamed connection settings

### Firewall Configuration

Allow the daemon port through your firewall:

```bash
# For ufw (Ubuntu/Debian)
sudo ufw allow 630/tcp

# For firewalld (CentOS/RHEL)
sudo firewall-cmd --permanent --add-port=630/tcp
sudo firewall-cmd --reload
```

### Security Recommendations

1. **Use a Strong Password**: Set a secure password hash in the config
2. **Restrict Access**: Only allow connections from trusted IPs
3. **Run as Non-Root**: Use the pwserver user instead of root
4. **MySQL Permissions**: Create a dedicated MySQL user with minimal permissions:

```sql
CREATE USER 'pwadmin'@'localhost' IDENTIFIED BY 'secure_password';
GRANT SELECT, INSERT, UPDATE ON pw.* TO 'pwadmin'@'localhost';
FLUSH PRIVILEGES;
```

## Client Configuration

On your Windows client, configure the connection:

1. Open pwAdmin client
2. Go to Settings → Server Settings
3. Enter your server IP and port (630)
4. Save and connect

## Troubleshooting

### Check Logs
```bash
# Service logs
sudo journalctl -u pwadmin -f

# Application logs
tail -f /root/pwserver/pwadmin.log
```

### Common Issues

1. **Connection Refused**
   - Check if service is running: `systemctl status pwadmin`
   - Verify firewall settings
   - Check port is not in use: `netstat -tlnp | grep 630`

2. **MySQL Connection Failed**
   - Verify MySQL credentials
   - Check if MySQL is running
   - Test connection: `mysql -u root -p pw`

3. **Permission Denied**
   - Check file permissions
   - Ensure service user has access to PW server directory

### Manual Testing
```bash
# Test the daemon manually
/usr/local/bin/pwadmin-server status

# Test network connectivity
telnet localhost 630
```

## Advanced Configuration

### Running Multiple Instances

To run multiple pwAdmin daemons for different servers:

1. Create separate config files: `/etc/pwadmin-server1.conf`, `/etc/pwadmin-server2.conf`
2. Create separate service files with different names
3. Use different ports for each instance

### Integration with Monitoring

The daemon can be monitored with standard tools:
- Nagios/Zabbix: Monitor port 630
- Prometheus: Export metrics endpoint (future feature)
- systemd: Built-in restart on failure

## Support

For issues or questions:
1. Check the logs first
2. Ensure all game servers are running
3. Verify network connectivity
4. Report issues at: https://github.com/yourusername/PWAdmin-VS/issues