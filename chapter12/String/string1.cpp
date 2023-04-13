#include "string1.h"
#include <cstring>
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}
String::String(const char *s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}
String::String()
{
    len = 0;
    str = new char[len + 1];
    std::strcpy(str, "\0");
    num_strings++;
}
String::String(const String &s)
{
    len = s.len;
    str = new char[len + 1];
    std::strcpy(str, s.str);
    num_strings++;
}
String::~String()
{
    num_strings--;
    delete[] str;
}
String &String::operator=(const String &s)
{
    if (this == &s)
        return *this;
    delete[] str;
    len = s.len;
    str = new char[len + 1];
    std::strcpy(str, s.str);
    return *this;
}
String &String::operator=(const char *s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}
char &String::operator[](int i)
{
    return str[i];
}
const char &String::operator[](int i) const
{
    return str[i];
}
bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}
bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}
ostream &operator<<(ostream &os, const String &s)
{
    os << s.str;
    return os;
}
istream &operator>>(istream &is, String &s)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        s = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}