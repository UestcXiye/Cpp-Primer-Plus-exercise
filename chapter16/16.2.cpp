#include <iostream>
#include <string>
using std::string;

bool isPalindrome(const string &);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    string s;

    cout << "Please enter a string, I'll tell you if it's a palindrome string" << endl;
    getline(cin, s);

    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
            temp += tolower(s[i]);
    }
    // cout << temp << endl;
    if (isPalindrome(temp))
        cout << "Yes! \"" << s << "\" is a palindrome string" << endl;
    else
        cout << "No, \"" << s << "\" isn't a palindrome string" << endl;

    system("pause");
    return 0;
}

bool isPalindrome(const string &s)
{
    string rev(s.rbegin(), s.rend());
    return rev == s;
}