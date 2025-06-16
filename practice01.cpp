#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
void easy1()
{
    string name;
    getline(cin, name);
    cout << "My Name is " << name << endl;
}
void med1()
{
    char c;
    int total = 0;
    int spaces = 0;
    int counta = 0;
    while (cin.get(c) && c != '\n')
    {
        total++;
        if (c == ' ')
        {
            spaces++;
        }
        else if (c == 'a')
        {
            counta++;
        }
    }
    cout << "Total no of characters: " << total << endl;
    cout << "Total no of spaces: " << spaces << endl;
    cout << "Total no of a's in the sentence: " << counta << endl;
}

int main()
{
    return 0;
}