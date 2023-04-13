#include <iostream>
#include <string>
using namespace std;

const int Seasons = 4;
const string Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

typedef struct Expenses
{
    double expenses[Seasons];
} Expenses;

void fill(Expenses *e);
void show(const Expenses *e);

int main()
{
    struct Expenses e;

    fill(&e);
    show(&e);

    system("pause");
    return 0;
}

void fill(Expenses *e)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> e->expenses[i];
    }
}

void show(const Expenses *e)
{
    double total = 0.0;

    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << e->expenses[i] << endl;
        total += e->expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}