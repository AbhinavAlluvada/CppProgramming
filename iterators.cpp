#include <bits/stdc++.h>
using namespace std;
int main(){
    //Classical iteration
    vector <int> vect = {1,2,3,4,5,6};
    for (int i : vect){

        cout << i << " ";
    }
    cout << endl;

    //Faster Iteration Same Technique
    for (int& i : vect){ //Faster
        cout << i << " ";
    }
    cout << endl;

    //Real Iterator use case
    //Uses addresses
    for(auto it = vect.begin();it!=vect.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}