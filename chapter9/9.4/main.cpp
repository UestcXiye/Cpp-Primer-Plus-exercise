#include "sales.h"
#include <iostream>
using namespace SALES;
using namespace std;

int main()
{

    Sales s1, s2;

    cout << "#1:" << endl;
    setSales(s1);
    showSales(s1);
    cout << "--------------------------------------------------" << endl;
    cout << "#2:" << endl;
    double ar[3] = {10, 20, 30};
    setSales(s2, ar, 3);
    showSales(s2);

    system("pause");
    return 0;
}