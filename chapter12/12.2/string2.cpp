#include "string2.h"
#include <cstring>
using std::strcmp;
using std::strcpy;
using std::strlen;

int String::num_strings = 0;

String::String(const char *s)
{
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    num_strings++;
}
String::String()
{
    len = 0;
    str = new char[len + 1];
    strcpy(str, "\0");
    num_strings++;
}
String::String(const String &s)
{
    len = s.len;
    str = new char[len + 1];
    strcpy(str, s.str);
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
    strcpy(str, s.str);
    return *this;
}
String &String::operator=(const char *s)
{
    delete[] str;
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
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
    return (strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}
bool operator==(const String &st1, const String &st2)
{
    return (strcmp(st1.str, st2.str) == 0);
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
// 新增函数
// a.对+运算符进行重载，使之可将两个字符串合并成1个
String String::operator+(const String &s) const
{
    char *temp = new char[len + s.len + 1];
    strcpy(temp, str);
    strcpy(temp + len, s.str);
    return String(temp);
}
String String::operator+(const char *s) const
{
    char *temp = new char[len + strlen(s) + 1];
    strcpy(temp, str);
    strcpy(temp + len, s);
    return String(temp);
}
String operator+(const char *s1, const String &s2)
{
    char *temp = new char[strlen(s1) + s2.len + 1];
    strcpy(temp, s1);
    strcpy(temp + strlen(s1), s2.str);
    return String(temp);
}
// b.提供一个String()成员函数，将字符串中所有的字母字符转换为小写
void String::stringlow()
{
    for (int i = 0; i < len; i++)
    {
        str[i] = tolower(str[i]);
    }
}
// c.提供String()成员函数，将字符串中所有字母字符转换成大写
void String::stringup()
{
    for (int i = 0; i < len; i++)
    {
        str[i] = toupper(str[i]);
    }
}
// d.提供一个这样的成员函数，它接受一个char参数，返回该字符在字符串中出现的次数
int String::has(char ch)
{

    int count = 0;
    for (int i = 0; i < len; i++)
        if (str[i] == ch)
            count++;
    return count;
}