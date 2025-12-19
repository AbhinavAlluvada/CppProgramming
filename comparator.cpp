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
int main()
{
    priority_queue<int> pq;
    vector<int> vect = {1, 2, 3, 9, 5, 6, 7};
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

    return 0;
}