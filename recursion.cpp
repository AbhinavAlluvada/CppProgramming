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

    int summer(int n){
        if(n == 1) return 1;
        return n+summer(n-1);
    }

    int digits(int n){
        if(n ==0) return 0;
        return 1 + digits(n/10);
    }
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Recursion obj;
    int result = obj.digits(n);
    cout << result <<endl;

    return 0;
}
