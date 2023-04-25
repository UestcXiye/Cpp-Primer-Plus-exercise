#include <iostream>
#include <cstdlib>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::exit;

    char ch;
    int count = 0;

    while (cin.peek() != '$')
    {
        cin.get(ch);
        count++;
        cout << ch;
    }
    cout << "\nThere are " << count << " characters before first '$'\n";
    if (!cin.eof())
    {
        cin.get(ch);
        cout << ch << " is the next input character\n";
    }
    else
    {
        cout << "End of file reached.\n";
        exit(EXIT_FAILURE);
    }

    system("pause");
    return 0;
}
