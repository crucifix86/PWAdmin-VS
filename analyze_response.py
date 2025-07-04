#!/usr/bin/env python3
import struct

# The hex data from the server response (after the 5-byte header)
hex_data = """02-05-4C-6F-63-61-6C-00-76-02-00-00-05-2F-68-6F-6D-65-02-67-73-13-24-48-4F-4D-45-24-67-61-6D-65-64-2F-67-73-2E-63-6F-6E-66-0B-24-48-4F-4D-45-24-67-61-6D-65-64-01-00-00-00-01-00-00-00-01-00-00-00-07-30-5F-30-2E-64-64-73-96-00-00-00-0A-24-48-4F-4D-45-24-6C-6F-67-73-9C-00-00-00-14-2F-76-61-72-2F-72-75-6E-2F-70-77-61-64-6D-69-6E-2E-70-69-64-05-00-00-00-02-00-00-00-C8-00-00-00-C8-00-00-00-90-01-00-00-00-00-00-00-08-6E-6F-68-75-70-20-25-73-0C-24-48-4F-4D-45-24-62-61-63-6B-75-70-0C-24-48-4F-4D-45-24-62-61-63-6B-75-70-01-00-00-00-05-61-64-6D-69-6E-0D-4F-76-55-39-34-69-4C-67-39-39-41-42-39-EA-0C-00-00-02-70-77-09-31-32-37-2E-30-2E-30-2E-31-09-31-32-37-2E-30-2E-30-2E-31-AC-71-00-00-74-72-00-00-09-31-32-37-2E-30-2E-30-2E-31-D8-72-00-00-09-31-32-37-2E-30-2E-30-2E-31-D9-72-00-00"""

# Convert to bytes
data = bytes.fromhex(hex_data.replace('-', ''))
pos = 0

def read_compact_uint32(data, pos):
    """Read a compact uint32 from the data"""
    b = data[pos]
    pos += 1
    
    if (b & 0x80) == 0:
        return b, pos
    elif (b & 0xc0) == 0x80:
        return ((b & 0x3f) << 8) | data[pos], pos + 1
    elif (b & 0xe0) == 0xc0:
        return ((b & 0x1f) << 16) | (data[pos] << 8) | data[pos + 1], pos + 2
    elif (b & 0xf0) == 0xe0:
        return ((b & 0x0f) << 24) | (data[pos] << 16) | (data[pos + 1] << 8) | data[pos + 2], pos + 3
    else:
        return (data[pos] << 24) | (data[pos + 1] << 16) | (data[pos + 2] << 8) | data[pos + 3], pos + 4

def read_string_with_compact_length(data, pos):
    """Read a string that uses compact uint32 for length"""
    length, pos = read_compact_uint32(data, pos)
    if length == 0:
        return "", pos
    string_data = data[pos:pos+length]
    return string_data.decode('utf-8', errors='replace'), pos + length

def read_string_with_byte_length(data, pos):
    """Read a string that uses a single byte for length"""
    length = data[pos]
    pos += 1
    if length == 0:
        return "", pos
    string_data = data[pos:pos+length]
    return string_data.decode('utf-8', errors='replace'), pos + length

def read_int32(data, pos):
    """Read a big-endian int32"""
    return struct.unpack('>I', data[pos:pos+4])[0], pos + 4

print("Analyzing server response data...")
print(f"Total data length: {len(data)} bytes")
print()

# Try to parse the data based on the expected ServerConfig structure
try:
    # Skip the first byte (0x02) - might be a protocol version or flag
    print(f"First byte: 0x{data[pos]:02x}")
    pos += 1
    
    # ServName - try compact length first
    print(f"\nTrying to read ServName with compact length...")
    print(f"Byte at pos {pos}: 0x{data[pos]:02x} ({data[pos]})")
    
    # This looks like a regular byte length (0x05 = 5)
    servname, pos = read_string_with_byte_length(data, pos)
    print(f"ServName: '{servname}' (pos now: {pos})")
    
    # Password - the next byte is 0x00, indicating empty string
    print(f"\nByte at pos {pos}: 0x{data[pos]:02x}")
    password, pos = read_string_with_byte_length(data, pos)
    print(f"Password: '{password}' (pos now: {pos})")
    
    # Port - should be an int32
    port, pos = read_int32(data, pos)
    print(f"\nPort: {port} (pos now: {pos})")
    
    # HomePath
    print(f"\nByte at pos {pos}: 0x{data[pos]:02x} ({data[pos]})")
    homepath, pos = read_string_with_byte_length(data, pos)
    print(f"HomePath: '{homepath}' (pos now: {pos})")
    
    # GsName
    print(f"\nByte at pos {pos}: 0x{data[pos]:02x} ({data[pos]})")
    gsname, pos = read_string_with_byte_length(data, pos)
    print(f"GsName: '{gsname}' (pos now: {pos})")
    
    # GsConfPath
    print(f"\nByte at pos {pos}: 0x{data[pos]:02x} ({data[pos]})")
    gsconfpath, pos = read_string_with_byte_length(data, pos)
    print(f"GsConfPath: '{gsconfpath}' (pos now: {pos})")
    
    # GsPath
    print(f"\nByte at pos {pos}: 0x{data[pos]:02x} ({data[pos]})")
    gspath, pos = read_string_with_byte_length(data, pos)
    print(f"GsPath: '{gspath}' (pos now: {pos})")
    
    # Next few int32s
    aid, pos = read_int32(data, pos)
    print(f"\nAid: {aid}")
    
    zoneid, pos = read_int32(data, pos)
    print(f"ZoneId: {zoneid}")
    
    servid, pos = read_int32(data, pos)
    print(f"ServId: {servid}")
    
    print(f"\nPosition after basic fields: {pos}")
    print(f"Remaining bytes: {len(data) - pos}")
    print(f"Next 20 bytes: {data[pos:pos+20].hex()}")
    
    # Continue parsing all fields to see where we run out of data
    fields = [
        ("DefaultIcon", "string"),
        ("LogRowCount", "int32"),
        ("LogPath", "string"),
        ("ServerVersion", "int32"),
        ("PidFile", "string"),
        ("PauseStartInstanceFixed", "int32"),
        ("PauseStartPerInstance", "int32"),
        ("MaxChatRow", "int32"),
        ("MaxFormatLogRow", "int32"),
        ("MaxWorld2LogRow", "int32"),
        ("AuthDType", "int32"),
        ("ShellAdd", "string"),
        ("GameBackupPath", "string"),
        ("MysqlBackupPath", "string"),
        ("MysqlBackupType", "int32"),
        ("MysqlUser", "string"),
        ("MysqlPass", "string"),
        ("MysqlPort", "int32"),
        ("MysqlBase", "string"),
        ("MysqlHost", "string"),
        ("GDeliveryIp", "string"),
        ("GDeliveryPort", "int32"),
        ("GProviderPort", "int32"),
        ("GameDbdIp", "string"),
        ("GameDbdPort", "int32"),
        ("UniquenamedIp", "string"),
        ("UniquenamedPort", "int32"),
    ]
    
    for field_name, field_type in fields:
        try:
            if field_type == "string":
                value, pos = read_string_with_byte_length(data, pos)
                print(f"{field_name}: '{value}'")
            elif field_type == "int32":
                value, pos = read_int32(data, pos)
                print(f"{field_name}: {value}")
            print(f"  Position now: {pos}, remaining: {len(data) - pos}")
        except Exception as e:
            print(f"\nFailed at field '{field_name}' (position {pos})")
            print(f"Error: {e}")
            print(f"Remaining bytes: {len(data) - pos}")
            if len(data) - pos > 0:
                print(f"Next bytes: {data[pos:min(pos+20, len(data))].hex()}")
            break
    
except Exception as e:
    print(f"\nError at position {pos}: {e}")
    print(f"Data around position: {data[max(0,pos-10):pos+10].hex()}")