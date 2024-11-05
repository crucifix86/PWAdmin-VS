#ifndef __OCTETSSTREAM__
#define __OCTETSSTREAM__
#include <sstream>
#include <vector>
#include <cstdint>
#include <iostream>
#include <type_traits>
#include <cstring>
#include <thread>
#include <chrono>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <unistd.h>
#include "Octets.h"
#include "../color.h"

namespace GNET
{
    class OctetsStream : public Octets
    {
    public:
        vector<uint8_t> data;
        ostringstream *os;
        istringstream *is;
        bool le = true;

        OctetsStream() { init(); }
        OctetsStream(vector<uint8_t> _data) : data(_data) { init(); }

        // Construtor de c��pia
        OctetsStream(const OctetsStream &other) : Octets(other)
        {
            // Copiar ou reconstruir os membros, exceto os streams
            data = other.data;
            le = other.le;
            // Os streams n?o podem ser copiados, ent?o voc�� pode decidir como lidar com eles
        }

        // Operador de atribui??o
        OctetsStream &operator=(const OctetsStream &other)
        {
            if (this != &other)
            {
                Octets::operator=(other);
                data = other.data;
                le = other.le;
                // Lidar com os streams, se necess��rio
            }
            return *this;
        }

        template <typename T>
        T swapEndian(T u) const
        {
            union
            {
                T u;
                uint8_t u8[sizeof(T)];
            } source, dest;

            source.u = u;

            for (size_t k = 0; k < sizeof(T); k++)
                dest.u8[k] = source.u8[sizeof(T) - k - 1];

            return dest.u;
        }

        void init()
        {
            string strData(data.begin(), data.end());
            is = new istringstream(strData, ios::binary);
            os = new ostringstream(ios::binary);
        }

        OctetsStream SendTCP(string ip, int port, bool returnData = true)
        {
            int sock = 0;
            sockaddr_in serv_addr;

            sock = socket(AF_INET, SOCK_STREAM, 0);

            serv_addr.sin_family = AF_INET;
            serv_addr.sin_port = htons(port);
            inet_pton(AF_INET, ip.c_str(), &serv_addr.sin_addr);

            connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
            ssize_t bytesSent = send(sock, this->data.data(), this->data.size(), 0);
            if (bytesSent <= 0)
            {
                pmensagem(RED, "Erro ao enviar dados->");
            }
            if (returnData)
            {
                char buffer[16384] = {0};
                ssize_t bytesRead = 0;
                string response;
                bytesRead = recv(sock, buffer, sizeof(buffer), 0);
                string str(buffer, bytesRead);
                vector<uint8_t> vec(str.begin(), str.end());
                OctetsStream n(vec);
                close(sock);
                return n;
            }
            close(sock);
            return OctetsStream();
        }

#pragma region Read
        int8_t readInt8()
        {
            int8_t leValue;
            is->read(reinterpret_cast<char *>(&leValue), sizeof(leValue));
            return leValue;
        }
        int16_t readInt16()
        {
            int16_t leValue;
            is->read(reinterpret_cast<char *>(&leValue), sizeof(leValue));
            return le ? swapEndian(leValue) : leValue;
        }
        int32_t readInt32()
        {
            int32_t leValue;
            is->read(reinterpret_cast<char *>(&leValue), sizeof(leValue));
            return le ? swapEndian(leValue) : leValue;
        }
        int64_t readInt64()
        {
            int64_t leValue;
            is->read(reinterpret_cast<char *>(&leValue), sizeof(leValue));
            return le ? swapEndian(leValue) : leValue;
        }
        float readFloat()
        {
            float leValue;
            is->read(reinterpret_cast<char *>(&leValue), sizeof(leValue));
            return le ? swapEndian(leValue) : leValue;
        }
        double readDouble()
        {
            double leValue;
            is->read(reinterpret_cast<char *>(&leValue), sizeof(leValue));
            return le ? swapEndian(leValue) : leValue;
        }
        string readString()
        {
            auto lenght = uncompact_uint32();
            vector<char> buffer(lenght);
            is->read(buffer.data(), lenght);
            return string(buffer.begin(), buffer.end());
        }
        vector<uint8_t> readBytes(int begin, int lenght)
        {
            vector<char> buffer(lenght);
            is->read(buffer.data(), lenght);
            return vector<uint8_t>(buffer.begin() + begin, buffer.end());
        }
#pragma endregion

#pragma region Write
        void writeInt8(int8_t value)
        {
            int8_t leValue = le ? swapEndian(value) : value;
            os->write(reinterpret_cast<const char *>(&leValue), sizeof(leValue));
        }
        void writeInt16(int16_t value)
        {
            int16_t leValue = le ? swapEndian(value) : value;
            os->write(reinterpret_cast<const char *>(&leValue), sizeof(leValue));
        }
        void writeInt32(int32_t value)
        {
            int32_t leValue = le ? swapEndian(value) : value;
            os->write(reinterpret_cast<const char *>(&leValue), sizeof(leValue));
        }
        void writeInt64(int64_t value)
        {
            int64_t leValue = le ? swapEndian(value) : value;
            os->write(reinterpret_cast<const char *>(&leValue), sizeof(leValue));
        }
        void writeFloat(float value)
        {
            float leValue = swapEndian(value);
            os->write(reinterpret_cast<const char *>(&leValue), sizeof(leValue));
        }
        void writeDouble(double value)
        {
            double leValue = swapEndian(value);
            os->write(reinterpret_cast<const char *>(&leValue), sizeof(value));
        }
        void writeName(string value)
        {
            compact_uint32(value.size() * 2);
            for (size_t i = 0; i < value.size(); ++i)
            {
                os->write(&value[i], 1); // Escreva o caractere
                char null_byte = 0;
                os->write(&null_byte, 1); // Escreva um byte nulo ap?s cada caractere
            }
        }
        void writeString(string value)
        {
            compact_uint32(value.size());
            if (value != "")
                os->write(value.c_str(), value.size());
            // os->write(reinterpret_cast<const char *>(&value), sizeof(value));
        }
        void writeString2(string value)
        {
            int len = value.size() * 2;
            compact_uint32(len);
            for (size_t i = 0; i < len; ++i)
            {
                os->write(&value[i], 1); // Escreva o caractere
                char null_byte = 0;
                os->write(&null_byte, 1); // Escreva um byte nulo ap?s cada caractere
            }
        }
#pragma endregion

        uint32_t uncompact_uint32()
        {
            char byte = readInt8();
            switch (byte & 0xE0)
            {
            case 0xE0: // Adjusted from 0x0E to match the 3 most significant bits
                is->seekg(-1, ios::cur);
                return readInt32();
            case 0xC0:
                is->seekg(-1, ios::cur); // Go back one byte in the stream
                return readInt32() & 0x1FFFFFFF;
            case 0x80:
                is->seekg(-1, ios::cur);
                return readInt16() & 0x1FFF;
            /*case 0x40:
                is->seekg(-1, ios::cur); // Go back one byte in the stream
                return readInt32() & 0x0FFFFFFF;*/
            case 0xA0:
                is->seekg(-1, ios::cur); // Go back one byte in the stream
                return readInt16() & 0x3FFF;
            case 0x0:
                is->seekg(-1, ios::cur); // Go back one byte in the stream
                return readInt8() & 0xFF;
            default:
                return static_cast<uint32_t>(byte);
            }
        }

        void compact_uint32(uint32_t value)
        {
            if (value < 0x80)
                writeInt8(static_cast<uint8_t>(value));
            else if (value < 0x4000)
                writeInt16(static_cast<int16_t>(value | 0x8000));
            else if (value < 0x20000000)
                 writeInt32(static_cast<int32_t>(value | 0xc0000000));
        }

        vector<uint8_t> scompact_uint32(uint32_t value)
        {
            vector<uint8_t> out;
            ostringstream tempStream;

            if (value < 0x80)
                tempStream.write(reinterpret_cast<const char *>(&value), sizeof(int8_t));
            else if (value < 0x4000)
            {
                int16_t adjustedValue = static_cast<int16_t>(value | 0x8000);
                tempStream.write(reinterpret_cast<const char *>(&adjustedValue), sizeof(adjustedValue));
            }
            else if (value < 0x20000000)
            {
                int32_t adjustedValue = static_cast<int32_t>(value | 0xc0000000);
                tempStream.write(reinterpret_cast<const char *>(&adjustedValue), sizeof(adjustedValue));
            }

            string str = tempStream.str();
            // out.assign(str.begin(), str.end());
            out.insert(out.end(), str.begin(), str.end());

            return out;
        }

        void updateDataFromStream()
        {
            string s = os->str();
            data.insert(data.end(), s.begin(), s.end());
            os->str(""); // Clear the ostringstream
        }

        void Encode(uint opcode)
        {
            this->updateDataFromStream();
            OctetsStream os;
            os.compact_uint32(opcode);
            os.compact_uint32(data.size());
            os.os->write(reinterpret_cast<const char *>(data.data()), data.size());
            os.updateDataFromStream();
            this->data = os.data;
        }

        const OctetsStream &operator>>(char &value)
        {
            value = readInt8();
            return *this;
        }

        const OctetsStream &operator>>(uint8_t &value)
        {
            value = readInt8();
            return *this;
        }

        const OctetsStream &operator>>(int8_t &value)
        {
            value = readInt8();
            return *this;
        }

        const OctetsStream &operator>>(unsigned short &value)
        {
            value = readInt16();
            return *this;
        }

        const OctetsStream &operator>>(int16_t &value)
        {
            value = readInt16();
            return *this;
        }

        const OctetsStream &operator>>(unsigned int &value)
        {
            value = readInt32();
            return *this;
        }

        const OctetsStream &operator>>(int32_t &value)
        {
            value = readInt32();
            return *this;
        }

        const OctetsStream &operator>>(unsigned long &value)
        {
            value = readInt64();
            return *this;
        }

        const OctetsStream &operator>>(int64_t &value)
        {
            value = readInt64();
            return *this;
        }

        const OctetsStream &operator>>(float &value)
        {
            value = readFloat();
            return *this;
        }

        const OctetsStream &operator>>(double &value)
        {
            value = readDouble();
            return *this;
        }
        const OctetsStream &operator>>(string &value)
        {
            value = readString();
            return *this;
        }

        OctetsStream &operator<<(const uint8_t &value)
        {
            writeInt8(value);
            return *this;
        }

        OctetsStream &operator<<(const char &value)
        {
            writeInt8(value);
            return *this;
        }

        OctetsStream &operator<<(const int8_t &value)
        {
            writeInt8(value);
            return *this;
        }

        OctetsStream &operator<<(const unsigned short &value)
        {
            writeInt16(value);
            return *this;
        }

        OctetsStream &operator<<(const int16_t &value)
        {
            writeInt16(value);
            return *this;
        }

        OctetsStream &operator<<(const unsigned int &value)
        {
            writeInt32(value);
            return *this;
        }

        OctetsStream &operator<<(const int32_t &value)
        {
            writeInt32(value);
            return *this;
        }

        OctetsStream &operator<<(const unsigned long &value)
        {
            writeInt64(value);
            return *this;
        }

        OctetsStream &operator<<(const int64_t &value)
        {
            writeInt64(value);
            return *this;
        }

        OctetsStream &operator<<(const float &value)
        {
            writeFloat(value);
            return *this;
        }

        OctetsStream &operator<<(const double &value)
        {
            writeDouble(value);
            return *this;
        }
        OctetsStream &operator<<(const string &value)
        {
            writeString(value);
            return *this;
        }
    };

    typedef vector<uint8_t> Protocol;
}
#endif