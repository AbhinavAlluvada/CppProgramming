#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    string name;
    Employee(string nam)
    {
        name = nam;
    }
    void intro()
    {
        cout << "Hello guys!, I am " << name << endl;
    }
    int passbyvalue(int num)
    {
        num++;
        return num;
    }
    int passbyref(int &num)
    {
        num++;
        return num;
    }
};
int main()
{
    Employee emp1 = Employee("Abhinav");
    Employee emp2 = Employee("Dhanush");
    int x = 10;
    emp1.intro();

    int x_val = emp2.passbyvalue(x);
    int x_ref = emp1.passbyref(x);

    cout << "x=10(Pass by value): " << x_val << endl;
    cout << "x=10(Pass by ref): " << x_ref << endl;
    cout << "Actual value of x: " << x << endl;
    return 0;
}