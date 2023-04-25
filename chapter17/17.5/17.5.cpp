#include <iostream>
#include <fstream>
#include <cstdlib>
#include <list>
#include <string>
#include <algorithm>
using std::list;
using std::string;

void show(list<string>);

int main()
{
    using std::cerr;
    using std::cin;
    using std::cout;
    using std::endl;
    using std::exit;
    using std::ifstream;
    using std::ios_base;
    using std::ofstream;

    list<string> mat, pat, final;
    ifstream fmat("mat.dat", ios_base::in);
    if (!fmat.is_open())
    {
        cerr << "Can't open file mat.dat\n";
        exit(EXIT_FAILURE);
    }
    ifstream fpat("pat.dat", ios_base::in);
    if (!fpat.is_open())
    {
        cerr << "Can't open file pat.dat\n";
        exit(EXIT_FAILURE);
    }
    ofstream fout("matnpat.dat", ios_base::out);
    if (!fout.is_open())
    {
        cerr << "Can't open file matnpat.dat\n";
        exit(EXIT_FAILURE);
    }
    string name;
    while (!fmat.eof())
    {
        getline(fmat, name);
        mat.push_back(name);
    }
    while (!fpat.eof())
    {
        getline(fpat, name);
        pat.push_back(name);
    }
    mat.sort();
    cout << "Mat's friend:\n";
    show(mat);
    pat.sort();
    cout << "Pat's friend:\n";
    show(pat);
    final.merge(mat);
    final.merge(pat);
    final.sort();
    final.unique();
    for (list<string>::iterator it = final.begin(); it != final.end(); it++)
        fout << (*it) << endl;
    cout << "Merge mat and pat's friends and delete the duplicate parts:\n";
    show(final);

    return 0;
}

void show(list<string> ls)
{
    using std::cout;
    using std::endl;

    for (list<string>::iterator it = ls.begin(); it != ls.end(); it++)
        cout << (*it) << endl;
    cout << endl;
}