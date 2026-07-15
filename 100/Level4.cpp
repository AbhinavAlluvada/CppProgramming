#include <bits/stdc++.h>
using namespace std;
/*
Level 4 — Working with the digits of a number

33.
 Write a program to count the number of digits in a number n.

34.
 Write a program to display all the digits of a number n (one per line).

35.
 Write a program to find the sum of all digits of a number n.

36.
 Write a program to find the product of all digits of a number n.

37.
 Write a program to reverse a number n.

38.
 Write a program to find the largest digit in a number n.

39.
 Write a program to find the smallest digit in a number n.

40.
 Write a program to count the number of even digits and odd digits in a number n.

41.
 Write a program to check whether a number n is a palindrome (reads the same reversed).

42.
 Write a program to replace all zeros in a number n with the digit 5.

43.
 Write a program to find the sum of the first and last digit of a number n
*/

void q33()
{
    int n;
    cin >> n;
    int digit_count = 0;
    while (n != 0)
    {
        digit_count++;
        n = n / 10;
    }
    cout << digit_count << endl;
}

void q34()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        int digit = n % 10;
        cout << digit << endl;
        n = n / 10;
    }
}

void q35()
{
    int n;
    cin >> n;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum = digit + sum;
        n = n / 10;
    }
    cout << sum << endl;
}

void q36()
{
    int n;
    cin >> n;
    int prod = 1;
    while (n != 0)
    {
        int digit = n % 10;
        prod = prod * digit;
        n = n / 10;
    }
    cout << prod << endl;
}

void q37()
{
    int n;
    cin >> n;
    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    cout << "Reverse: " << rev << endl;
}

void q38()
{
    int n;
    cin >> n;
    int max = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit > max)
        {
            max = digit;
        }
        n = n / 10;
    }
    cout << max << endl;
}

void q39()
{
    int n;
    cin >> n;
    int min = 9;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit < min)
        {
            min = digit;
        }
        n = n / 10;
    }
    cout << min << endl;
}

void q40()
{
    int n;
    cin >> n;
    int even = 0, odd = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit & 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
        n = n/10;
    }
    cout << "Even count: " << even << endl;
    cout << "Odd count: " << odd << endl;
}

void q41()
{
    int n;
    cin >> n;
    int temp = n;
    int rev = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }
    if (rev == n)
    {
        cout << "Palindrome!" << endl;
    }
    else
    {
        cout << "Nah!" << endl;
    }
}
void q42()
{
    int n;
    cin >> n;
    int num = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 0)
        {
            num = num + pow(10, i) * 5;
            i++;
            continue;
        }
        num = num + pow(10, i) * digit;
        i++;
    }

    cout << num << endl;
}

void q43()
{
    int n;
    cin >> n;
    int first_digit = 0, last_digit = 0;
    while (n != 0)
    {
        last_digit = n % 10;
        int digit = n % 10;
        n = n / 10;
        first_digit = digit;
    }

    cout << "First-Digit: " << first_digit << endl;
    cout << "Last-Digit: " << last_digit << endl;
}
int main()
{
    cout << "Level-4 Programs!";
    return 0;
}