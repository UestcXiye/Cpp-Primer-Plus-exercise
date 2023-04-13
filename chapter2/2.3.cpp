#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void func1(void);
void func2(void);

int main()
{
    func1();
    func1();
    func2();
    func2();
    
    system("pause");
    return 0;
}
void func1(void)
{
    string message = "Three blind mice";
    cout<<message<<endl;
}
void func2(void)
{
    string message = "See how they run";
    cout<<message<<endl;
}