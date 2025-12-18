#include <bits/stdc++.h>
using namespace std;
class Test
{
public:
    string name;

    Test(string nm)
    {
        name = nm;
    }
    string change(string &name)
    {
        name = "Bankai";
        return name;
    }
    void changevector(vector<int> &vect)
    {
        for (int i : vect)
        {
            i = i + 1;
        }
    }
    void print(const vector<int> &vect)
    {
        for (int i : vect)
        {
            cout << i << " ";
        }
        cout << endl;
    }
};
int main()
{
    string name = "Domain-Expansion";
    Test test = Test(name);
    cout << name << endl;
    test.change(name);
    cout << name << endl;

    vector<int> vect = {1, 3, 5, 7, 9};
    test.print(vect);

    test.changevector(vect);
    test.print(vect);

    for (int i : vect){
        cout << i << " ";
    }
    return 0;
}