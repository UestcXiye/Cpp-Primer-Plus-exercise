#include <iostream>
#include <cstring>
#include <new>
using namespace std;

const int N = 2;
const int BUF = 512;
char buffer[BUF];

struct chaff
{
    /* data */
    char dross[20];
    int slag;
};

int main()
{
    chaff *pc1, *pc2;
    pc1 = new chaff[N];          // use heap
    pc2 = new (buffer) chaff[N]; // use buffer array
    char d[20];

    // test *pc1
    for (int i = 0; i < N; i++)
    {
        cout << "Enter dross of #" << i + 1 << " chaff: ";
        cin.getline(d, 20);
        strcpy_s(pc1[i].dross, d);
        cout << "Enter slag of #" << i + 1 << " chaff: ";
        cin >> pc1[i].slag;
        cin.get();
    }
    for (int i = 0; i < N; i++)
    {
        cout << "chaff #" << i + 1 << ":\n";
        cout << "dross: " << pc1[i].dross << endl;
        cout << "slag: " << pc1[i].slag << endl;
    }
    // test *pc2
    for (int i = 0; i < N; i++)
    {
        cout << "Enter dross of #" << i + 1 << " chaff: ";
        cin.getline(d, 20);
        strcpy_s(pc2[i].dross, d);
        cout << "Enter slag of #" << i + 1 << " chaff: ";
        cin >> pc2[i].slag;
        cin.get();
    }
    for (int i = 0; i < N; i++)
    {
        cout << "chaff #" << i + 1 << ":\n";
        cout << "dross: " << pc2[i].dross << endl;
        cout << "slag: " << pc2[i].slag << endl;
    }

    system("pause");
    return 0;
}