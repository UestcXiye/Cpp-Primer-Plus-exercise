#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>
using namespace std;

class BankAccount
{
private:
    string name;
    string account;
    double money;

public:
    BankAccount();
    BankAccount(const string &n, const string &a, double m = 0.0);
    void show() const;
    void deposit(double cash);
    void withdraw(double cash);
};
#endif