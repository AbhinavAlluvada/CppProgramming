#include <iostream>
using namespace std;
void even_odd(int a)
{
    if (a >= 0)
    {
        cout << "Positive" << endl;
    }
    else
    {
        cout << "Negative" << endl;
    }
    if (a % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}
int main(){
    int a;
    cin>> a;
    even_odd(a);
    return 0;
}