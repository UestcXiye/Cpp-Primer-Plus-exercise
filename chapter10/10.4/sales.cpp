#include "sales.h"
#include <iostream>
using namespace std;
namespace SALES
{
    Sales::Sales(const double ar[], const int n) // 非交互式版本
    {
        if (n < 4)
        {
            for (int i = 0; i < n; i++)
                sales[i] = ar[i];
            for (int j = n; j < 4; j++)
                sales[j] = 0;
        }
        else
        {
            for (int i = 0; i < 4; i++)
                sales[i] = ar[i];
        }
        average = (sales[0] + sales[1] + sales[2] + sales[3]) / 4;

        double t_max = 0.0;
        double t_min = 1000000;
        for (int i = 0; i < 4; i++)
        {
            if (sales[i] > t_max)
                t_max = sales[i];
            if (sales[i] < t_min)
                t_min = sales[i];
        }
        max = t_max;
        min = t_min;
    }

    Sales::Sales() // 交互式版本
    {
        cout << "Enter sales:\n";
        for (int i = 0; i < 4; i++)
        {
            cout << "The #" << i + 1 << " quarter is: ";
            cin >> sales[i];
        }
        average = (sales[0] + sales[1] + sales[2] + sales[3]) / 4;

        double t_max = 0.0;
        double t_min = 1000000;
        for (int i = 0; i < 4; i++)
        {
            if (sales[i] > t_max)
                t_max = sales[i];
            if (sales[i] < t_min)
                t_min = sales[i];
        }
        max = t_max;
        min = t_min;
    }

    void Sales::showSales() const
    {
        cout << "The sales of 4 quarters are $" << sales[0] << ", $" << sales[1] << ", $" << sales[2] << ", $" << sales[3] << endl;
        cout << "Average:" << average << endl;
        cout << "Max:" << max << endl;
        cout << "Min:" << min << endl;
    }
}