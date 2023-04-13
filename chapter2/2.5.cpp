#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

double temperature_translation(double celsius);

int main()
{
    double c;
    string prompt = "Please enter a Celsius value: ";

    cout << prompt;
    cin >> c;
    cout << c << " degrees Celsius is " << temperature_translation(c) << " degrees Fahrenheit." << endl;

    system("pause");
    return 0;
}
double temperature_translation(double celsius)
{
    double fahrenheit = 1.8 * celsius + 32.0;
    return fahrenheit;
}