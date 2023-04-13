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
    Pizza *pizza = new Pizza;

    cout << "Enter the diameter of this pizza: ";
    // cin >> (*pizza).diameter;
    cin >> pizza->diameter;
    // 使用不带任何参数的cin.get()调用可读取下一个字符
    cin.get();
    cout << "Enter the company name of this pizza: ";
    // cin.getline((*pizza).company, 20);
    cin.getline(pizza->company, 20);
    cout << "Enter the weight of this pizza: ";
    // cin >> (*pizza).weight;
    cin >> pizza->weight;

    cout << "The company name of this pizza: " << (*pizza).company << endl;
    cout << "The diameter of this pizza: " << (*pizza).diameter << endl;
    cout << "The weight of this pizza: " << (*pizza).weight << endl;

    delete pizza;

    system("pause");
    return 0;
}
