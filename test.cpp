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
    void sortpair(vector<pair<int, int>> &vect)
    {
        sort(vect.begin(), vect.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             {
            if(a.second == b.second){
                return a.first > b.first;
            }
            return a.second>b.second; });
    }
    void printpair(const vector<pair<int, int>> &vect)
    {
        for (pair<int, int> i : vect)
        {
            cout << i.first << ", " << i.second << endl;
        }
    }
    vector<int> largest(const vector<int> &vect, const int &k)
    {
        priority_queue<int> pq;
        for (int i : vect)
        {
            pq.push(i);
        }
        vector<int> result;
        while (pq.size() > k)
        {
            result.push_back(pq.top());
            pq.pop();
        }
        return result;
    }
    vector<string> sortstring(const vector<string> &res)
    {
        vector<string> vect = res;
        sort(vect.begin(), vect.end(), [](string a, string b)
             {
            if(a.length() == b.length()){
                return a <b;
            }
            return a.length()<b.length(); });
        return vect;
    }
    deque<int> arrangeeo(const vector <int>& vect){
        deque <int> res;
        for(int i : vect){
            if(i%2==0){
                res.push_front(i);
            }
            else{
                res.push_back(i);
            }
        }
        return res;
        
    }

    vector<pair<string, int>> student(const vector<pair<string,int>> &res){
        vector<pair<string,int>> vect = res;
        sort(vect.begin(),vect.end(),[](pair<string , int> a, pair<string , int> b){
            if(a.second == b.second){
                return a.first.length() > b.first.length();
            }
            return a.second>b.second;

        });
        return vect;
    }
};
int main()
{
    test obj;
vector<pair<string, int>> students = {
    {"Alice", 85},
    {"Bob", 92},
    {"Charlie", 85},
    {"Dave", 70},
    {"Eve", 92}
};

    vector<pair<string,int>> result = obj.student(students);
    for(pair<string , int> i : result){
        cout << i.first << ": "<< i.second << endl;
    }
    return 0;
}