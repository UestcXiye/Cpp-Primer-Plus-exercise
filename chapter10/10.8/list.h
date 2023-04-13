#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <cstring>

struct customer
{
    string name;
    double consumption;
};

typedef customer Item;

class List
{
private:
    static const int LEN = 20;
    Item items[LEN];
    int top = 0;

public:
    List();
    bool isEmpty() const;
    bool isFull() const;
    bool add(const Item &item);
    void visit(void (*pf)(Item &item));
    void show() const;
};

void total(Item &item); // 计算总营业额（列表中所有顾客消费额相加）

#endif
