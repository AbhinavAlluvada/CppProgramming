#include <iostream>
#include <algorithm>
using namespace std;
int reverse1(int a){
    int rev =0;
    while(a!=0){
        int digit = a%10;
        rev = rev*10 + digit;
        a = a/10;
    }
    return rev;
}
int main(){
string a = "10101010";
reverse(a.begin(),a.end());
cout << a;
return 0;
}