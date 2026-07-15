#include <bits/stdc++.h>
using namespace std;

/*
11. Write a program to read a number and check whether it is even or odd.
12. Write a program to read a number and check whether it is positive, negative or zero.
13. Write a program to read three numbers and find the largest among them.
14. Write a program to read three numbers and find the smallest among them.
15. Write a program to read a year and check whether it is a leap year or not.
16. Write a program to read a character and check whether it is a vowel or a consonant.
17. Write a program to read a character and check whether it is an alphabet, digit or special
symbol.
18. Write a program to read the marks of a student and print the grade (A/B/C/D/Fail).
19. Write a program to read a number and check whether it is divisible by both 3 and 5.
20. Write a program to read the age of a person and check whether they are eligible to vote
*/

void q11()
{
    int num;
    cin >> num;
    if (num & 1)
    {
        cout << "Odd" << endl;
    }
    else
    {
        cout << "Even" << endl;
    }
}

void q12()
{
    int num;
    cin >> num;
    if (num > 0)
    {
        cout << "Positive" << endl;
    }
    else if (num < 0)
    {
        cout << "Negative" << endl;
    }
    else
    {
        cout << "ZERO!" << endl;
    }
}

void q13()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << endl;
    }
    else
    {
        cout << c << endl;
    }
}

void q14()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && a < c)
    {
        cout << a << endl;
    }
    else if (b < a && b < c)
    {
        cout << c << endl;
    }
    else
    {
        cout << c << endl;
    }
}

void q15()
{
    cout << "Leap or not!" << endl;
    int year;
    cin >> year;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "Leap!" << endl;
    }
    else
    {
        cout << "Nah!" << endl;
    }
}

void q16()
{
    char ch;
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "Vowel" << endl;
    }
    else
    {
        cout << "Consonant" << endl;
    }
}

void q17()
{
    string str;
    getline(cin >> ws, str);
    int alpha = 0, num = 0, special = 0;
    for (char ch : str)
    {
        if (isalpha(ch))
        {
            alpha++;
        }
        else if (isdigit(ch))
        {
            num++;
        }
        else
        {
            special++;
        }
    }
    cout << "Alphabet: " << alpha << endl;
    cout << "Numbers: " << num << endl;
    cout << "Special Symbols: " << special << endl;
}

void q18()
{
    int marks;
    cin >> marks;
    switch (marks / 10)
    {
    case 10:
        cout << "Peak!" << endl;
        break;
    case 9:
        cout << "Excellence" << endl;
        break;
    case 8:
        cout << "Serious Effort" << endl;
        break;
    case 7:
        cout << "Good Shot" << endl;
        break;
    case 6:
        cout << "STFU!" << endl;
        break;
    default:
        cout << "Little Pig! Little Pig!" << endl;
        break;
    }
}

void q19()
{
    int num;
    if (num % 3 == 0)
    {
        cout << "Divisible by 3" << endl;
    }
    else if (num % 5 == 0)
    {
        cout << "Divisible by 5" << endl;
    }
}

void q20()
{
    int age;
    cin >> age;
    if (age > 18)
    {
        cout << "Hell yeah!" << endl;
    }
    else if (age < 18)
    {
        cout << "Hell NAh!" << endl;
    }
    else
    {
        cout << "IDK!" << endl;
    }
}

int main()
{
    cout << "\n"
         << string(50, '=') << endl;
    cout << "        LEVEL 2: CONDITIONAL LOGIC" << endl;
    cout << string(50, '=') << "\n"
         << endl;

    cout << "[Q11] Check Even or Odd" << endl;
    cout << "├─ Input: an integer" << endl;
    cout << "└─ Output: ";
    q11();
    cout << endl;

    cout << "[Q12] Check Number Sign (Positive/Negative/Zero)" << endl;
    cout << "├─ Input: an integer" << endl;
    cout << "└─ Output: ";
    q12();
    cout << endl;

    cout << "[Q13] Find Largest Among Three Numbers" << endl;
    cout << "├─ Input: 3 integers (a, b, c)" << endl;
    cout << "└─ Output: ";
    q13();
    cout << endl;

    cout << "[Q14] Find Smallest Among Three Numbers" << endl;
    cout << "├─ Input: 3 integers (a, b, c)" << endl;
    cout << "└─ Output: ";
    q14();
    cout << endl;

    cout << "[Q15] Check Leap Year" << endl;
    cout << "├─ Input: a year (integer)" << endl;
    cout << "├─ Process:" << endl;
    q15();
    cout << endl;

    cout << "[Q16] Check Vowel or Consonant" << endl;
    cout << "├─ Input: a character" << endl;
    cout << "└─ Output: ";
    q16();
    cout << endl;

    cout << "[Q17] Classify Character (Alphabet/Digit/Special)" << endl;
    cout << "├─ Input: a string" << endl;
    cout << "└─ Output:" << endl;
    q17();
    cout << endl;

    cout << "[Q18] Assign Grade Based on Marks" << endl;
    cout << "├─ Input: marks (0-100)" << endl;
    cout << "└─ Output: ";
    q18();
    cout << endl;

    cout << "[Q19] Check Divisibility by 3 and 5" << endl;
    cout << "├─ Input: an integer" << endl;
    cout << "└─ Output: ";
    q19();
    cout << endl;

    cout << "[Q20] Check Voting Eligibility by Age" << endl;
    cout << "├─ Input: age (integer)" << endl;
    cout << "└─ Output: ";
    q20();
    cout << endl;

    cout << string(50, '=') << endl;
    cout << "     ✓ ALL LEVEL 2 QUESTIONS COMPLETED" << endl;
    cout << string(50, '=') << "\n"
         << endl;

    return 0;
}