#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using std::list;
using std::string;

void show(list<string>);

int main()
{
    using std::cin;
    using std::cout;

    list<string> mat, pat, final;
    string name;

    cout << "Please enter Mat's friends' name (q to quit):\n";
    while (getline(cin, name))
    {
        if (name == "q")
            break;
        mat.push_back(name);
        cout << "Enter Mat's friends' name (q for quit):\n";
    }
    cout << "Please enter Pat's friends' name (q for quit):\n";
    while (getline(cin, name))
    {
        if (name == "q")
            break;
        pat.push_back(name);
        cout << "Enter Pat's friends' name (q for quit):\n";
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
    cout << "Merge mat and pat's friends and delete the duplicate parts:\n";
    show(final);

    system("pause");
    return 0;
}

void show(list<string> ls)
{
    using std::cout;
    using std::endl;

    for (list<string>::iterator it = ls.begin(); it != ls.end(); it++)
        cout << (*it) << " ";
    cout << endl;
}