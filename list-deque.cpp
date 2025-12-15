#include <bits/stdc++.h>
using namespace std;
void list_it()
{
    cout << "List: " << endl;
    list<int> lst;
    lst.push_front(20);
    lst.push_back(12);
    lst.push_front(23);

    cout << lst.front() << endl;
    cout << lst.back() << endl;
}
void deque1()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(0);
    cout << dq.front() << endl;
    cout << dq.back() << endl;
}

int main()
{
    list_it();
    cout << "---------------------------------" << endl;
    deque1();
    return 0;
}