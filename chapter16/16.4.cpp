#include <iostream>
#include <list>

const int ArrSize = 10;

int reduce(long ar[], int n);

int main()
{
    using std::cout;
    using std::endl;

    long arr[ArrSize] = {11, 11, 22, 22, 33, 44, 55, 55, 44, 33};

    cout << "Original array:" << endl;
    for (int i = 0; i < ArrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int len = reduce(arr, ArrSize);
    cout << "After sorting and removing duplicate values,"
         << " array retains " << len << " elements" << endl;
    cout << "Current array:" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}

int reduce(long ar[], int n)
{
    using std::list;

    list<long> lar;
    int count = 0;

    for (int i = 0; i < n; i++)
        lar.push_back(ar[i]);
    lar.sort();
    lar.unique();
    for (list<long>::iterator it = lar.begin(); it != lar.end(); it++)
    {
        ar[count++] = (*it);
    }
    return count;
}