#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    cout << "Vector Introduction: " << endl;
    vector<int> vect;
    vect.push_back(10);
    vect.push_back(20);
    cout << vect[0] << " " << vect[1] << endl;
    vect.pop_back();
    cout << vect[0] << endl;

    cout << vect.size() << endl;
    cout << vect.capacity() << endl;

    vect.clear();
    cout << vect.empty() << endl;

    cout << "---------------------" << endl;
    vector<int> vect2;
    for (int i = 0; i < 5; i++)
    {
        vect2.push_back(i + 1);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << vect2[i] << " ";
    }
    cout << endl;
    cout << "Front Element: " << vect2.front() << endl;
    cout << "Back Element: " << vect2.back() << endl;

    cout << endl;
    return 0;
}