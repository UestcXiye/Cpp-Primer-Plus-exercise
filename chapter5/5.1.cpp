#include <iostream>
using namespace std;

int main()
{
    int a, b, sum = 0;

    cout << "Please give me two numbers a and b(a<b),\n";
    cout << " and I will calculate the sum of the integers in the interval [a,b].\n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    for (int i = a; i <= b; i++)
        sum += i;
    cout << "result:" << sum << endl;

    system("pause");
    return 0;
}
