#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char c;

    cout << "Enter text for analysis(enter @ to quit):\n";
    while (cin >> c && c != '@')
    {
        if (islower(c))
            c = toupper(c);
        else if (isupper(c))
            c = tolower(c);
        if (!isdigit(c))
            cout << c;
    }
    cout << "Done!\n";

    system("pause");
    return 0;
}
