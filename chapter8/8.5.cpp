#include <iostream>
using namespace std;

const int ArrSize = 5;

template <typename T>
T max5(T arr[])
{
    T t_max = arr[0];
    for (int i = 1; i < ArrSize; i++)
    {
        if (arr[i] > t_max)
            t_max = arr[i];
    }
    return t_max;
}

int main()
{
    int arr1[ArrSize] = {1, 6, 3, 2, 5};
    double arr2[ArrSize] = {1.20, 2.30, 5.2, 1.4, 2.7};

    cout << "The maximum value in int array is " << max5(arr1) << endl;
    cout << "The maximum value in double array is " << max5(arr2) << endl;

    system("pause");
    return 0;
}
