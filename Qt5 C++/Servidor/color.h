#ifndef COLOR_H
#define COLOR_H
#include <string>
#include <cstdio>

using namespace std;

enum COLOR
{
    RED,
    GREEN,
    BLUE,
    YELLOW,
    PURPLE,
    CYAN,
    WHITE,
};

static void pmensagem(COLOR type, string str, bool ret = true)
{
    string newstr = "";
    switch (type)
    {
    case RED:
        newstr = "\e[31m" + str + "\e[0m";
        break;
    case GREEN:
        newstr = "\e[32m" + str + "\e[0m";
        break;
    case YELLOW:
        newstr = "\e[33m" + str + "\e[0m";
        break;
    case BLUE:
        newstr = "\e[34m" + str + "\e[0m";
        break;
    case PURPLE:
        newstr = "\e[35m" + str + "\e[0m";
        break;
    case CYAN:
        newstr = "\e[36m" + str + "\e[0m";
        break;
    case WHITE:
        newstr = "\e[37m" + str + "\e[0m";
        break;
    default:
        newstr = "\e[0m" + str + "\e[0m";
        break;    
    }
    if (ret)
        newstr += "\n";
    printf(newstr.c_str());
}

static void pmensagem(COLOR type, const char *cstr, bool ret = true)
{
    string str = cstr;
    string newstr = "";
    switch (type)
    {
    case RED:
        newstr = "\e[31m" + str + "\e[0m";
        break;
    case GREEN:
        newstr = "\e[32m" + str + "\e[0m";
        break;
    case YELLOW:
        newstr = "\e[33m" + str + "\e[0m";
        break;
    case BLUE:
        newstr = "\e[34m" + str + "\e[0m";
        break;
    case PURPLE:
        newstr = "\e[35m" + str + "\e[0m";
        break;
    case CYAN:
        newstr = "\e[36m" + str + "\e[0m";
        break;
    case WHITE:
        newstr = "\e[37m" + str + "\e[0m";
        break;
    default:
        newstr = "\e[0m" + str + "\e[0m";
        break;
    }
    if (ret)
        newstr += "\n";
    printf(newstr.c_str());
}

static string mensagem(COLOR type, string str, bool ret = true)
{
    string newstr;
    switch (type)
    {
    case RED:
        newstr = "\e[31m" + str + "\e[0m";
        break;
    case GREEN:
        newstr = "\e[32m" + str + "\e[0m";
        break;
    case YELLOW:
        newstr = "\e[33m" + str + "\e[0m";
        break;
    case BLUE:
        newstr = "\e[34m" + str + "\e[0m";
        break;
    case PURPLE:
        newstr = "\e[35m" + str + "\e[0m";
        break;
    case CYAN:
        newstr = "\e[36m" + str + "\e[0m";
        break;
    case WHITE:
        newstr = "\e[37m" + str + "\e[0m";
        break;
    default:
        newstr = "\e[0m" + str + "\e[0m";
        break;
    }
    if (ret)
        newstr += "\n";
    return newstr;
}

static string mensagem(COLOR type, const char *cstr, bool ret = true)
{
    string str = cstr;
    string newstr;
    switch (type)
    {
    case RED:
        newstr = "\e[31m" + str + "\e[0m";
        break;
    case GREEN:
        newstr = "\e[32m" + str + "\e[0m";
        break;
    case YELLOW:
        newstr = "\e[33m" + str + "\e[0m";
        break;
    case BLUE:
        newstr = "\e[34m" + str + "\e[0m";
        break;
    case PURPLE:
        newstr = "\e[35m" + str + "\e[0m";
        break;
    case CYAN:
        newstr = "\e[36m" + str + "\e[0m";
        break;
    case WHITE:
        newstr = "\e[37m" + str + "\e[0m";
        break;
    default:
        newstr = "\e[0m" + str + "\e[0m";
        break;
    }
    if (ret)
        newstr += "\n";
    return newstr;
}
#endif