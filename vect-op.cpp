#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> vect = {1, 2, 3, 4, 5, 6};
    int sum = 0, count = 0;
    for (auto i : vect)
    {
        sum += i;
        count++;
    }
    for (auto i : vect)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Sum: " << sum << endl;
    cout << "Count: " << count << endl;
    return 0;
}