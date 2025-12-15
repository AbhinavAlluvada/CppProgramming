#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> qu;
    qu.push(10);
    qu.push(11);
    qu.push(12);
    qu.push(13);

    cout << qu.size() << endl;
    cout << qu.front() << endl;

    qu.pop();
    cout << qu.front() << endl;
    cout << qu.empty() << endl;
    return 0;
}