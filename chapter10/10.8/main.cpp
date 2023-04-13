#include "list.h"
#include <iostream>
using namespace std;

extern double sum;

int main()
{
    List st;
    char ch;
    customer c;

    cout << "Please enter A to add a purchase order, V to calculate the turnover, S to show the items, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << "\a";
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a':
            cout << "Enter the name of customer: ";
            getline(cin, c.name);
            cout << "Enter the payment: ";
            cin >> c.consumption;
            cin.get();
            if (st.isFull())
                cout << "List already full.\n";
            else
                st.add(c);
            break;
        case 'S':
        case 's':
            st.show();
            break;
        case 'V':
        case 'v':
            if (st.isEmpty())
            {
                cout << "List is empty.\n";
            }
            else
            {
                st.visit(total);
                cout << "sum = " << sum << endl;
            }
        }
        cout << "Please enter A to add a purchase order, V to calculate the turnover, S to show the items, or Q to quit.\n";
    }
    cout << "Bye!\n";

    system("pause");
    return 0;
}