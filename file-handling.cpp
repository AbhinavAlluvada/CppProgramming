// Basic Writing to a file

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream out("data.txt");
    out << "Hello World!" << endl;
    out << "This is data.txt" << endl;

    out.close();
}