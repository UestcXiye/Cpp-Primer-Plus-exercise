#include <iostream>
using namespace std;

const unsigned int ArrSize = 20;

int Fill_array(double array[], unsigned int ArrSize);
void Show_array(const double array[], int length);
void Reverse_array(double Array[], int length);

int main()
{
    double arr[ArrSize];
    int arrLen = 0;

    cout << "Enter numbers(q to quit):" << endl;
    arrLen = Fill_array(arr, ArrSize);
    Show_array(arr, arrLen);
    Reverse_array(arr, arrLen);
    Show_array(arr, arrLen);

    system("pause");
    return 0;
}

int Fill_array(double array[], unsigned int ArrSize)
{
    int len = 0;

    while (cin >> array[len] && len < ArrSize)
        len++;

    return len;
}

void Show_array(const double array[], int length)
{
    if (length == 0)
    {
        cout << "The array is empty.\n";
        return;
    }
    cout << "Array content:\n";
    for (int i = 0; i < length; i++)
        cout << array[i] << " ";
    cout << endl;
}

void Reverse_array(double Array[], int length)
{
    if (length == 0)
    {
        cout << "The array is empty.\n";
        return;
    }
    cout << "Reverse all elements in the array except the first and last\n";
    for (int i = 0; i < length / 2; i++)
    {
        if (i == 0)
            continue;
        else
        {
            double temp = Array[i];
            Array[i] = Array[length - i - 1];
            Array[length - i - 1] = temp;
        }
    }
}