#include "stonewt.h"
#include <iostream>
using namespace std;

int main()
{
    Stonewt s[6] = {275, 285.7, Stonewt(21, 8.0)};

    cout << "Enter the rest three Stonewt:\n";
    for (int i = 3; i < 6; i++)
    {
        double pounds;
        cout << "#" << i + 1 << ": ";
        cin >> pounds;
        s[i] = pounds;
    }

    Stonewt s_max = s[0], s_min = s[0], flag(11, 0.0);
    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        cout << "#" << i + 1 << ": " << s[i] << endl;
        if (s[i] > s_max)
            s_max = s[i];
        if (s[i] < s_min)
            s_min = s[i];
        if (s[i] >= flag)
            count++;
    }

    cout << "The max is " << s_max;
    cout << "The min is " << s_min;
    if (count > 1)
        cout << "There are " << count << " members greater than or equal to 11 stones.\n";
    else
        cout << "There is " << count << " member greater than or equal to 11 stones.\n";

    system("pause");
    return 0;
}