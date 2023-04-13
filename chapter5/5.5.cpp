#include <iostream>
using namespace std;
#define MONTHS 12
const string months[12] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"};

int main()
{
    int sales[MONTHS];
    int sum = 0;

    for (int i = 0; i < MONTHS; i++)
    {
        cout << "Please enter the sales volume for " << months[i] << ":";
        cin >> sales[i];
    }
    for (int i = 0; i < MONTHS; i++)
    {
        cout << months[i] << " sales:" << sales[i] << endl;
        sum += sales[i];
    }
    cout << "Annual sales:" << sum << endl;

    system("pause");
    return 0;
}
