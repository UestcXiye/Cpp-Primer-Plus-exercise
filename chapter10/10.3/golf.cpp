#include "golf.h"
#include <iostream>
#include <cstring>
using namespace std;

Golf::Golf()
{
    char fn[Len];
    int h;
    cout << "Please enter the full name of player: ";
    cin.getline(fn, Len);
    cout << "Please enter the handicap of player: ";
    cin >> h;
    cin.get();
    *this = Golf(fn, h);
}

Golf::Golf(const char *fl, const int h)
{
    strcpy_s(fullname, Len, fl);
    handicap = h;
}

void Golf::setHandicap(const int hc)
{
    handicap = hc;
}

void Golf::showgolf() const
{
    cout << "Information:\n";
    cout << "Full name: " << fullname << endl;
    cout << "Handicap: " << handicap << endl;
}