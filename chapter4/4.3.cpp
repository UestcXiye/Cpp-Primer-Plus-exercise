#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char firstName[20];
    char lastName[20];
    char information[50];
    cout << "Enter your first name: ";
    cin.getline(firstName, 20);
    cout << "Enter your last name: ";
    cin.getline(lastName, 20);

    strcpy(information, lastName);
    strcat(information, ", ");
    strcat(information, firstName);

    cout << "Here's the information in a single string: " << information << endl;

    system("pause");
    return 0;
}
