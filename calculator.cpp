#include <iostream>
using namespace std;
void calc(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
    if (b==0){
        cout << "Not possible!"<<endl;
        break;
    }
        cout << a / b << endl;
        break;

    default:
    cout << "Nothing Happened!"<<endl;
        break;
    }
}
int main(){
    int a , b;
    char op;
    cin >>a;
    cout << "Operator?"<<endl;
    cin>>op;
    cin>> b;
    calc(  a,b,op);
    return 0;
}