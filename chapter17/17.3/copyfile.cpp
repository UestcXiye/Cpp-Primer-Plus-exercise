#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char *argv[])
{
    using namespace std;

    if (argc < 3)
    {
        cerr << "Usage: " << argv[0] << " source target\n";
        exit(EXIT_FAILURE);
    }
    ifstream fin;
    fin.open(argv[1]);
    if (!fin.is_open())
    {
        cerr << "Can't open file " << argv[1] << endl;
        exit(EXIT_FAILURE);
    }
    ofstream fout;
    fout.open(argv[2]);
    if (!fout.is_open())
    {
        cerr << "Can't open file " << argv[2] << endl;
        exit(EXIT_FAILURE);
    }
    char ch;
    while (fin.get(ch) && ch != EOF)
        fout << ch;
    fin.clear();
    fin.close();
    fout.clear();
    fout.close();

    return 0;
}
