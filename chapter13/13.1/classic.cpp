#include "classic.h"
#include <iostream>
#include <cstring>

Classic::Classic(char *m, char *s1, char *s2, int n, double x) : Cd(s1, s2, n, x)
{
    strncpy(majorWorks, m, 49);
    majorWorks[49] = '\0';
}
Classic::Classic(char *m, const Cd &cd) : Cd(cd)
{
    strncpy(majorWorks, m, 49);
    majorWorks[49] = '\0';
}
Classic::Classic() : Cd()
{
    majorWorks[0] = '\0';
}
Classic::~Classic()
{
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
    strncpy(majorWorks, c.majorWorks, 49);
    majorWorks[49] = '\0';
    return *this;
}