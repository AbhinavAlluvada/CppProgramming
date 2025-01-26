#include <iostream>
using namespace std;
void sort(int arr[], int n){
    for(int i =0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}}
int main(){
    int arr[10] = {1,5,3,2,6,78,9,-1,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    for(int i = 0;i<n;i++){
        cout << arr[i] <<" ";
    }
    cout<<endl;
    return 0;
}