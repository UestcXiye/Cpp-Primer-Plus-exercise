#include "plorg.h"
#include <iostream>
#include <cstring>

Plorg::Plorg()
{
    strcpy_s(name, LEN, "Plorga");
    ci = 0;
}

Plorg::Plorg(const char *str, const int c_i)
{
    strcpy_s(name, LEN, str);
    ci = c_i;
}

void Plorg::setCI(const int c_i)
{
    ci = c_i;
}

void Plorg::show() const
{
    using std::cout;
    using std::endl;
    cout << "Name:" << name << endl;
    cout << "CI:" << ci << endl;
}
