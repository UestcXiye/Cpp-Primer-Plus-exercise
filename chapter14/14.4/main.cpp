#include <iostream>
#include <cstring>
#include "person.h"
using namespace std;

const int SIZE = 5;

int main()
{
    Person *person[SIZE];
    int ct;

    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category: \n"
             << "g: Gunslinger p: PokerPlayer "
             << "b: BadDude   q: quit\n";
        cin >> choice;
        while (strchr("gpbq", choice) == NULL)
        {
            cout << "Please enter a g, p, b, or q: ";
            cin >> choice;
        }
        if ('q' == choice)
            break;
        switch (choice)
        {
        case 'g':
            person[ct] = new Gunslinger("Guns", "Linger", 1.2, 3);
            break;
        case 'p':
            person[ct] = new PokerPlayer("Poker", "Player", 2);
            break;
        case 'b':
            person[ct] = new BadDude("Bad", "Dude", 2.1, 5);
            break;
        }
        cin.get();
    }
    cout << "\nHere is your staff:\n";
    for (int i = 0; i < ct; i++)
    {
        cout << endl;
        person[i]->Show();
    }

    for (int i = 0; i < ct; i++)
        delete person[i];

    BadDude *badd = new BadDude("Bad", "Dude", 3.3, 12);
    cout << "Draw time: " << badd->Gdraw() << endl;
    cout << "Next card: " << badd->Cdraw() << endl;
    delete badd;

    cout << "Bye.\n";

    return 0;
}
