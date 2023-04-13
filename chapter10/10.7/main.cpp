#include "plorg.h"
#include <iostream>
using namespace std;

int main()
{
    Plorg p1;
    p1.show();
    p1.setCI(100);
    p1.show();
    Plorg p2("Amazon", 10);
    p2.show();
    
    system("pause");
    return 0;
}