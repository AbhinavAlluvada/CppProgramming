#include <iostream>
#include <algorithm>
using namespace std;
int binary_search(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
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
    int result = binary_search(arr, n, key);
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