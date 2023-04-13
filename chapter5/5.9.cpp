#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int count = 0;

    cout << "Enter words (to stop, type the word done):\n";
    while (cin >> word && word != "done")
        count++;
    cout << "You  entered a total of " << count << " words.\n";

    system("pause");
    return 0;
}
