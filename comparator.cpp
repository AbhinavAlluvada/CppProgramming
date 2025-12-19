#include <bits/stdc++.h>
using namespace std;
void printqueue(priority_queue<int> temp)
{
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}
bool cmp(int a, int b)
{
    return a < b; // a comes before b if a is larger
}
void printvect(vector<int> vect)
{
    for (int &i : vect)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    priority_queue<int> pq;
    vector<int> vect = {1, 12, 3, 19, 5, 16, 7};
    for (int &i : vect)
    {
        pq.push(i);
    }
    printqueue(pq);

    priority_queue<int, vector<int>, greater<int>> mpq;
    for (int i : vect)
    {
        mpq.push(i);
    }
    priority_queue<int, vector<int>, greater<int>> temp = mpq;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    sort(vect.begin(), vect.end(), cmp);
    printvect(vect);

    return 0;
}