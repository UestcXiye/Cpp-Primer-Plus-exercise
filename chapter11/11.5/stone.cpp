#include "stonewt.h"
#include <iostream>
using namespace std;

int main()
{

    Stonewt incognito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);

    cout << "The celebrity weighed " << incognito;    // STONE
    cout << "The detective weighed " << wolfe;        // STONE
    cout << "The President weighed " << taft << endl; // INT_POUND

    Stonewt tf(2);
    Stonewt sum, diff, mult;

    sum = incognito + tf;
    diff = wolfe - tf;
    mult = taft * 2;
    cout << "The result will display as double_pounds:\n";
    cout << "After dinner, the celebrity weighed ";
    sum.SetFormat(Stonewt::DOUBLE_POUND);
    cout << sum;
    cout << "After sport, the detective weighed ";
    diff.SetFormat(Stonewt::DOUBLE_POUND);
    cout << diff;
    cout << "Now,the President weighed ";
    mult.SetFormat(Stonewt::DOUBLE_POUND);
    cout << mult;

    system("pause");
    return 0;
}