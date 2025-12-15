#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(19);
    st.push(11);
    st.push(12);
    cout << st.size() << endl;
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    cout << st.empty() << endl;
    return 0;
}
