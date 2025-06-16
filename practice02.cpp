#include <iostream>
#include <chrono>
#include <thread>
#include <vector>
#include <algorithm>
using namespace std;

void flushExample()
{
    for (int i = 0; i <= 100; i += 10)
    {
        cout << "\rLoading: " << i << "%" << flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(150));
    }
    cout << "\nDone!" << endl;
}
void swap(int a, int b)
{
    cout << a << endl;
    cout << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << endl;
    cout << b << endl;
}
void check()
{
    char c;
    int cvo = 0;
    int cco = 0;
    while (cin.get(c) && c != '\n')
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            cvo++;
        }
        else
        {
            cco++;
        }
    }
    cout << "No of vowels: " << cvo << endl;
    cout << "No of consonauts: " << cco << endl;
}
void ASCII(char c)
{
    char ch = c;
    int val = c;
    cout << "ASCII value of " << ch << " is: " << val << flush;
}
void array1()
{
    vector<int> arr;
    cout << "Insertion of elements into array: " << endl;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << '\n';
    cout << "Removing Elements: " << endl;
    arr.pop_back();
    for (int i : arr)
    {
        cout << i << " ";
    }
}
void intro()
{
    vector<int> arr;
    int n = 0;
    cout << "Enter the number of elements: " << flush;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    for (int i : arr)
    {
        cout << i << " ";
    }
}
void larsma(vector<int> arr)
{
    int max = arr[0];
    int min = arr[0];
    for (int i : arr)
    {
        if (i > max)
        {
            max = i;
        }
        if (i < min)
        {
            min = i;
        }
    }
    cout << "Largest among the vector: " << max << endl;
    cout << "Smallest among the vector: " << min << endl;
}
void reverse(vector<int> &arr)
{
    int n = arr.size();
    cout << "Original Array: " << '\n';
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << '\n';
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    cout << "Reverse Array: " << '\n';
    for (int i : arr)
    {
        cout << i << " ";
    }
}
void evenout(vector<int> arr)
{
    for (int i = 0; i < arr.size();)
    {
        if (arr[i] % 2 == 0)
        {
            arr.erase(arr.begin() + i);
        }
        else
        {
            ++i;
        }
    }
    for (int i : arr)
    {
        cout << i << " ";
    }
}
void oddout(vector<int> arr)
{
    for (int i = 0; i < arr.size();)
    {
        if (arr[i] % 2 == 1)
        {
            arr.erase(arr.begin() + i);
        }
        else
        {
            ++i;
        }
    }
    for (int i : arr)
    {
        cout << i << " ";
    }
}
int countit(vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 2)
        {
            count++;
        }
    }
    return count;
}
bool palin(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            return false;
        }
    }
    return true;
}
int second(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    return arr[n - 2];
}
int secondbrute(vector<int> arr)
{
    int smax = arr[0];
    int max = arr[1];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] < max)
        {
            smax = arr[i];
        }
    }
    return smax;
}
void duplicate(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    auto last = unique(arr.begin(), arr.end());
    arr.erase(last, arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
void duplicatebrute(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < arr.size() - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                arr.pop_back();
                j--;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
void custom()
{
    vector<int> arr;
    int n = 0;
    cout << "Enter no of elements for array: " << flush;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        bool isit = false;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] == num)
            {
                isit = true;
                cout << "Element already present in vector!" << endl;
                break;
            }
        }
        if (!isit)
        {
            arr.push_back(num);
        }
    }
}
void swap1(int a, int b)
{
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "---------" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}
void guess()
{
    cout << "Welcome to MakeMeGuess!" << endl;
    cout << "Enter your hint(h/l/c)" << endl;
    int low = 1;
    int high = 1000;
    while (low <=high)
    {
        int mid = (high + low) / 2;
        char ch;
        cout << "Is it " << mid << "?: " << flush;
        cin>>ch;
        if (ch == 'c')
        {
            cout << "Bingo!" << endl
                 << "I guessed it: " << mid << endl;
            break;
        }
        else if (ch == 'h')
        {
            low = mid + 1;
        }
        else if (ch == 'l')
        {
            high = mid - 1;
        }
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4, 51, 6, 7};
    guess();
    return 0;
}
