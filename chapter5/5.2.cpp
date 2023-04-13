#include <iostream>
#include <array>
using namespace std;
const int ArrSize = 101;

int main()
{
    
    array<long double, ArrSize> factorials;

    factorials[0] = factorials[1] = 1;
    for (int i = 2; i < ArrSize; i++)
        factorials[i] = i * factorials[i - 1];
    cout << "100!=" << factorials[100] << endl;

    system("pause");
    return 0;
}
