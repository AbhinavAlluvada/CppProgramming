#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Max Heap
    priority_queue<int> pq;
    pq.push(10);
    pq.push(2);
    pq.push(11);
    pq.push(56);
    pq.push(4);
    pq.push(-9);
    pq.push(44);
    pq.push(12);

    cout << pq.top() << endl;
    cout << pq.size() << endl;

    cout << "-------------------------------" << endl;
    // Min Heap

    priority_queue<int, vector<int>, greater<int>> mq;
    mq.push(10);
    mq.push(2);
    mq.push(11);
    mq.push(56);
    mq.push(4);
    mq.push(-9);
    mq.push(44);
    mq.push(12);

    cout << mq.top() << endl;
    cout << mq.size() << endl;

    return 0;
}