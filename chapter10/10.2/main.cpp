#include "person.h"
#include <iostream>

int main(void)
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");

    one.Show();
    cout << endl;
    one.FormalShow();
    two.Show();
    cout << endl;
    two.FormalShow();
    three.Show();
    cout << endl;
    three.FormalShow();

    system("pause");
    return 0;
}