#ifndef STRING1_H_
#define STRING1_H_

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
};

#endif