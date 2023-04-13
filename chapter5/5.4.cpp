#include <iostream>
using namespace std;
#define SIMPLE_RATE 0.10
#define COMPOUND_RATE 0.05
int main()
{
    double Daphne = 100, Cleo = 100;
    double principal = 100;
    unsigned year = 0;

    while (Cleo <= Daphne)
    {
        Daphne += SIMPLE_RATE * principal;
        Cleo += COMPOUND_RATE * Cleo;
        year++;
        // cout << "year " << year << ":\n";
        // cout << "Daphne:" << Daphne << endl;
        // cout << "Cleo:" << Cleo << endl;
    }
    cout << year << " years later,";
    cout << " the investment value of Cleo exceeds the investment value of Daphne.\n";

    system("pause");
    return 0;
}
