#include "vector.h"
#include <iostream>
#include <cstdlib> //rand(), srand() prototypes
#include <ctime>   //time() prototype
using namespace std;

int main()
{
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    int N = 0;
    int max = 0, min = 100000, sum = 0;
    double average = 0.0;

    cout << "How many times do you want to test? ";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter #"<<i+1<<" target distance: ";
        if (!(cin >> target))
            break;
        cout << "Enter #"<<i+1<<" step length: ";
        if (!(cin >> dstep))
            break;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "# " << i + 1 << ": After " << steps << " the subject reach destination.\n";
        // cout << result << endl;
        // result.polar_mode();
        // cout << " or\n"
        //      << result << endl;
        // cout << "Average outward distance per step = " << result.magval() / steps << endl;
        if (steps > max)
            max = steps;
        if (steps < min)
            min = steps;
        sum += steps;
        steps = 0;
        result.reset(0.0, 0.0);
    }
    average = (double)sum / N;
    cout << "The max steps is: " << max << endl;
    cout << "The min steps is: " << min << endl;
    cout << "The average steps is: " << average << endl;
    cout << "Bye!\n";
    cin.clear();

    system("pause");
    return 0;
}