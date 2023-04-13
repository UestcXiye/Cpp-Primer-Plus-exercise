#include <iostream>
#include <string>
using namespace std;
struct Car
{
    string producer;
    int madeYear;
};
int main()
{
    int num = 0;

    cout << "How many cars do you wish to catalog? ";
    cin >> num;
    cin.get();

    Car *cars = new Car[num];

    for (int i = 0; i < num; i++)
    {
        cout << "car #" << i + 1 << ":\n";
        cout << "Please enter the make: ";
        getline(cin, cars[i].producer);

        cout << "Please enter the year made: ";
        cin >> cars[i].madeYear;
        cin.get();
    }
    cout << "Here is your collection:\n";
    for (int i = 0; i < num; i++)
        cout << cars[i].madeYear << " " << cars[i].producer << endl;

    system("pause");
    return 0;
}
