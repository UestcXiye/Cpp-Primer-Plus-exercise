#include <iostream>
using namespace std;
#define YEAR 3
#define MONTH 12
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
    int sales[YEAR][MONTH] = {0};
    int annualSales[YEAR] = {0};
    int sum = 0;

    for (int i = 0; i < YEAR; i++)
    {
        for (int j = 0; j < MONTH; j++)
        {
            cout << "Please enter the sales volume for year " << i + 1 << " month " << months[j] << ":";
            cin >> sales[i][j];
        }
    }
    for (int i = 0; i < YEAR; i++)
    {
        for (int j = 0; j < MONTH; j++)
        {
            cout << "year " << i + 1 << " month " << months[i] << " sales:" << sales[i][j] << endl;
            annualSales[i] += sales[i][j];
        }
    }
    cout << "Annual sales:\n";
    for (int i = 0; i < YEAR; i++)
    {
        cout << "year " << i + 1 << ":" << annualSales[i] << endl;
        sum += annualSales[i];
    }
    cout << "Total sales:" << sum << endl;

    system("pause");
    return 0;
}
