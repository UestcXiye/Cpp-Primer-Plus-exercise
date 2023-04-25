#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char *argv[])
{
    using namespace std;

    if (argc == 1)
    {
        cerr << "Usage: " << argv[0] << " filename\n";
        exit(EXIT_FAILURE);
    }
    ofstream fout;
    fout.open(argv[1]);
    if (!fout.is_open())
    {
        cerr << "Can't open file " << argv[1] << endl;
        exit(EXIT_FAILURE);
    }
    char ch;
    while (cin.get(ch) && ch != EOF)
        fout << ch;
    fout.clear();
    fout.close();

    return 0;
}
