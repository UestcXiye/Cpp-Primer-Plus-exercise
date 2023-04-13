#include <iostream>
using namespace std;

double add(double, double);
double subtract(double, double);
double multiply(double, double);
double calculate(double, double, double (*func)(double, double));

int main(void)
{
    double x, y;
    double (*pf[3])(double, double) = {add, subtract, multiply};

    cout << "Enter two numbers(q to quit):";
    while (cin >> x >> y)
    {
        for (int i = 0; i < 3; i++)
        {
            switch (i)
            {
            case 0:
                cout << x << "+" << y << "=" << calculate(x, y, pf[i]) << endl;
                break;
            case 1:
                cout << x << "-" << y << "=" << calculate(x, y, pf[i]) << endl;
                break;
            case 2:
                cout << x << "*" << y << "=" << calculate(x, y, pf[i]) << endl;
                break;
            }
        }
        cout << "Enter two numbers(q to quit):";
    }
    cout << "Done!\n";

    system("pause");
    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double subtract(double x, double y)
{
    return x - y;
}

double multiply(double x, double y)
{
    return x * y;
}

double calculate(double x, double y, double (*func)(double, double))
{
    return (*func)(x, y);
}