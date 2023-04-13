#include "person.h"
#include <iostream>
#include <cstring>
using namespace std;

Person::Person(const string &ln, const char *fn)
{
    lname = ln;
    strcpy_s(fname, LIMIT, fn);
}

void Person::Show() const
{
    cout << fname << "  " << lname << endl;
}

void Person::FormalShow() const
{
    cout << lname << " , " << fname << endl;
}