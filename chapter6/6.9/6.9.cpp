#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

#define SIZE 30

struct Donor
{
    string name;
    double money;
};

void showGrand(Donor *, int);
void showOther(Donor *, int);

int main()
{
    char fileName[SIZE];
    ifstream infile;
    int num = 0;

    cout << "Enter the filename: ";
    cin.getline(fileName, SIZE);
    infile.open(fileName);
    if (!infile.is_open())
    {
        cout << "Can't open file " << fileName << endl;
        cout << "program terminating." << endl;
        exit(EXIT_FAILURE);
    }
    infile >> num;
    infile.get(); // 清除缓存

    Donor *donor = new Donor[num];

    for (int i = 0; i < num; i++)
    {
        getline(infile, donor[i].name);
        infile >> donor[i].money;
        infile.get(); // 清除缓存
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
