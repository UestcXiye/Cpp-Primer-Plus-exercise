#include "vector.h"
#include <iostream>
#include <cstdlib> //rand(), srand() prototypes
#include <ctime>   //time() prototype
#include <fstream>

int main()
{
    using namespace std;
    using VECTOR::Vector;
    ofstream outFile;
    outFile.open("randwalk.txt");
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        outFile << "Target Distance: " << target << ", Step Size: " << dstep << endl;
        while (result.magval() < target)
        {
            outFile << steps << ": " << result << endl;
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        outFile << "After " << steps << " steps, the subject has the following location:\n";
        outFile << result << endl;
        result.polar_mode();
        outFile << " or\n"
             << result << endl;
        outFile << "Average outward distance per step = " << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    outFile.close();

    system("pause");
    return 0;
}