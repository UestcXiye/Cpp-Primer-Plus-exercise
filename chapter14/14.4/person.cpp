#include <iostream>
#include <string>
#include "person.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

Person::~Person() {}

void Person::Data() const
{
    cout << "First name: " << fname << endl;
    cout << "Last name: " << lname << endl;
}

void Person::Get()
{
    cout << "Enter person's first name: ";
    getline(cin, fname);
    cout << "Enter person's last name: ";
    getline(cin, lname);
}

void Gunslinger::Data() const
{
    cout << "Time: " << endl;
    cout << "Num of scotch: " << endl;
}

void Gunslinger::Get()
{
    cout << "Please enter time: " << endl;
    cin >> time;
    cout << "Please enter num of scotch: " << endl;
    cin >> num;
    while (cin.get() != '\n')
        continue;
}

void Gunslinger::Set()
{
    Person::Get();
    Get();
    cout << endl;
}

void Gunslinger::Show() const
{
    cout << "Category: Gunslinger\n";
    Person::Data();
    Data();
}

void PokerPlayer::Data() const
{
    cout << "Card: " << card << endl;
}

void PokerPlayer::Get()
{
    cout << "Please enter card: " << endl;
    cin >> card;
    while (cin.get() != '\n')
        continue;
}

void PokerPlayer::Set()
{
    Person::Get();
    Get();
    cout << endl;
}

void PokerPlayer::Show() const
{
    cout << "Category: PokerPlayer\n";
    Person::Data();
    Data();
}

void BadDude::Data() const
{
    Gunslinger::Data();
    PokerPlayer::Data();
}

void BadDude::Get()
{
    Gunslinger::Get();
    PokerPlayer::Get();
}

void BadDude::Set()
{
    Person::Get();
    Get();
    cout << endl;
}

void BadDude::Show() const
{
    Person::Data();
    Data();
}
