#include "sales.h"
#include <iostream>
using namespace SALES;
using namespace std;

int main()
{

    Sales s1;
    double ar[3] = {10, 20, 30};
    Sales s2(ar, 3);

    cout << "#1:" << endl;
    s1.showSales();
    cout << "--------------------------------------------------" << endl;
    cout << "#2:" << endl;
    s2.showSales();

    system("pause");
    return 0;
}