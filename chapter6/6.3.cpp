#include <iostream>
using namespace std;
int main()
{
    char ch;

    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore           p) pianist" << endl;
    cout << "t) tree                g) game" << endl;

    while (cin >> ch)
    {
        switch (ch)
        {
        case 'c':
            cout << "A tiger is a carnivore." << endl;
            break;
        case 'p':
            cout << "Langlang is a pianist." << endl;
            break;
        case 't':
            cout << "A maple is a tree." << endl;
            break;
        case 'g':
            cout << "Golf is a game." << endl;
            break;
        default:
            cout << "Please enter a c, p, t, or g: ";
        }
    }

    system("pause");
    return 0;
}