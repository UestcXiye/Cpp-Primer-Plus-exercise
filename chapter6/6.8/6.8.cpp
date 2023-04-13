#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

#define SIZE 60

int main()
{
    char filename[SIZE];
    ifstream inFile;

    cout << "Enter name of data file:";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating." << endl;
        exit(EXIT_FAILURE);
    }

    int count = 0;
    char ch;

    inFile >> ch;
    while (inFile.good())
    {
        count++;
        inFile >> ch;
        // cout << ch;
    }
    if (inFile.eof())
        cout << "End of file reached." << endl;
    else if (inFile.fail())
        cout << "Input terminated by data mismatch." << endl;
    else
        cout << "Input terminated for unknown reason." << endl;

    cout << "A total of " << count << " characters were read." << endl;
    inFile.close();

    system("pause");
    return 0;
}