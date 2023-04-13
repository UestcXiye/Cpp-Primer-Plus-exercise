#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void print_time(int hour, int minute);

int main()
{
    int h;
    int m;

    cout << "Enter the number of hours: ";
    cin >> h;
    cout << "Enter the number of minutes: ";
    cin >> m;

    print_time(h, m);

    system("pause");
    return 0;
}
void print_time(int hour, int minute)
{
    cout << "Time: " << hour + minute / 60 << ":" << minute % 60 << endl;
}