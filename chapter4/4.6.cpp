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
    CandyBar snack[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Month Date", 3.6, 400},
        {"XuFuJi", 5.2, 300},
    };
    
    for (int i = 0; i < 3; i++)
    {
        cout << snack[i].brand << "'s weight is " << snack[i].weight << ", and it includes " << snack[i].calorie << " calories.\n";
    }

    system("pause");
    return 0;
}
