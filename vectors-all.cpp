#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> vect)
{
    for (auto i : vect)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    cout << "Vectors: " << endl;
    vector<int> vect;
    vect.push_back(11);
    vect.push_back(12);
    vect.emplace_back(13);
    print(vect);
    vector<pair<int, int>> vect2;
    vect2.emplace_back(1, 2);
    vect2.emplace_back(3, 4);
    vect2.push_back({4, 5});
    for (auto i : vect2)
    {
        cout << i.first << ", " << i.second << endl;
    }

    vector<int> v(3, 100);
    print(v);
    vector<int> v2(v);
    print(v2);

    vector<int> v3 = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v3.begin();
    it++;
    cout << *(it) << endl;       // 2
    cout << *v3.begin() << endl; // 1
    cout << v3.back() << endl;   // 5

    cout << v3.size() << endl;
    v3.insert(v3.begin() + 1, 10);
    cout << v3[1] << endl;
    print(v3);
    v3.pop_back();
    print(v3);
    v3.clear();
    cout << v3.empty() << endl;

    return 0;
}