#include "stack.h"
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    Stack st;
    char ch;
    customer po;
    double total_payment = 0.0;

    cout << "Please enter A to add a purchase order,\n";
    cout << "P to process a PO, or Q to quit.\n";
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
            cin.getline(po.fullname, 30);
            cout << "Enter the payment: ";
            cin >> po.payment;
            cin.get();
            if (st.isfull())
                cout << "Stack already full.\n";
            else
                st.push(po);
            break;

        case 'P':
        case 'p':
            if (st.isempty())
                cout << "stack already empty.\n";
            else
            {
                total_payment += po.payment;
                st.pop(po);
                cout << "PO {" << po.fullname << ", " << po.payment << "} popped.\n";
            }
            break;
        }
        cout << "Please enter A to add a purchase order,\n";
        cout << "P to Process a PO, or Q to quit.\n";
    }
    cout << "Bye!\n";

    system("pause");
    return 0;
}