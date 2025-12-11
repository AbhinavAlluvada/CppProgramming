#include <iostream>
using namespace std;
void checkit(string str)
{
    int vowels = 0;
    int consonants = 0;
    int digit = 0;
    int spaces = 0;
    for (char ch : str)
    {
        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        if (isdigit(ch))
        {
            digit++;
        }
        if (ch == ' ')
        {
            spaces++;
        }
    }
    cout << "Spaces: " << spaces << endl;
    cout << "Digits: " << digit << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
}
int main()
{
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);
    checkit(str);
    return 0;
}