#include <iostream>
using namespace std;
int main()
{
    const double OneHundredKilometers_to_Miles = 62.14;
    const double Gallon_to_Litre = 3.875;
    double fuelConsumption;
    double mile;
    double gallon;
    double result;

    cout << "Enter the fuel consumption(L/100Km): ";
    cin >> fuelConsumption;

    mile = OneHundredKilometers_to_Miles;
    gallon = fuelConsumption / Gallon_to_Litre;
    result = mile / gallon;

    cout << fuelConsumption << " L/100Km = " << result << " mpg.\n";

    system("pause");
    return 0;
}
