#include <iostream>
#include <cstring>
#include <string>
using namespace std;

const int strLen = 20;

typedef struct CandyBar
{
    char brand[strLen];
    double weight;
    int calories;
} CandyBar;

void fill_CandyBar(CandyBar &candyBar, const char brand[] = "Millennium Munch", const double weight = 2.85, const int calories = 350);
void display_CandyBar(const CandyBar &candyBar);

int main()
{
    CandyBar c1, c2;

    fill_CandyBar(c1);
    display_CandyBar(c1);
    cout << endl;
    fill_CandyBar(c2, "Margaret", 4.28, 900);
    display_CandyBar(c2);

    system("pause");
    return 0;
}

void fill_CandyBar(CandyBar &candyBar, const char brand[], const double weight, const int calories)
{
    strcpy_s(candyBar.brand, brand);
    candyBar.weight = weight;
    candyBar.calories = calories;
}

void display_CandyBar(const CandyBar &candyBar)
{
    cout << "Brand:" << candyBar.brand << endl;
    cout << "Weight:" << candyBar.weight << endl;
    cout << "Calories:" << candyBar.calories << endl;
}