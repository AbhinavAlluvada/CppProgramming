#include <iostream>
using namespace std;
int main(){
    int a = 1234567890;
    int sum_digit = 0;
    int count_digit = 0;
    while(a!=0){
        int digit = a%10;
        count_digit++;
        sum_digit = sum_digit + digit;
        a/=10;
    }
    cout << "sum_digit: "<<sum_digit<<endl;
    cout << "count_digit: "<<count_digit<<endl;
    return 0;
}