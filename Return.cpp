#include <iostream>
#include <string>
using namespace std;
bool checkArm(int n){
    int original = n;
    int val = 0;
    while(n>0){
        int digit = n %10;
        val = val + (digit*digit*digit);
        n = n/10;
    }
    return(val == original);
}
int main(){
    int n;
    cin>>n;
    bool result = checkArm(n);
    if (result){
        cout <<"Armstrong"<<endl;
    }
    else{
        cout <<"Not Armstrong"<<endl;
    }
    return 0;
}