#include "dma.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "How many DMAs do you have? ";
    cin >> n;

    ABC *p_dma[n];
    char *t_label = new char[50];
    int t_rating;
    int kind;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter label: ";
        cin.getline(t_label, 50);
        cout << "Enter rating: ";
        cin >> t_rating;
        cout << "Enter 1 for baseDMA or 2 for lacksDMA or 3 for hasDMA: ";
        while (cin >> kind && kind != 1 && kind != 2 && kind != 3)
            cout << "Enter either 1 or 2 or 3: ";
        cin.ignore();
        switch (kind)
        {
        case 1:
            p_dma[i] = new baseDMA(t_label, t_rating);
            break;
        case 2:
            char t_color[40];
            cout << "Enter color: ";
            cin.getline(t_color, 40);
            p_dma[i] = new lacksDMA(t_color, t_label, t_rating);
            break;
        case 3:
            char *t_style = new char[20];
            cout << "Enter style: ";
            cin.getline(t_style, 20);
            p_dma[i] = new hasDMA(t_style, t_label, t_rating);
            break;
        }
        while (cin.get() != '\n')
            continue;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        p_dma[i]->View();
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete p_dma[i];
    }
    cout << "Done.\n"
         << endl;

    system("pause");
    return 0;
}