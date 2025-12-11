#include <iostream>
#include <algorithm>
using namespace std;
void selection(int arr[],int n){
    for(int i =0;i<n-1;i++){
        int min = i;
        for(int j = i+1 ; j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        {
            cout << arr[i] << " ";
        }
    }
}
int main(){
    int n = 5;
    int arr[n]= {23,1,45,3,7};
    print(arr,n);
    selection(arr,n);
    cout << endl;
    print(arr,n);
    return 0; 
}