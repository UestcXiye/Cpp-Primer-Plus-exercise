#include <iostream>
#include <string>
using namespace std;

const int Seasons = 4;
const string Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double *);
void show(const double *);

int main()
{
    double expenses[Seasons];

    fill(expenses);
    show(expenses);

    system("pause");
    return 0;
}

void fill(double expenses[])
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> expenses[i];
    }
}

void show(const double expenses[])
{
    double total = 0.0;

    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << expenses[i] << endl;
        total += expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}