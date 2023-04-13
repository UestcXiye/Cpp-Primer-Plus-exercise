#include <iostream>
using namespace std;

long double probability(unsigned, unsigned);

int main()
{
    double field_total = 47, field_choices = 5;
    double special_total = 27, special_choices = 1;

    cout << "You have one chance in ";
    cout << probability(field_total, field_choices) * probability(special_total, special_choices);
    cout << " of winning.\n";

    system("pause");
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        result = result * n / p;
    }
    return result;
}