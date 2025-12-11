#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n =5;
    int arr[n]= {111,31,4,-31,4};
    sort(arr,arr+n);
    cout << arr[0]<<" and "<<arr[n-1];
    return 0;
}