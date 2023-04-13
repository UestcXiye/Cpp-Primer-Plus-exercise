#include <iostream>
using namespace std;

const int strLen = 20;

void printStr(char *str, int n = 0);

int main()
{
    char str[strLen] = "bocchi the rock";
    printStr(str);
    cout << endl;
    printStr(str);
    cout << endl;
    printStr(str, 10);
    cout << endl;
    printStr(str, 30);
    cout << endl;

    system("pause");
    return 0;
}

void printStr(char *str, int n)
{
    static int count = 0;

    count++;
    while (n >= 0)
    {
        if (n == 0)
        {
            cout << str << endl;
            return;
        }
        else
        {
            for (int i = 0; i < count; i++)
                cout << str << endl;
            return;
        }
    }
}