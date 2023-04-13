#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    cout << "Enter number of rows: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < num - i; j++)
            cout << ".";
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }

    system("pause");
    return 0;
}
