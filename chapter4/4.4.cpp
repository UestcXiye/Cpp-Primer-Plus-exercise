#include <iostream>
#include <string>
using namespace std;
int main()
{
    string firstName, lastName;
    string information;

    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);
    
    information = firstName+", "+lastName;
    cout << "Here's the information in a single string: " << information << endl;

    system("pause");
    return 0;
}
