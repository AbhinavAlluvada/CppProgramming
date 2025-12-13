#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
pair<int, int> max_min(vector<int> vect)
{
    sort(vect.begin(), vect.end());
    return {vect.back(), vect.front()};
}
pair<int, int> maxy_nosorting(vector<int> vect)
{
    int mx = 0, mn = vect[0];
    for (auto x : vect)
    {
        mx = max(mx, x);
        mn = min(mn, x);
    }
    return {mx, mn};
}
int main()
{
    vector<int> vect = {1, 2, 3, 4, -1, 45, 3};
    auto result = max_min(vect);
    cout << "Max: " << result.first << endl;
    cout << "Min: " << result.second << endl;
    cout << "----------------" << endl;
    cout << "No Sorting: " << endl;
    auto result2 = maxy_nosorting(vect);
    cout << "Max: " << result2.first << endl;
    cout << "Min: " << result2.second << endl;
    return 0;
}