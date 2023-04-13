#include <iostream>
#include <cstring>
using namespace std;

#define intSize 6
#define doubleSize 4
#define charSize 5

template <typename T>
T maxn(T arr[], int n)
{
    T t_max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > t_max)
            t_max = arr[i];
    }
    return t_max;
}

template <>
char *maxn(char *arr[], int n)
{
    const char *s = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (strlen(arr[i]) > strlen(s))
            s = arr[i];
    }
    return s;
}

int main()
{
    int arr1[intSize] = {1, 6, 3, 2, 5, 10};
    double arr2[doubleSize] = {2.3, 5.2, 1.4, 2.7};
    char *arr3[charSize] = {"a", "bb", "ccc", "dddd", "eeeee"};

    cout << "The maximum value in int array is " << maxn(arr1, intSize) << endl;
    cout << "The maximum value in double array is " << maxn(arr2, doubleSize) << endl;
    cout << "The longest string in char array is " << maxn(arr3, charSize) << endl;

    system("pause");
    return 0;
}
