#include <iostream>
#include <algorithm>
using namespace std;
void swap1(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (j > i)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n = 6;
    int arr[n] = {1, 2, 3, 4, 5, 6};
    print(arr, n);
    cout << "After Swapping: " << endl;
    swap1(arr, n);
    print(arr, n);
    return 0;
}