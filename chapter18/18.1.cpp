#include <iostream>
#include <initializer_list>
#include <algorithm>
using namespace std;

template <typename T>
T average_list(initializer_list<T> l);

int main()
{
    // list of double deduced from list contents
    auto q = average_list({15.4, 10.7, 9.0});
    cout << q << endl;
    // list of int deduced from list contents
    cout << average_list({20, 30, 19, 17, 45, 38}) << endl;
    // forced list of double
    auto ad = average_list<double>({'A', 70, 65.33});
    cout << ad << endl;

    system("pause");
    return 0;
}

template <typename T>
T average_list(initializer_list<T> l)
{
    T sum = 0;
    if (l.size() == 0)
        return 0;
    for_each(l.begin(), l.end(), [&sum](T t)
             { sum += t; });
    return sum / l.size();
}