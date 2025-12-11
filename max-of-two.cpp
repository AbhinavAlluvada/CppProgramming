#include <iostream>
using namespace std;
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int result = max(a, b);
    cout << "Max of two is: "<<result << endl;
    return 0;
}