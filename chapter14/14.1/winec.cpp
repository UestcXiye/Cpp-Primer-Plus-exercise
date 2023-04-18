#include <iostream>
#include <string>
#include <valarray>
#include "winec.h"
using namespace std;

template <class T1, class T2>
void Pair<T1, T2>::set(const T1 &yr, const T2 &bot)
{
    a = yr;
    b = bot;
}

template <class T1, class T2>
int Pair<T1, T2>::sum() const
{
    return b.sum();
}

template <class T1, class T2>
void Pair<T1, T2>::Show(int y) const
{
    for (int i = 0; i < y; i++)
    {
        cout << "\t\t" << a[i] << "\t\t" << b[i] << endl;
    }
}

Wine::Wine(const char *l, int y, const int yr[], const int bot[])
{
    name = l;
    yrs = y;
    b.set(ArrayInt(yr, yrs), ArrayInt(bot, yrs));
}

Wine::Wine(const char *l, int y)
{
    name = l;
    yrs = y;
}

void Wine::GetBottles()
{
    ArrayInt yr(yrs), bot(yrs);
    cout << "Enter " << name << " data for " << yrs << " year(s):\n";
    for (int i = 0; i < yrs; i++)
    {
        cout << "Enter year: ";
        cin >> yr[i];
        cout << "Enter bottles for that year: ";
        cin >> bot[i];
    }
    b.set(yr, bot);
}

string &Wine::Label()
{
    return name;
}

int Wine::sum() const
{
    return b.sum();
}

void Wine::Show() const
{
    cout << "Wine: " << name << endl;
    cout << "\t\tYear\t\tBottles\n";
    b.Show(yrs);
}