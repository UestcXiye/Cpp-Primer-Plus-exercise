#ifndef GOLF_H
#define GOLF_H

#include <iostream>
using namespace std;

class Golf
{
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;

public:
    Golf();
    Golf(const char *fl, const int h = 0);
    void setHandicap(const int hc);
    void showgolf() const;
};
#endif