#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    cout << "Please enter the number,\n";
    cout << "and I will calculate the cumulative sum of the input.\n";
    cout << "(enter 0 to end the program)" << endl;
    while (cin >> num && num != 0)
    {
        sum += num;
        cout << "total:" << sum << endl;
    }
    cout << "Done!\n";

    system("pause");
    return 0;
}
