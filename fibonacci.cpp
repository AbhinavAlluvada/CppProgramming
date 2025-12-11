#include <iostream>
using namespace std;
void fib(int num){
    int a =0;
    int b = 1;
    cout << a <<" "<< b<<" ";
    for(int i =0;i<num-2;i++){
        int end = a+b;
        cout << end<< " ";
        a =b;
        b = end;
    }
}
int main(){
    int num;
    cin>> num;
    fib(num);
    return 0;
}