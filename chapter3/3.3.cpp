#include <iostream>
#include <string>
using namespace std;
int main()
{
    const int D_to_M = 60;
    const int M_to_S = 60;
    int degree;
    int minute;
    int second;
    double result;
    string prompt = "Enter a latitude in degrees, minutes, and seconds:\n";

    cout << prompt;
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;

    result = degree + double(minute) / M_to_S + double(second) / M_to_S / D_to_M;

    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << result << " degrees\n";

    system("pause");
    return 0;
}
