#include <bits/stdc++.h>
using namespace std;
class Employee
{
private:
    string name;
    int age;

public:
    void setName(string Name)
    {
        name = Name;
    }
    string getName()
    {
        return name;
    }

    void setAge(int Age)
    {
        if (Age >= 18)
        {
            age = Age;
        }
    }
    int getAge()
    {
        return age;
    }
    Employee(string nm, int ag)
    {
        name = nm;
        age = ag;
    }
    void intro()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    Employee employee1 = Employee("Alex", 20);
    Employee employee2 = Employee("Anna", 25);
    cout << employee1.getAge() << endl;
    cout << employee1.getName() << endl;
    employee1.setAge(15);
    cout << employee1.getAge() << endl;
    return 0;
}