#include "VintagePort.h"
#include <iostream>
#include <cstring>
using namespace std;

VintagePort::VintagePort() : Port()
{
}
VintagePort::VintagePort(const char *br, const char *st, int b, const char *nn, int y) : Port(br, st, b)
{
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, nn);
    int year = y;
}
VintagePort::VintagePort(const VintagePort &vp) : Port(vp)
{
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    int year = vp.year;
}
VintagePort &VintagePort::operator=(const VintagePort &vp)
{
    if (this == &vp)
        return *this;
    Port::operator=(vp);
    delete[] nickname;
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}
void VintagePort::show() const
{
    Port::Show();
    cout << "Nick Name: " << nickname << endl;
    cout << "Year: " << year << endl;
}
ostream &operator<<(ostream &os, const VintagePort &vp)
{
    os << (const Port &)vp;
    os << vp.nickname << "," << vp.year;
    return os;
}