#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

#define QUIT "q"

void strUpper(string &str);

int main()
{
    string s;

    cout << "Enter a string (q to quit): ";
    getline(cin, s);
    while (s != QUIT)
    {
        strUpper(s);
        cout << s << endl;
        cout << "Next string (q to quit): ";
        getline(cin, s);
    }
    cout << "Bye!\n";

    system("pause");
    return 0;
}

void strUpper(string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);
    }
}