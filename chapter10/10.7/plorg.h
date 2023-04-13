#ifndef PLORG_H
#define PLORG_H

#include <iostream>
class Plorg
{
private:
    static const int LEN = 19;
    char name[LEN];
    int ci;

public:
    Plorg();
    Plorg(const char *str,const int c_i=50);
    void setCI(const int c_i);
    void show()const;

};
#endif