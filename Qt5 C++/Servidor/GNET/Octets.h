#ifndef __OCTETS_H
#define __OCTETS_H

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

#include "../utils.h"

namespace GNET
{
    using namespace std;

    class Octets
    {
    public:
        size_t size;
        string value;

        Octets(){};
        Octets(string v) : value(v){};
        Octets(u16string v){};

        void utf8To16()
        {
            string str;
            for (int i = 0; i < value.size(); i++)
            {
                str = value[i];
            }
        }

        std::string fromHex()
        {
            std::string result;
            size_t length = value.length();

            if (length % 2 != 0)
            {
                throw std::invalid_argument("Hexadecimal string must have an even number of characters.");
            }

            for (size_t i = 0; i < length; i += 2)
            {
                std::string byteString = value.substr(i, 2);
                char byteChar = static_cast<char>(std::stoul(byteString, nullptr, 16));
                result.push_back(byteChar);
            }

            return result;
        }

        std::string toHex()
        {
            std::stringstream ss;
            for (char c : value)
            {
                ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(static_cast<uint8_t>(c));
            }
            return ss.str();
        }

        std::string toHex16()
        {
            std::stringstream ss;
            for (char c : value)
            {
                ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(static_cast<uint8_t>(c));
                ss << "00";
            }
            return ss.str();
        }
    };
}

#endif