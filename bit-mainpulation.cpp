#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isodd(int n)
{
    return (n & 1);
}
int ithbit(int n, int i)
{
    return (n & (1 << i) != 0);
}
int ithbitset(int n, int i)
{
    return n | (1 << i);
}
int ithbitsetoff(int n, int i)
{
    return (n & (~(1 << i)));
}
int ithbitswitch(int n, int i)
{
    return n ^ (1 << i);
}

int counton(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
bool ispower2(int n)
{
    if (n & (n - 1))
    {
        return false;
    }
    return true;
}
int lonely(vector<int> vect)
{
    int ans = 0;
    for (int x : vect)
    {
        ans ^= x;
    }
    return ans;
}

int main()
{
    vector<int> vect = {1, 2, 1, 2, 3};
    int result = lonely(vect);
    cout << result << endl;
    return 0;
}