#include <iostream>
using namespace std;
class Person
{
public:
    int age;
    Person(int a)
    {
        age = a;
    }
    void name(int age)
    {
        cout << "Age: " << age << endl;
    }
};
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}