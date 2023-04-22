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
    cin >> s;

    if (isPalindrome(s))
        cout << "Yes! \"" << s << "\" is a palindrome string" << endl;
    else
        cout << "No, \"" << s << "\" isn't a palindrome string" << endl;

    system("pause");
    return 0;
}

// bool isPalindrome(const string &s)
// {
//     int len = s.size();
//     for (int i = 0; i < len / 2; i++)
//     {
//         if (s[i] != s[len - i - 1])
//             return false;
//     }
//     return true;
// }

bool isPalindrome(const string &s)
{
    string rev(s.rbegin(), s.rend());
    return rev == s;
}