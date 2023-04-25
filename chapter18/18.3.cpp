#include <iostream>
using namespace std;

template <typename T>
long double sum_value(const T &value);

template <typename T, typename... Args>
long double sum_value(const T &value, const Args &...args);

int main()
{
    cout << sum_value(1, 2, 3, 4, 5) << endl;

    system("pause");
    return 0;
}

template <typename T>
long double sum_value(const T &value)
{
    return value;
}

template <typename T, typename... Args>
long double sum_value(const T &value, const Args &...args)
{
    return value + sum_value(args...);
}