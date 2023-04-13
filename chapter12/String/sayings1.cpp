#include "string1.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int ArSize = 10;
const int MaxLen = 81;

int main()
{
    String name;
    String sayings[ArSize];
    char temp[MaxLen];
    int total = 0;

    cout << "Hi, what's your name?\n";
    cin >> name;
    cout << name << ", please enter up to " << ArSize << " short sayings <empty line to quit>:\n";
    for (int i = 0; i < ArSize; i++)
    {
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')
            break;
        else
            sayings[i] = temp;
        total++;
    }
    if (total > 0)
    {
        cout << "Here are your sayings:\n";
        for (int i = 0; i < total; i++)
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        int shortest = 0, first = 0;
        for (int i = 1; i < total; i++)
        {
            if (sayings[i].length() < sayings[shortest].length())
                shortest = i;
            if (sayings[i] < sayings[first])
                first = i;
        }
        cout << "Shortest saying:\n"
             << sayings[shortest] << endl;
        cout << "First alphabetically:\n"
             << sayings[first] << endl;
        cout << "This program used " << String::HowMany() << " String objects. Bye.\n"; // String::HowMany()=11
    }
    else
        cout << "No input!Bye.\n";

    system("pause");
    return 0;
}