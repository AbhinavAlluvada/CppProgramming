#include <iostream>
using namespace std;
void mul(int a)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << a << " x " << i << " = " << a * i << endl;
    }
}
int main()
{
    int a;
    cin >> a;
    cout << a << " table: " << endl;
    mul(a);
    return 0;
}