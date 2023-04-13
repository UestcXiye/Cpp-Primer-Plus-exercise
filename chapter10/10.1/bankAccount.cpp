#include "bankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount()
{
    name = "None";
    account = "None";
    money = 0.0;
}

BankAccount::BankAccount(const string &n, const string &a, double m)
{
    name = n;
    account = a;
    money = m;
}

void BankAccount::show() const
{
    cout << "Account Name:" << name << endl;
    cout << "Account Number:" << account << endl;
    cout << "Account Money:" << money << endl;
}

void BankAccount::deposit(double cash)
{
    if (cash < 0)
    {
        cout << "Error!Please enter a positive number.\n";
        return;
    }
    money += cash;
}

void BankAccount::withdraw(double cash)
{
    if (money < cash)
    {
        cout << "Insufficient balance.\n";
        return;
    }
    money -= cash;
}
