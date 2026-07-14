#include <bits/stdc++.h>
using namespace std;

// Q1: Print Hello World!.
void q1()
{
    cout << "Hello World!" << endl;
}

// Q2: Read two numbers and print their sum.
void q2()
{
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
}

// Q3: Read two numbers and print their sum, difference, product and quotient.
void q3()
{
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
}

// Q4: Read the radius of a circle and print its area and circumference.
void q4()
{
    int PI = 3.14;
    int r;
    cin >> r;
    cout << "Circumference: " << 2 * PI * r << endl;
    cout << "Area: " << PI * PI * r << endl;
}

// Q5: Read the length and breadth of a rectangle and print its area and perimeter.
void q5()
{
    int l, b;
    cin >> l >> b;
    cout << "Perimeter: " << 2 * (l + b) << endl;
    cout << "Area: " << l * b << endl;
}

// Q6: Swap two numbers using a third variable.
void q6()
{
    int a = 10, b = 20;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    int temp = a;
    a = b;
    b = temp;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

// Q7: Swap two numbers without using a third variable.
void q7()
{
    int a = 10, b = 20;
    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << " " << b << endl;
}

// Q8: Read a temperature in Celsius and convert it to Fahrenheit.
void q8()
{
    double CF = 1.8;
    double cel;
    cin >> cel;
    double fah = (cel * CF) + 32;
    cout << cel << "C --> " << fah << "F" << endl;
}

// Q9: Read the marks of 5 subjects and print the total and average.
void q9()
{
    double sub1, sub2, sub3, sub4, sub5;
    cout << "Enter subject marks: " << endl;
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
    double total = sub1 + sub2 + sub3 + sub4 + sub5;
    double avg = total / 5;

    cout << "Total: " << total << endl;
    cout << "Average: " << avg << endl;
}

// Q10: Read seconds and convert them into hours, minutes and seconds.
void q10()
{
    int seconds;
    cin >> seconds;

    int hours = (seconds / 3600);
    int minutes = (seconds % 3600) / 60;
    int secs = seconds / 60;

    cout << hours << "hr " << minutes << "min " << secs << "sec" << endl;
}

int main()
{
    cout << "===== Running Level 1 Questions =====" << endl;

    cout << "[Q1] No input needed." << endl;
    q1();
    cout << "--- End of Q1 ---" << endl
         << endl;

    cout << "[Q2] Input: Enter 2 integers (a b)." << endl;
    q2();
    cout << "--- End of Q2 ---" << endl
         << endl;

    cout << "[Q3] Input: Enter 2 integers (a b)." << endl;
    q3();
    cout << "--- End of Q3 ---" << endl
         << endl;

    cout << "[Q4] Input: Enter radius (integer)." << endl;
    q4();
    cout << "--- End of Q4 ---" << endl
         << endl;

    cout << "[Q5] Input: Enter length and breadth (l b)." << endl;
    q5();
    cout << "--- End of Q5 ---" << endl
         << endl;

    cout << "[Q6] No input needed (uses fixed values)." << endl;
    q6();
    cout << "--- End of Q6 ---" << endl
         << endl;

    cout << "[Q7] No input needed (uses fixed values)." << endl;
    q7();
    cout << "--- End of Q7 ---" << endl
         << endl;

    cout << "[Q8] Input: Enter temperature in Celsius." << endl;
    q8();
    cout << "--- End of Q8 ---" << endl
         << endl;

    cout << "[Q9] Input: Enter 5 subject marks." << endl;
    q9();
    cout << "--- End of Q9 ---" << endl
         << endl;

    cout << "[Q10] Input: Enter total seconds." << endl;
    q10();
    cout << "--- End of Q10 ---" << endl
         << endl;

    cout << "===== All Questions Completed =====" << endl;

    return 0;
}