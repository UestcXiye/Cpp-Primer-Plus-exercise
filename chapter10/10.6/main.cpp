#include "move.h"
#include <iostream>
using namespace std;

int main()
{
    Move a(1, 1);
    Move b(2.3, 3.4);
    a.showmove();
    b.showmove();
    Move c = a.add(b);
    c.showmove();

    system("pause");
    return 0;
}