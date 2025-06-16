#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
void stringbasics()
{
    string str = "Hello World!";
    cout << str[10] << str[11] << endl; // concate manual
    cout << str[10] + str[11] << endl;  // ASCII Addition

    str.append(", How's it going?"); // Appending a string to the end
    string str1 = str.substr(3, 4);  // Substring into a variable

    str.erase(12, 100);         // Demolish from the index wrt to no of chars
    str.insert(12, " Bankai!"); // Insertion

    str.erase(12, 100);
    str += " I am Robot!"; // appending classic

    str.replace(18, 5, "Machine"); // replacement
    int result = str.find("Mac");  // find it!
    cout << str << endl;
    cout << result << endl;
}
void reverse(string str)
{
    cout << "Before: " << str << endl;
    string word;
    vector<string> vstr;
    stringstream ss(str);
    while (ss >> word)
    {
        vstr.push_back(word);
    }
    reverse(vstr.begin(), vstr.end());
    string result;
    for (int i = 0; i < vstr.size(); i++)
    {
        result += vstr[i];
        if (i != vstr.size() - 1)
            result += " ";
    }
    cout << "After: " << result << endl;
}
void popback(string str)
{
    cout << "Before: " << str << endl;
    string word;
    vector<string> vstr;
    stringstream ss(str);
    while (ss >> word)
    {
        vstr.push_back(word);
    }
    vstr.pop_back();
    string ans;
    for (int i = 0; i < vstr.size(); i++)
    {
        ans += vstr[i];
        if (i != vstr.size() - 1)
        {
            ans += " ";
        }
    }
    cout << "After: " << ans << endl;
}
bool rotation(string s1, string s2)
{
    if (s1.length() != s2.length() || s1.empty() || s2.empty())
    {
        return false;
    }
    string temp = s1 + s1;
    return (temp.find(s2) != string::npos);
}
int second(int arr[], int n)
{
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < n; i++)
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
void pointer()
{
    int a = 10;
    int *ptr = &a;
    int b = 20;
    int *ptr2 = &b;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    *ptr = *ptr + *ptr2;
    *ptr2 = *ptr - *ptr2;
    *ptr = *ptr - *ptr2;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}
void swap(int &a, int &b)
{
    int *ptr = &a;
    int *ptr2 = &b;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    *ptr = *ptr + *ptr2;
    *ptr2 = *ptr - *ptr2;
    *ptr = *ptr - *ptr2;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}
int largest(int a, int b)
{
    int *ptr = &a;
    int *ptr2 = &b;
    if (*ptr > *ptr2)
    {
        return *ptr;
    }
    return *ptr2;
}
void increment(int &a)
{
    int *ptr = &a;
    *ptr = *ptr + 10;
}
void traversal(int arr[], int n)
{
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        cout << *ptr << " ";
        *ptr++;
    }
}
void poinpoin(int a)
{
    int *ptr = &a;
    int **ptr2 = &ptr;
    cout << **ptr2 << endl;
}
void arraypoin(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int *start = arr;
    int *end = arr + n - 1;
    while (start < end)
    {
        *start = *start + *end;
        *end = *start - *end;
        *start = *start - *end;
        start++;
        end--;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int sumarray(int arr[], int n)
{
    int sum = 0;
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        *ptr++;
    }
    return sum;
}
void change(int* a){
    *a = 20;
}
pair<int,int> count(int arr[],int n){
    int* ptr = arr;
    int odd =0;
    int even = 0;
    for(int i = 0;i<n;i++){
        if(*ptr % 2==1){
            odd++;
        }
        else{
            even++;
        }
        *ptr++;
    }
    return {odd,even};
}
int main()
{
    int arr[] {1,2,3,4,50,6};
    pair<int,int> result = count(arr,6);
    cout << "No of Odd elements: "<<result.first<<endl;
    cout << "No of Even elements: "<<result.second<<endl;
    return 0;
}