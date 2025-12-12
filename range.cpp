#include <iostream>
using namespace std;
int main()
{
    int i = 2024;
    while (i > 1890)
    {
        cout << i << ": " << i / 4 << endl;
        i = i - 4;
    }
    return 0;
}