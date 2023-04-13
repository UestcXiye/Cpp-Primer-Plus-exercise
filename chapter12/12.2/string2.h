#ifndef STRING2_H_
#define STRING2_H_

#include <iostream>
using std::istream;
using std::ostream;

class String
{
private:
    /* data */
    char *str;
    int len;
    static int num_strings;
    enum
    {
        CINLIM = 80
    };

public:
    String(const char *s);
    String();
    String(const String &s);
    ~String();
    int length() const { return len; }
    String &operator=(const String &s);
    String &operator=(const char *s);
    char &operator[](int i);
    const char &operator[](int i) const;
    friend bool operator<(const String &st1, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st1, const String &st2);
    friend ostream &operator<<(ostream &os, const String &s);
    friend istream &operator>>(istream &is, String &s);
    static int HowMany();
    // 新增函数
    // a.对+运算符进行重载，使之可将两个字符串合并成1个
    String operator+(const String &s) const;
    String operator+(const char *s) const;
    friend String operator+(const char *s1, const String &s2);
    // b.提供一个String()成员函数，将字符串中所有的字母字符转换为小写
    void stringlow();
    // c.提供String()成员函数，将字符串中所有字母字符转换成大写
    void stringup();
    // d.提供一个这样的成员函数，它接受一个char参数，返回该字符在字符串中出现的次数
    int has(char ch);
};

#endif