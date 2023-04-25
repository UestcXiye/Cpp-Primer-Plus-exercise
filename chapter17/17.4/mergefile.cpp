#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char *argv[])
{
    using namespace std;

    if (argc < 4)
    {
        cerr << "Usage: " << argv[0] << " source1 source2 target\n";
        exit(EXIT_FAILURE);
    }
    ifstream fin1;
    fin1.open(argv[1]);
    if (!fin1.is_open())
    {
        cerr << "Can't open file " << argv[1] << endl;
        exit(EXIT_FAILURE);
    }
    ifstream fin2;
    fin2.open(argv[2]);
    if (!fin2.is_open())
    {
        cerr << "Can't open file " << argv[2] << endl;
        exit(EXIT_FAILURE);
    }
    ofstream fout;
    fout.open(argv[3]);
    if (!fout.is_open())
    {
        cerr << "Can't open file " << argv[3] << endl;
        exit(EXIT_FAILURE);
    }
    char ch;
    while (!fin1.eof() || !fin2.eof())
    {
        if (!fin1.eof())
        {
            while (fin1.get(ch) && ch != '\n')
                fout << ch;
            fout << ' ';
        }
        if (!fin2.eof())
        {
            while (fin2.get(ch) && ch != '\n')
                fout << ch;
        }
        fout << '\n';
    }
    fin1.clear();
    fin2.clear();
    fout.clear();
    fin1.close();
    fin2.close();
    fout.close();

    return 0;
}
