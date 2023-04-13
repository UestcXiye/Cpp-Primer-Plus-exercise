#include <iostream>
using namespace std;
long Factorial(int);
int main()
{

    int n;

    cout << "Enter a number n(n>0)(q to quit):";
    while (cin >> n)
    {
        cout << n << "! = " << Factorial(n) << endl;
        cout << "Next number(q to quit): ";
    }
    cout << "Done!\n";
    
    system("pause");
    return 0;
}
long Factorial(int n)
{
    if (n > 0)
        return n * Factorial(n - 1);
    return 1;
}