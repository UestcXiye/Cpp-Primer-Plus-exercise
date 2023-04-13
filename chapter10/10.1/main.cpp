#include "bankAccount.h"
#include <iostream>
using namespace std;
int main()
{
    BankAccount ba1;
    BankAccount ba2("Frank", "China Bank", 2000.0);

    ba1.show();
    ba1.deposit(1000.0);
    ba1.show();
    ba1.withdraw(500.0);
    ba1.show();
    ba2.show();
    
    system("pause");
    return 0;
}