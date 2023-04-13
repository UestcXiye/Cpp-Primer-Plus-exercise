#include "golf.h"
#include <iostream>
using namespace std;

int main()
{
    Golf ann("Ann Birdfree", 24);
    ann.showgolf();

    Golf andy;
    andy.showgolf();
    andy.setHandicap(40);
    andy.showgolf();

    system("pause");
    return 0;
}