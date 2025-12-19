#include <bits/stdc++.h>
using namespace std;
class test
{
public:
    test()
    {
    }
    void sortit(vector<int> &vect)
    {
        sort(vect.begin(), vect.end(), [](int a, int b)
             { return a > b; });
    }
    void print(vector<int> &vect)
    {
        for (int i : vect)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    void sortpair(vector <pair<int,int>>& vect){
        sort(vect.begin(),vect.end(),[](const pair<int,int>& a,const pair<int,int>& b){
            if(a.second == b.second){
                return a.first > b.first;
            }
            return a.second>b.second;
        });
    }
    void printpair(const vector<pair<int,int>>& vect){
        for(pair<int,int> i : vect){
            cout << i.first << ", "<< i.second<<endl;
        }
    }
    vector<int> largest(const vector<int>& vect,const int& k){
        priority_queue <int> pq;
        for(int i: vect){
            pq.push(i);
        }
        vector <int> result;
        while(pq.size()>k){
            result.push_back(pq.top());
            pq.pop();
        }
        return result;


    }

};
int main()
{
    vector<int> vect = {1, 2, 3, 4, 5, 6};
    test obj;
    obj.print(vect);
    obj.sortit(vect);
    obj.print(vect);

    vector <pair<int,int>> vect2 = {{1,2},{2,3},{3,4}};
    obj.sortpair(vect2);
    obj.printpair(vect2);

    vector<int> vect3 = obj.largest(vect,3);
    obj.print(vect3);
    return 0;
}