#include <iostream>
using namespace std;
int second(int arr[],int n){
    int lar = arr[0];
    int seclar = arr[1];
    for(int i =0;i<n;i++){
        if (arr[i]>lar){
            seclar = lar;
            lar = arr[i];
        }
        else if(arr[i]>seclar && arr[i]<lar){
            seclar = arr[i];
        }
        else{
            continue;
        }
    }
    return seclar;
}
int main(){
    int arr[5] = {1,2,3,41,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = second(arr,n);
    cout <<result;
    return 0;
}