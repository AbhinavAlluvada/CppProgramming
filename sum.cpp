#include <iostream>
using namespace std;
void sum()
{
    int a,b;
    cout << "Sum of two numbers:" << endl;
    cin >> a >>b;
    int c = a + b;
    cout << "Sum: " << c << endl;
}
int main()
{
    sum();
    return 0;
}