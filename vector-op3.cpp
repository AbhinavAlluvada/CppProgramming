#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void eve_odd(vector<int> vect)
{
    cout << "Count Even and Odd: " << endl;
    int odd = 0, even = 0;
    for (auto i : vect)
    {
        if (i % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Odd: " << odd << endl;
    cout << "Even: " << even << endl;
}

void print(vector<int> vect)
{
    for (auto i : vect)
    {
        cout << i << " ";
    }
    cout << endl;
}
void reversevect(vector<int> &vect)
{
    int i = 0;
    int j = vect.size() - 1;
    while (j >= i)
    {
        swap(vect[i], vect[j]);
        i++;
        j--;
    }
}
int linear(vector<int> vect, int key)
{
    for (int i = 0; i < vect.size(); i++)
    {
        if (vect[i] == key)
        {
            return i;
        }
    }
    return -1;
}
void transfer(vector<int> vect1, vector<int> &vect2)
{
    vect2 = vect1;
}
int main()
{
    vector<int> vect = {1, 2, 3, 4, 5, 6};
    int result = linear(vect, 5);
    print(vect);
    if (result != 0)
    {
        cout << "Key found at index: " << result << endl;
    }
    return 0;
}