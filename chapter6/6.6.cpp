#include <iostream>
#include <cstring>
using namespace std;
struct Donor
{
    string name;
    double money;
};

void showGrand(Donor *, int);
void showOther(Donor *, int);

int main()
{
    int num = 0;

    cout << "How many donors are there? ";
    cin >> num;
    cin.get(); // 清除缓存

    Donor *donor = new Donor[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Please enter the " << i + 1 << "-th name: ";
        getline(cin, donor[i].name);
        cout << "Please enter the " << i + 1 << "-th money: ";
        cin >> donor[i].money;
        cin.get();
    }
    cout << "Grand Patrons:\n";
    showGrand(donor, num);
    cout << "Patrons:\n";
    showOther(donor, num);

    system("pause");
    return 0;
}

void showGrand(Donor *d, int num)
{
    int count = 0;

    for (int j = 0; j < num; j++)
    {
        if (d[j].money > 10000)
        {
            cout << d[j].name << "\t" << d[j].money << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "none\n";
}

void showOther(Donor *d, int num)
{
    int count = 0;
    for (int j = 0; j < num; j++)
    {
        if (d[j].money <= 10000)
        {
            cout << d[j].name << "\t" << d[j].money << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "none\n";
}
