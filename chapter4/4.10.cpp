#include <iostream>
#include <array>
using namespace std;
int main()
{
    const int time = 3;
    array<double, time> grade;
    double average = 0.0;

    cout << "Enter your grade for " << time << " times: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> grade[i];
        average += grade[i] / time;
    }

    cout << "The average grade of " << time << " times is " << average << endl;

    system("pause");
    return 0;
}
