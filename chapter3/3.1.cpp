#include <iostream>
using namespace std;
int main()
{
    const int Ft_to_In = 12;
    int height;

    cout << "Please enter your height(inch):______\b\b\b\b\b\b";
    cin >> height;
    cout << height << " inches is " << height / Ft_to_In << " foots and " << height % Ft_to_In << " inches.\n";

    system("pause");
    return 0;
}
