#include <iostream>
using namespace std;
int main()
{
    double mileage;
    double fuelConsumption;

    cout << "Enter the mileage(miles): ";
    cin >> mileage;
    cout << "Enter the fuel consumption(gallons): ";
    cin >> fuelConsumption;
    cout << mileage / fuelConsumption << " miles/gallon.\n";

    cout << "Enter the mileage(kilometers): ";
    cin >> mileage;
    cout << "Enter the fuel consumption(litres): ";
    cin >> fuelConsumption;
    cout << 100 * fuelConsumption / mileage << " L/100Km.\n";

    system("pause");
    return 0;
}
