#include <iostream>
using namespace std;

const int Max = 5;

double *fill_array(double *, double *);
void show_array(const double *, const double *);
void revalue(double, double *, double *);

int main()
{
    double properties[Max];
    double *end = fill_array(properties, properties + Max);

    show_array(properties, end);
    if (end != properties)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }
    cout << "Done!\n";

    system("pause");
    return 0;
}

double *fill_array(double *begin, double *end)
{
    double *temp = begin;
    int i = 0;

    for (; temp != end; temp++)
    {
        cout << "Enter value #" << (i + 1) << ":";
        cin >> *temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;

            cout << "Bad input;Please enter a number:";
            break;
        }
        else if (*temp < 0)
            break;
        i++;
    }

    return temp;
}

void show_array(const double *begin, const double *end)
{
    int i = 0;

    for (; begin != end; begin++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << *begin << endl;
        i++;
    }
}

void revalue(double r, double *begin, double *end)
{
    for (double *temp = begin; temp != end; temp++)
        *temp *= r;
}