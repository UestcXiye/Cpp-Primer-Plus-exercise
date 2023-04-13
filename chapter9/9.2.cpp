#include <iostream>
#include <cstring>
using namespace std;

// const int ArSize = 10;
void strcount(const string str);

int main()
{
    string input;
    char next;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (cin)
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
        if (input == "")
            break;
    }
    cout << "Bye!\n";

    system("pause");
    return 0;
}

void strcount(const string str)
{

    static int total = 0;

    cout << "\"" << str << "\" contains ";
    total += str.size();
    cout << str.size() << " characters\n";
    cout << total << " characters total\n";
}
