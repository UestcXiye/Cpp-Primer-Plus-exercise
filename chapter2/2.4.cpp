#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int year_to_month(int year);

int main()
{
    int y;
    string prompt = "Enter your age: ";
    
    cout << prompt;
    cin >> y;
    cout << "Your age includes " << year_to_month(y) << " months." << endl;

    system("pause");
    return 0;
}
int year_to_month(int year)
{
    int month = 12 * year;
    return month;
}