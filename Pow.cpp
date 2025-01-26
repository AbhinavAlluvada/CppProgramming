#include <iostream>
using namespace std;
bool leap(int year){
    bool check = false;
    if(year%4 == 0 && year%100 !=0){
        check = true;
    }
    else if(year%400==0){
        check = true;
    }
    return check;
}
int main(){
    int n;
    cin>>n;
    bool result = leap(n);
    cout <<result;
    return 0;
}