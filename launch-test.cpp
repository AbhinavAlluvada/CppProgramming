#include <bits/stdc++.h>
using namespace std;
class Test
{
public:
    Test()
    {
    }
    void intro()
    {
        cout << "Code Marathon!" << endl;
    }

    void staack()
    {
        stack<int> stk;
        stk.push(10);
        stk.push(20);
        stk.push(30);

        cout << stk.top() << endl; // 30;
        stk.pop();
        cout << stk.top() << endl;   // 20;
        cout << stk.empty() << endl; // 0
    }

    void queuee()
    {
        queue<int> qu;
        qu.push(10);
        qu.push(20);
        cout << qu.front() << endl; // 10
        qu.pop();
        cout << qu.front() << endl; // 20

        qu.push(90);
        cout << qu.back() << endl; // 90

        cout << qu.empty() << endl; // 0
    }

    void unordere_set()
    {
        unordered_set<int> st = {1, 2, 2, 3, 4, 65, 6, 7};
        for (int i : st)
        {
            cout << i << " " << endl;
        }
        cout << st.count(2) << endl;
        auto ptr = st.find(2);
        cout << *ptr << endl;
    }
    void mapp()
    {
        map<int, char> mp;
        char c = 65;
        for (int i = 1; i <= 10; i++)
        {
            mp[i] = c;
            c++;
        }
        auto ptr = mp.find(2);
        cout << &ptr << endl;

        for (auto itr = mp.begin(); itr != mp.end(); itr++)
        {
            cout << itr->first << " - " << itr->second << endl;
        }
        cout << endl;
    }
    void vect()
    {
        vector<int> vect = {1, 2, 3, 4, 5, 6};
        for (int &i : vect)
        {
            cout << i << " ";
        }
        cout << endl;
        cout << vect.size() << endl;
        cout << vect.empty() << endl;
        vect.push_back(100);

        vector<pair<int, int>> vect2 = {{1, 2}, {1, 23}};
        cout << vect2[1].first << endl;  // 1
        cout << vect2[0].second << endl; // 2

        vector<int> vect22(10, 22);
        for (auto itr = vect22.begin(); itr != vect22.end(); itr++)
        {
            cout << *itr << " ";
        }
        cout << endl;
    }
    bool leapyear(int n)
    {
        if (n % 400 == 0 || (n % 100 != 0 && n % 4 == 0))
        {
            return true;
        }
        return false;
    }
    void armstrong(int n)
    {
        int sum = 0;
        int copy = n;
        while (copy != 0)
        {
            int digit = copy % 10;
            sum += pow(digit, 3);
            copy /= 10;
        }
        if (sum == n)
        {
            cout << "Armstrong!" << endl;
        }
        else
        {
            cout << "Nah!" << endl;
        }
    }
};
int main()
{
    Test test;
    test.armstrong(153);
    cout << "---------------------------" << endl;

    test.intro();
    cout << "---------------------------" << endl;

    test.mapp();
    cout << "---------------------------" << endl;

    test.queuee();
    cout << "---------------------------" << endl;

    test.staack();
    cout << "---------------------------" << endl;

    test.unordere_set();
    cout << "---------------------------" << endl;

    test.vect();
    cout << "---------------------------" << endl;

    return 0;
}