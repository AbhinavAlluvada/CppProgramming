#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    string name;
    string company;
    int Age;

    Employee(string Name, string Company, int age)
    {
        name = Name;
        company = Company;
        Age = age;
    }
    void introduceYourself()
    {
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << Age << endl;
    }
};
int main()
{
    Employee employee1 = Employee("Alex", "Google", 20);
    employee1.introduceYourself();

    Employee employee2 = Employee("Anna", "Amazon", 25);
    employee2.introduceYourself();
}