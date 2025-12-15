#include <bits/stdc++.h>
using namespace std;
class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};
class Employee : AbstractEmployee
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
    void AskForPromotion()
    {
        if (age > 30)
        {
            cout << name << " got promoted!" << endl;
        }
        else
        {
            cout << "Nah man..." << endl;
        }
    }
};
int main()
{
    Employee employee1 = Employee("Alex", 20);
    Employee employee2 = Employee("Anna", 35);

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    return 0;
}