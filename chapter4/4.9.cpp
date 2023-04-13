#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calorie;
};

int main()
{
    CandyBar *snack = new CandyBar[3];
    snack[0] = {"Mocha Munch1", 2.3, 350};
    snack[1] = {"Mocha Munch2", 2.5, 360};
    snack[2] = {"Mocha Munch3", 2.7, 390};

    for (int i = 0; i < 3; i++)
    {
        cout << snack[i].brand << "'s weight is " << snack[i].weight << ", and it includes " << snack[i].calorie << " calories.\n";
    }

    delete[] snack;

    system("pause");
    return 0;
}
