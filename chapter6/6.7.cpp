#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

#define ArrSize 30

int main(void)
{
    char str[ArrSize];
    int count_other = 0, count_vowel = 0, count_consonant = 0;

    cout << "Enter words(q to quit) :" << endl;
    while (cin >> str)
    {
        if (strcmp(str, "q") == 0)
            break;
        char ch = str[0];
        if (isalpha(ch))
        {

            switch (ch)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count_vowel++;
                break;
            default:
                count_consonant++;
            }
        }
        else
            count_other++;
    }
    cout << count_vowel << " words beginning with vowels\n";
    cout << count_consonant << " words beginning with consonants\n";
    cout << count_other << " others\n";

    system("pause");
    return 0;
}