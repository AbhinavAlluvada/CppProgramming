#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> first = {1};
    for(int i =0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            cout << " ";
        }
        for(int x : first){
            cout << x << " ";
        }

        vector<int> next;
        next.push_back(1);
        for(int i =1 ;i<first.size();i++){
            next.push_back(first[i]+ first[i-1]);
        }
        next.push_back(1);
        first = next;
        cout << endl;
    }

    return 0;
}