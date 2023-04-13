#include "classic.h"
#include <iostream>
#include <cstring>
using std::strcpy;
using std::strlen;

Classic::Classic(char *m, char *s1, char *s2, int n, double x) : Cd(s1, s2, n, x)
{
    majorWorks = new char[strlen(m) + 1];
    strcpy(majorWorks, m);
}
Classic::Classic(char *m, const Cd &cd) : Cd(cd)
{
    majorWorks = new char[strlen(m) + 1];
    strcpy(majorWorks, m);
}
Classic::Classic() : Cd()
{
    majorWorks = new char[1];
    strcpy(majorWorks, "\0");
}
Classic::~Classic()
{
    delete[] majorWorks;
}
void Classic::Report() const
{
    using std::cout;
    using std::endl;
    Cd::Report();
    cout << "Major works: " << majorWorks << endl;
}
Classic &Classic::operator=(const Classic &c)
{

    if (this == &c)
        return *this;
    Cd::operator=(c);
    majorWorks = new char[strlen(c.majorWorks) + 1];
    strcpy(majorWorks, c.majorWorks);
    return *this;
}