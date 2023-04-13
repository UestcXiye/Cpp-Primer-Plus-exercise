#include <iostream>
using namespace std;

struct CandyBar
{
    char brand[20];
    double weight;
    int calorie;
};

int main()
{
    CandyBar snack = {"Mocha Munch", 2.3, 350};

    cout << "The name of this CandyBar is: " << snack.brand << endl;
    cout << "The weight of this CandyBar is: " << snack.weight << endl;
    cout << "The calories of this CandyBar is: " << snack.calorie << endl;

    system("pause");
    return 0;
}
