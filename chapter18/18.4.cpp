#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

auto outint = [](int n)
{ std::cout << n << " "; };

int main()
{
    using std::cout;
    using std::endl;
    using std::list;

    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    list<int> yadayada(vals, vals + 10);
    list<int> etcetera(vals, vals + 10);

    cout << "Original lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;
    yadayada.remove_if([](int n)
                       { return n > 100; });
    etcetera.remove_if([](int n)
                       { return n > 200; });
    cout << "Trimmed lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;

    system("pause");
    return 0;
}
