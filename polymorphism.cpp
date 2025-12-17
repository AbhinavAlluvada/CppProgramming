#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int age;

protected:
    string name;

public:
    Employee(string nm, int ag)
    {
        name = nm;
        age = ag;
    }

    void setName(string Name)
    {
        name = Name;
    }

    string getName() const
    {
        return name;
    }

    void setAge(int Age)
    {
        if (Age >= 18)
            age = Age;
    }

    int getAge() const
    {
        return age;
    }

    void intro() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    virtual void work()
    {
        cout << name << " is checking an email" << endl;
    }
};

class Developer : public Employee
{
private:
    string FavPro;

public:
    Developer(string nm, int ag, string fav)
        : Employee(nm, ag), FavPro(fav) {}

    void fixbug() const
    {
        cout << name << " is fixing bugs using " << FavPro << endl;
    }
    void work()
    {
        cout << name << " is coding..." << endl;
    }
};
class Teacher : public Employee
{
public:
    string subject;

    Teacher(string nm, int ag, string sub)
        : Employee(nm, ag), subject(sub) {}

    void PrepareLesson() const
    {
        cout << name << " is preparing " << subject << endl;
    }
    void work()
    {
        cout << name << " is teaching " << subject << endl;
    }
};
int main()
{
    Employee employee1("Alex", 20);
    Employee employee2("Anna", 35);

    Developer dev("Alex", 20, "C++");
    // dev.fixbug();

    Teacher teach = Teacher("Jack", 35, "History");
    // teach.PrepareLesson();

    Employee *e1 = &dev;
    Employee *e2 = &teach;

    e1->work();
    e2->work();

    return 0;
}
