#include "list.h"
#include <iostream>
#include <cstring>
using namespace std;

double sum = 0.0;

List::List()
{
    top = 0;
}

bool List::isEmpty() const
{
    return top == 0;
}

bool List::isFull() const
{
    return top == LEN;
}

bool List::add(const Item &item)
{
    if (top < LEN)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

void List::show() const
{
    for (int i = 0; i < top; i++)
    {
        cout << "#" << i + 1 << ":" << endl;
        cout << "Name: " << items[i].name << endl;
        cout << "Consumption: " << items[i].consumption << endl;
    }
}

void List::visit(void (*pf)(Item &item))
{
    for (int i = 0; i < top; i++)
        pf(items[i]);
}

void total(Item &item)
{
    sum += item.consumption;
}
