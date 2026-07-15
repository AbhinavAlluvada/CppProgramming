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
    cout << "\n"
         << string(50, '=') << endl;
    cout << "        LEVEL 1: BASIC PROGRAMMING" << endl;
    cout << string(50, '=') << "\n"
         << endl;

    cout << "[Q1] Print Hello World" << endl;
    cout << "├─ No input required" << endl;
    cout << "└─ Output: ";
    q1();
    cout << endl;

    cout << "[Q2] Sum of Two Numbers" << endl;
    cout << "├─ Input: 2 integers (a, b)" << endl;
    cout << "└─ Output: ";
    q2();
    cout << endl;

    cout << "[Q3] Arithmetic Operations (Sum, Difference, Product, Quotient)" << endl;
    cout << "├─ Input: 2 integers (a, b)" << endl;
    cout << "└─ Output:" << endl;
    q3();
    cout << endl;

    cout << "[Q4] Circle Properties (Circumference & Area)" << endl;
    cout << "├─ Input: radius (integer)" << endl;
    cout << "└─ Output:" << endl;
    q4();
    cout << endl;

    cout << "[Q5] Rectangle Properties (Area & Perimeter)" << endl;
    cout << "├─ Input: length (l), breadth (b)" << endl;
    cout << "└─ Output:" << endl;
    q5();
    cout << endl;

    cout << "[Q6] Swap Two Numbers (Using Third Variable)" << endl;
    cout << "├─ Input: None (uses fixed: a=10, b=20)" << endl;
    cout << "└─ Output:" << endl;
    q6();
    cout << endl;

    cout << "[Q7] Swap Two Numbers (Without Third Variable)" << endl;
    cout << "├─ Input: None (uses fixed: a=10, b=20)" << endl;
    cout << "└─ Output: ";
    q7();
    cout << endl;

    cout << "[Q8] Convert Celsius to Fahrenheit" << endl;
    cout << "├─ Input: temperature in Celsius" << endl;
    cout << "└─ Output: ";
    q8();
    cout << endl;

    cout << "[Q9] Calculate Total & Average of 5 Subject Marks" << endl;
    cout << "├─ Input: 5 subject marks" << endl;
    cout << "└─ Output:" << endl;
    q9();
    cout << endl;

    cout << "[Q10] Convert Seconds to Hours, Minutes, Seconds" << endl;
    cout << "├─ Input: total seconds" << endl;
    cout << "└─ Output: ";
    q10();
    cout << endl;

    cout << string(50, '=') << endl;
    cout << "     ✓ ALL LEVEL 1 QUESTIONS COMPLETED" << endl;
    cout << string(50, '=') << "\n"
         << endl;

    return 0;
}