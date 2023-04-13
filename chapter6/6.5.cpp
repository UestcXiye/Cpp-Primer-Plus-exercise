#include <iostream>
using namespace std;
#define RATE1 0.10
#define RATE2 0.15
#define RATE3 0.20
double cal_tax(int);
int main()
{
    int income;
    double tax;
    cout << "Enter your income(enter negative number or q to quit): ";
    while (cin >> income && income >= 0)
    {
        cout << "your tax is " << cal_tax(income) <<".\n";
        cout << "Enter your income: ";
    }

    system("pause");
    return 0;
}
double cal_tax(int x)
{
    double tax;
    if (x <= 5000)
        tax = 0.0;
    else if (x <= 15000)
        tax = RATE1 * (x - 5000);
    else if (x <= 35000)
        tax = RATE1 * (15000 - 5000) + RATE2 * (x - 15000);
    else
        tax = RATE1 * (15000 - 5000) + RATE2 * (35000 - 15000) + RATE3 * (x - 35000);
    return tax;
}