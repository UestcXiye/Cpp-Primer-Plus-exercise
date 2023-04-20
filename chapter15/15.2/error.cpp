#include <iostream>
#include <cmath>
#include "exc_mean.h"

double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    double x, y, z;

    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        try
        {
            z = hmean(x, y);
            cout << "Harmonic mean of " << x << " and " << y
                 << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y
                 << " is " << gmean(x, y) << endl;
            cout << "Enter next set of numbers <q to quit>:";
        }
        catch (bad_hmean &h)
        {
            cout << h.what();
            cout << "Values used: " << h.v1 << ", " << h.v2 << endl;
            cout << "Try again.\n";
            continue;
        }
        catch (bad_gmean &g)
        {
            cout << g.what();
            cout << "Values used: " << g.v1 << ", " << g.v2 << endl;
            cout << "Sorry, you don't get to play any more." << endl;
            break;
        }
    }
    cout << "Bye!" << endl;

    system("pause");
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw bad_hmean(a, b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean(a, b);
    return std::sqrt(a * b);
}
