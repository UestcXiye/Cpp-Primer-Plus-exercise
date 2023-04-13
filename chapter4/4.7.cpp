#include <iostream>
using namespace std;

struct Pizza
{
    char company[20];
    double diameter;
    double weight;
};

int main()
{
    Pizza pizza;
    
    cout << "Enter the company name of this pizza: ";
    cin.getline(pizza.company, 20);
    cout << "Enter the diameter of this pizza: ";
    cin >> pizza.diameter;
    cout << "Enter the weight of this pizza: ";
    cin >> pizza.weight;

    cout << "The company name of this pizza: " << pizza.company << endl;
    cout << "The diameter of this pizza: " << pizza.diameter << endl;
    cout << "The weight of this pizza: " << pizza.weight << endl;

    system("pause");
    return 0;
}
