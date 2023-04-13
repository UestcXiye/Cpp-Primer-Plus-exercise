#include <iostream>
#include <array>
using namespace std;
#define ArrSize 10

int main(void)
{
    array<double, ArrSize> donation;

    cout << "Enter the elements you want to exist in the array "
         << "( a non number input to terminate):" << endl;
    int i = 0;
    double sum = 0;
    int elem = 0;
    int count = 0;
    while (i < ArrSize && cin >> donation[i])
    {
        elem++;
        sum += donation[i];
        i++;
    }
    double average = sum / elem;
    for (i = 0; i < ArrSize; i++)
    {
        if (donation[i] > average)
            count++;
    }
    cout << "average = " << average << endl;
    cout << count << " numbers greater than average.\n";

    system("pause");
    return 0;
}