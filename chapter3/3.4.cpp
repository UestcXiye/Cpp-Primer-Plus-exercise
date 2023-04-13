#include <iostream>
using namespace std;
int main()
{
    const int D_to_H = 24;
    const int H_to_M = 60;
    const int M_to_S = 60;
    long long second;
    int day;
    int hour;
    int minute;

    cout << "Enter the number of seconds: ";
    cin >> second;
    cout << second << " seconds = ";

    minute = second / M_to_S;
    second %= M_to_S;
    hour = minute / H_to_M;
    minute %= H_to_M;
    day = hour / D_to_H;
    hour %= D_to_H;

    cout << day << " days, " << hour << " hours, " << minute << " minutes, " << second << " seconds\n";

    system("pause");
    return 0;
}
