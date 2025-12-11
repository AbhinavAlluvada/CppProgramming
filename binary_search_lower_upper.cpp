#include <iostream>
#include <algorithm>
using namespace std;
int binary_lower_search(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= key)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int binary_upper_search(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > key)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
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
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int key;
    cout << "Enter the key: ";
    cin >> key;
    int result = binary_lower_search(arr, n, key);
    if (result != -1)
    {
        cout << "Key found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found!" << endl;
    }
    return 0;
}