#include <iostream>
using namespace std;

const int Ft_to_In = 12;
const double In_to_Meter = 0.0254;
const double Kg_to_Pound = 2.2;

double calculate_BMI(double height, double weight);

int main()
{
    int inch;
    int foot;
    double pound;

    cout << "Please enter your height(x foots y inches): ";
    cin >> foot >> inch;
    cout << "Please enter your weight(pounds): ";
    cin >> pound;

    cout << "your BMI is " << calculate_BMI(In_to_Meter * (foot * Ft_to_In + inch), pound / Kg_to_Pound) << endl;

    system("pause");
    return 0;
}
double calculate_BMI(double height, double weight)
{
    double bmi = weight / (height * height);
    return bmi;
}