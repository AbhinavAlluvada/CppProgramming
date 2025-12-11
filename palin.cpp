#include <iostream>
using namespace std;
bool ispalin(string str)
{
    int i = 0;
    int j = str.size() - 1;
    while (j > i)
    {
        if (str[j] != str[i])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string str;
    cout << "Enter a line: "<<endl;
    getline(cin,str);
    if(ispalin(str)){
        cout << "Palindrome!"<<endl;
    }
    else{
        cout << "Nope..."<<endl;
    }
    return 0;
}