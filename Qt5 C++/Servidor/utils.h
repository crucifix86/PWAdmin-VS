#ifndef UTILS_H
#define UTILS_H

#include <string>
#include "GNET/OctetsStream.h"
#include <regex>

using namespace std;

template <typename T>
string bytesToHexString(const vector<T> &bytes)
{
    ostringstream oss;
    for (const auto &byte : bytes)
    {
        oss << setw(2) << setfill('0') << hex << static_cast<int>(byte);
    }
    return oss.str();
}

std::string fromHex(const std::string &hexstring)
{
    std::string result;
    size_t length = hexstring.length();

    if (length % 2 != 0) // Invalid hexadecimal string
    {
        throw std::invalid_argument("Hexadecimal string must have an even number of characters.");
    }

    for (size_t i = 0; i < length; i += 2)
    {
        std::string byteString = hexstring.substr(i, 2);
        char byteChar = static_cast<char>(std::stoul(byteString, nullptr, 16));
        result.push_back(byteChar);
    }

    return result;
}

bool isHex(string value)
{
    static const regex hexRegex("^[0-9a-fA-F]*$");
    return regex_match(value, hexRegex);
}

std::vector<std::string> split(const std::string &s, char delimiter)
{
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);
    while (std::getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}

std::vector<std::string> split(const char* str, char delimiter)
{
    string s = str;
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);
    while (std::getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}

std::vector<std::string> split2(const std::string &s, char delimiter)
{
    std::vector<std::string> tokens;
    size_t start = 0;
    size_t end = s.find(delimiter);

    while (end != std::string::npos)
    {
        tokens.push_back(s.substr(start, end - start));
        start = end + 2;
        end = s.find(delimiter, start);
    }

    tokens.push_back(s.substr(start, end));

    return tokens;
}

void removeDelimitador(string &str, char delimitador)
{
    size_t end = str.find(delimitador);
    while (end != std::string::npos)
    {
        str.replace(end, 1, str);
    }
}

std::vector<uint8_t> ConvertToVector(const char* str) {
    return std::vector<uint8_t>(str, str + strlen(str));
}

std::string CharArrayToHex(const char* buffer, size_t size) {
    std::ostringstream oss;
    for (size_t i = 0; i < size; ++i) {
        // Cast to unsigned char before streaming to ensure the value is interpreted as a byte
        oss << std::setw(2) << std::setfill('0') << std::hex << static_cast<unsigned int>(static_cast<unsigned char>(buffer[i]));
    }
    return oss.str();
}

#endif