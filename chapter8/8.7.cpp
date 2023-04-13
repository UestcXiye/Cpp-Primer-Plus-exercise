#include <iostream>
using namespace std;

template <typename T> // template A
T SumArray(T arr[], int n);

template <typename T> // template B
T SumArray(T *arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts me_E[3] =
        {
            {"Ima Wolfe", 2400.0},
            {"Ura Foxe", 1300.0},
            {"Iby Stout", 1800.0}};
    double *pd[3];

    for (int i = 0; i < 3; i++)
        pd[i] = &(me_E[i].amount);

    cout << "Listing Mr.E's counts:" << endl;
    cout << SumArray(things, 6) << endl;

    cout << "Listing Mr.E's debts:" << endl;
    cout << SumArray(pd, 3) << endl;

    system("pause");
    return 0;
}

template <typename T>
T SumArray(T arr[], int n)
{
    T sum = 0;

    cout << "template A\n";
    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

template <typename T>
T SumArray(T *arr[], int n)
{
    T sum = 0;

    cout << "template B\n";
    for (int i = 0; i < n; i++)
        sum += *arr[i];

    return sum;
}