#include <iostream>
#include "cpmv.h"

int main()
{
    using std::move;

    Cpmv c1;
    Cpmv c2("abc", "123");
    Cpmv c3(c2);
    c1 = c2;
    c1.Display();
    Cpmv c4(move(c1));
    c4.Display();
    Cpmv c5;
    c5 = move(c2);
    c5.Display();
    Cpmv c6("abc", "123");
    Cpmv c7("def", "456");
    Cpmv c8 = c6 + c7;
    c8.Display();

    system("pause");
    return 0;
}