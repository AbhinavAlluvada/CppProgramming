#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream out("data2.txt");
    out << "Hello World!" << endl;
    out << "Akhanda 2" << endl;
    out.close();

    ofstream out2("data2.txt", ios::app);
    out2 << "Not tickets!" << endl;
    out2.close();
}