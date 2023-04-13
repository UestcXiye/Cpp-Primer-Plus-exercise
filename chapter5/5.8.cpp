#include <iostream>
#include <cstring>
#define ArrSize 30
using namespace std;

int main()
{
    char word[ArrSize];
    int count = 0;

    cout << "Enter words (to stop, type the word done):\n";
    while (cin >> word && strcmp("done", word))
        count++;
    cout << "You  entered a total of " << count << " words.\n";

    system("pause");
    return 0;
}
