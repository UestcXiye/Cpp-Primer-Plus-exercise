#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

double long_to_yard(float l);

int main()
{
    float l;
    string prompt = "Please enter a distance in longs: ";

    cout << prompt;
    cin >> l;
    cout << "It's " << long_to_yard(l) << " yards." << endl;

    system("pause");
    return 0;
}
double long_to_yard(float l)
{
    double yard = 220.0 * l;
    return yard;
}