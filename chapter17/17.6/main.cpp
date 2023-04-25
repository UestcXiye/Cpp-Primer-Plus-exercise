#include <iostream>
#include "emp.h"
#include <cstdlib>
#include <fstream>

const int MAX = 10;
const char *file = "test.txt";

int main()
{
    using namespace std;
    char ch;
    int i;
    abstr_emp *pc[MAX];
    ifstream fin;
    fin.open(file);

    if (!fin.is_open())
    {
        cout << "Couldn't open files!\n";
        exit(EXIT_FAILURE);
    }
    int classtype;
    i = 0;
    while ((fin >> classtype).get(ch))
    {
        switch (classtype)
        {
        case Employee:
            pc[i] = new employee;
            break;
        case Manager:
            pc[i] = new manager;
            break;
        case Fink:
            pc[i] = new fink;
            break;
        case Highfink:
            pc[i] = new highfink;
            break;
        }
        pc[i]->getall(fin);
        pc[i]->ShowAll();
    }
    fin.close();

    ofstream fout(file, ios::out | ios::app);
    if (!fout.is_open())
    {
        cerr << "Couldn't open file!";
        exit(EXIT_FAILURE);
    }

    int index = 0;
    cout << "Please choose the class you want to enter:\n"
         << "e for employee, m for manager,\n"
         << "f for fink, h for highfink,\n"
         << "q to quit\n";
    while (cin >> ch && index < MAX)
    {
        if (ch == 'q')
            break;
        switch (ch)
        {
        case 'e':
            pc[index] = new employee;
            break;
        case 'm':
            pc[index] = new manager;
            break;
        case 'f':
            pc[index] = new fink;
            break;
        case 'h':
            pc[index] = new highfink;
            break;
        }
        pc[index]->SetAll();
        index++;
        cout << "Please choose the class you want to enter:\n"
             << "e for employee, m for manager,\n"
             << "f for fink, h for highfink,\n"
             << "q to quit\n";
    }

    for (i = 0; i < index; i++)
        pc[i]->writeall(fout);
    fout.close();

    fin.clear();
    fin.open(file);
    if (fin.is_open())
    {
        cout << "Here are the contents of the " << file << " file:\n";
        int classtype;
        i = 0;
        while ((fin >> classtype).get(ch))
        {
            switch (classtype)
            {
            case Employee:
                pc[i] = new employee;
                break;
            case Manager:
                pc[i] = new manager;
                break;
            case Fink:
                pc[i] = new fink;
                break;
            case Highfink:
                pc[i] = new highfink;
                break;
            }
            pc[i]->getall(fin);
            pc[i]->ShowAll();
        }
        fin.close();
    }
    cout << "Done.\n";

    return 0;
}
