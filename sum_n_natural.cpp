#include <iostream>
using namespace std;
int sum(int a){
    int sum =0;
    for(int i =1;i<=a;i++){
        sum = sum +i;
    }
    return sum;
}
int sum2(int a){
    int sum = (a*(a+1))/2;
    return sum;
}
int main(){
    int a;
    cin>>a;
    int result = sum2(a);
    cout << result<<endl;
    return 0;
}