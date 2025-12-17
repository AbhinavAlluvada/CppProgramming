#include <bits/stdc++.h>
using namespace std;
class Recursion{
    public:
    int factorial(int n){
        if(n == 0 || n == 1){
            return 1;
        }
        return n * factorial(n-1);
    }
    void print1ton(int n){
        if(n == 1){
            cout << 1 << " ";
            return;
        }
        cout << 
    }
};
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Recursion obj;
    int result = obj.factorial(n);
    cout << result << endl;
    return 0;
}