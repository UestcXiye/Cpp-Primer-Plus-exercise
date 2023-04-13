#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

double distance_translation(double light_year);

int main()
{
    double lightYear;
    string prompt = "Enter the number of light years: ";

    cout << prompt;
    cin >> lightYear;
    cout << lightYear << " light years = " << distance_translation(lightYear) << " astronomical units." << endl;

    system("pause");
    return 0;
}
double distance_translation(double light_year)
{
    double astronomical_unit;
    astronomical_unit = 63240.0 * light_year;
    return astronomical_unit;
}