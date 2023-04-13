#include <iostream>
using namespace std;
int main()
{
    long long world;
    long long country;
    double percentage;

    cout << "Enter the world's population: ";
    cin >> world;
    cout << "Enter the population of the US: ";
    cin >> country;

    percentage = double(country) / double(world);
    cout << "The population of the US is " << 100 * percentage << "%"
         << " of the world population.\n";

    system("pause");
    return 0;
}
