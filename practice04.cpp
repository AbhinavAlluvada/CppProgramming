#include <bits/stdc++.h>
#include <vector>
#include <sstream>
#include <algorithm>
#include <stack>
using namespace std;
bool palin(int a)
{
    int *ptr = &a;
    int rev = 0;
    int original = *ptr;
    while (*ptr > 0)
    {
        int digit = *ptr % 10;
        rev = rev * 10 + digit;
        *ptr /= 10;
    }
    return rev == original;
}
void leader(vector<int> arr)
{
    vector<int> vect;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        bool islead = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                islead = false;
                break;
            }
        }
        if (islead)
            vect.push_back(arr[i]);
    }
    for (int i : vect)
    {
        cout << i << " ";
    }
}
void reversevect(vector<int> arr, int k)
{
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());

    for (int i : arr)
    {
        cout << i << " ";
    }
}
pair<int, int> twosum(vector<int> arr, int k)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                return {arr[i], arr[j]};
            }
        }
    }
    return {0, 0};
}
void stack1(stack<int> &sta, int n)
{
    cout << "Enter the element: " << endl;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        sta.push(k);
    }
    stack<int> temp = sta;
    for (int i = 0; i < n; i++)
    {
        cout << temp.top() << " ";
        temp.pop();
    }
}
void count(stack<int> sk)
{
    int ct = 0;
    while (!sk.empty())
    {
        ct++;
        sk.pop();
    }
    cout << "No of elements: " << ct << endl;
}
void list1(int n)
{
    list<int> l1;
    for (int i = 0; i < n; i++)
    {
        char c;
        cout << "Enter the choice: " << flush;
        cin >> c;
        if (c == 'f')
        {
            int k;
            cout << "Enter an element: " << flush;
            cin >> k;
            l1.push_front(k);
            cout << "-----------" << endl;
        }
        else if (c == 'b')
        {
            int k1;
            cout << "Enter an element: " << flush;
            cin >> k1;
            l1.push_back(k1);
            cout << "-----------" << endl;
        }
        else
        {
            continue;
        }
    }

    for (int i : l1)
    {
        cout << i << " ";
    }
}
void reversal(stack<string> stk)
{
    stack<string> temp = stk;
    while (!temp.empty())
    {
        string str = temp.top();
        cout << str << " ";
        cout << endl;
        reverse(str.begin(), str.end());
        cout << str << " ";
        cout << endl;
        temp.pop();
    }
}

void array2(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n/2; i++)
    {
        int *start = arr + i;
        int *end = arr + n - i - 1;
        int temp = *start;
        *start = *end;
        *end = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    string var = "*)#\"%*=zyx";
    char decrypt = 'K';
    string ans = "";
    for(int i =0;i<var.size();i++){
        ans += var[i] ^ decrypt;
    }
    cout<<ans;
    return 0;
}