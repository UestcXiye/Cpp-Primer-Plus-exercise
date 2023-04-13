#include "cow.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    Cow c1;
    cout << "c1: " << endl;
    c1.ShowCow();
    Cow c2("Cow2", "study", 100.23);
    cout << "c2: " << endl;
    c2.ShowCow();
    Cow c3("Cow3", "play game", 150.80);
    cout << "c3: " << endl;
    c3.ShowCow();
    Cow c4(c2);
    cout << "c4: " << endl;
    c4.ShowCow();
    c1 = c3;
    cout << "c1 = c3: " << endl;
    c3.ShowCow();
    c1.ShowCow();

    system("pause");
    return 0;
}