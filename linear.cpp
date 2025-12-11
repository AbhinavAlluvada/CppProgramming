#include <iostream>
using namespace std;
int linear(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int n = 5;
    int arr[n];
    cout << "Enter elements for array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element no. " << i + 1 << ": ";
        cin >> arr[i];
    }
    int key = 0;
    cout << "Enter the target: " << endl;
    cin >> key;
    int result = linear(arr, n, key);
    if (result != 0)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found!" << endl;
    }
    return 0;
}