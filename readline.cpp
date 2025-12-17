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

    cout << "------------" << endl;
    ifstream in2("data2.txt");
    string word;
    while (in2 >> word)
    {
        cout << word << endl;
    }
    in2.close();
}