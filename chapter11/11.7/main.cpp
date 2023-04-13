#include "complex0.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    complex a(3.0, 4.0);
    complex c;

    cout << "Enter a complex number (q to quit):\n";
    while (cin >> c)
    {
        cout << "c is " << c << endl;
        cout << "complex conjugate is " << ~c << endl;
        cout << "a is " << a << endl;
        cout << "a + c is " << a + c << endl;
        cout << "a - c is " << a - c << endl;
        cout << "a * c is " << a * c << endl;
        cout << "2 * c is " << 2 * c << endl;
        cout << "Enter a complex number (q to quit):" << endl;
    }
    cout << "Done!\n";

    system("pause");
    return 0;
}