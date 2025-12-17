#include <bits/stdc++.h>
using namespace std;

class Recursion
{
public:
    int factorial(int n)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        return n * factorial(n - 1);
    }

    void print1ton(int n)
    { // ← void, not int
        if (n == 0)
        {
            return;
        }
        print1ton(n - 2);
        cout << n << " ";
    }
    void printton(int n)
    {
        if (n == 0)
        {
            return;
        }
        printton(n - 1);
        cout << n << " ";
        if (n % 10 == 0)
        {
            cout << endl;
        }
    }
    void rever(int n, int i =1){
        if(i==n+1){
            return;
        }
        rever(n , i+1);
        cout << i << " ";
    }
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Recursion obj;
    obj.rever(n);

    return 0;
}
