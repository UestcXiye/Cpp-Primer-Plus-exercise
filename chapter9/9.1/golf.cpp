#include "golf.h"
#include <iostream>
#include <cstring>
using namespace std;

void setgolf(golf &g, const char *name, int hc)
{
    strcpy_s(g.fullname, name);
    g.handicap = hc;
}
int setgolf(golf &g)
{

    cout << "Please enter the full name of player: ";
    cin.getline(g.fullname, Len);
    if (strcmp(g.fullname, "") == 0)
        return 0;
    cout << "Please enter the handicap of player: ";
    cin >> g.handicap;

    return 1;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    cout << "Information:" << endl;
    cout << "Name: " << g.fullname << endl;
    cout << "handicap: " << g.handicap << endl;
}
