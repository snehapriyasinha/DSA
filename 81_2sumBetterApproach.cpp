#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// TC=O(log n)
vector<int> getTwoSumIndices(vector<int> v, int size, int target, vector<int> &ans)
{
    unordered_map<int, int> m;
    for (int i = 0; i < size; i++)
    {
        int first = v[i];
        int second = target - first;
        if (m.find(second) != m.end())
        {
            ans.push_back(m[second]);
            ans.push_back(i);
            return ans;
        }
        m[v[i]] = i;
    }
    return ans;
}

int main()
{
    vector<int> v = {5, 2, 11, 7, 15};
    int target = 13;
    vector<int> ans;
    ans = getTwoSumIndices(v, v.size(), target, ans);
    if (ans.size() > 0)
    {
        cout << ans[0] << " and " << ans[1];
    }

    return 0;
}
