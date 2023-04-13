#include "cd.h"
#include <iostream>
#include <cstring>

Cd::Cd(char *s1, char *s2, int n, double x)
{
    strncpy(performers, s1, 49);
    performers[49] = '\0';
    strncpy(label, s2, 19);
    label[19] = '\0';
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd &d)
{
    strncpy(performers, d.performers, 49);
    performers[49] = '\0';
    strncpy(label, d.label, 19);
    label[19] = '\0';
    selections = d.selections;
    playtime = d.playtime;
}
Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}
Cd::~Cd()
{
}
void Cd::Report() const
{
    using std::cout;
    using std::endl;
    cout << "Information:\n";
    cout << "Performers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
}
Cd &Cd::operator=(const Cd &d)
{
    if (this == &d)
        return *this;
    strncpy(performers, d.performers, 49);
    performers[49] = '\0';
    strncpy(label, d.label, 19);
    label[19] = '\0';
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}