#include <iostream>
#include <string>
#include <list>

const int ArrSize = 10;

template <class T>
int reduce(T ar[], int n);

int main()
{
    using std::cout;
    using std::endl;
    using std::string;

    long arr[ArrSize] = {11, 11, 22, 22, 33, 44, 55, 55, 44, 33};
    string str[ArrSize] = {"beetle", "loaner", "stolid", "stupid", "remote",
                           "loaner", "beetle", "apiary", "whence", "insult"};

    cout << "Original long array:" << endl;
    for (int i = 0; i < ArrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int len = reduce(arr, ArrSize);
    cout << "After sorting and removing duplicate values,"
         << " array retains " << len << " elements" << endl;
    cout << "Current long array:" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << "Original string array:" << endl;
    for (int i = 0; i < ArrSize; i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
    len = reduce(str, ArrSize);
    cout << "After sorting and removing duplicate values,"
         << " array retains " << len << " elements" << endl;
    cout << "Current string array:" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}

template <class T>
int reduce(T ar[], int n)
{
    std::list<T> lar;
    int count = 0;

    for (int i = 0; i < n; i++)
        lar.push_back(ar[i]);
    lar.sort();
    lar.unique();
    for (typename ::std::list<T>::iterator it = lar.begin(); it != lar.end(); it++)
    {
        ar[count++] = (*it);
    }
    return count;
}