#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in("data2.txt");
    string line;
    while (getline(in, line))
    {
        cout << line << endl;
    }
    in.close();
}