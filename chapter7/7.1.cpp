#include <iostream>
using namespace std;

double cal_harmonic_mean(double, double);

int main()
{
    int a, b;

    cout << "Enter two numbers, I will calculate their harmonic average.\n";
    while (1)
    {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;
        if (!a | !b)
            break;
        cout << "The harmonic mean of a and b is " << cal_harmonic_mean(a, b) << ".\n";
    }
    cout << "Done!\n";

    system("pause");
    return 0;
}
double cal_harmonic_mean(double x, double y)
{
    return 2.0 * x * y / (x + y);
}