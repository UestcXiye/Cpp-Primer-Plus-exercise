#include "stack.h"
#include <iostream>
using namespace std;

const bool YES = true;

int main()
{
    Stack st1;
    Stack st2;
    Item num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        st2.push(num[i]);
        cout << num[i] << " pushed into Stack st2.\n";
    }
    cout << endl;
    cout << "Is Stack st2 empty? " << st2.isempty() << endl;
    cout << "Is Stack st2 full? " << st2.isfull() << endl;

    st1 = st2;
    cout << "st1 = st2: " << endl;
    cout << "Is Stack st1 empty? " << st1.isempty() << endl;
    cout << "Is Stack st1 full? " << st1.isfull() << endl;

    Stack st3(st2);
    cout << "Use st2 to build st3: " << endl;
    cout << "Is Stack st3 empty? " << st3.isempty() << endl;
    cout << "Is Stack st3 full? " << st3.isfull() << endl;

    for (int i = 0; i < 10; i++)
    {
        st2.pop(num[i]);
        cout << num[i] << " poped from Stack st2.\n";
    }
    cout << "Stack st2 finish poping totally." << endl;
    cout << "Is Stack st2 empty: " << st2.isempty() << endl;
    cout << "Is Stack st2 full: " << st2.isfull() << endl;
    for (int i = 0; i < 6; i++)
    {
        st3.pop(num[i]);
        cout << num[i] << " poped from Stack st3.\n";
    }
    cout << "Stack st3 finish poping partly." << endl;
    cout << "Is Stack st3 empty: " << st3.isempty() << endl;
    cout << "Is Stack st3 full: " << st3.isfull() << endl;

    system("pause");
    return 0;
}