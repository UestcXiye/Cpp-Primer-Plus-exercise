#include <iostream>
using namespace std;
#define LEN 5
#define strsize 20
// Benevolent Order of Programmers name structure
struct bop
{
    char fullname[strsize]; // real name
    char title[strsize];    // job title
    char bopname[strsize];  // secret BOP name
    int preference;         // 0 = fullname，1 = title， 2 = bopname);
};

void display_by_name(bop *);
void display_by_title(bop *);
void display_by_bopname(bop *);
void display_by_preference(bop *);

int main()
{
    char ch;
    bop member[LEN] =
        {
            {"Wimp Mache", "BOSS", "AS", 0},
            {"Raki Rhodes", "Junior Programmer", "MA", 1},
            {"Celia Laiter", "Manager", "MIPS", 2},
            {"Hoppy Hipman", "Analyst Trainee", "CL", 1},
            {"Pat Hand", "Student", "LOOPY", 2}};

    cout << "Benevolent Order of Programmers Report\n";
    cout << "a. display by name     b. display by title\n";
    cout << "c. display by bopname  d. display by preference\n";
    cout << "q. quit\n";
    cout << "Enter your choice: ";
    while (cin >> ch && ch != 'q')
    {
        switch (ch)
        {
        case 'a':
            display_by_name(member);
            break;
        case 'b':
            display_by_title(member);
            break;
        case 'c':
            display_by_bopname(member);
            break;
        case 'd':
            display_by_preference(member);
            break;
        }
        cout << "Next choice: ";
    }
    cout << "Bye!\n";

    system("pause");
    return 0;
}
void display_by_name(bop *b)
{
    for (int i = 0; i < LEN; i++)
        cout << b[i].fullname << endl;
}
void display_by_title(bop *b)
{
    for (int i = 0; i < LEN; i++)
        cout << b[i].title << endl;
}
void display_by_bopname(bop *b)
{
    for (int i = 0; i < LEN; i++)
        cout << b[i].bopname << endl;
}
void display_by_preference(bop *b)
{
    for (int i = 0; i < LEN; i++)
    {
        switch (b[i].preference)
        {
        case 0:
            cout << b[i].fullname << endl;
            break;
        case 1:
            cout << b[i].title << endl;
            break;
        case 2:
            cout << b[i].bopname << endl;
            break;
        }
    }
}