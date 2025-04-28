#include <iostream>
#include <vector>
using namespace std;

// TC=O(n*n)

vector<int> getTwoSumIndices(vector<int> v, int size, int target, vector<int> &ans)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (v[i] + v[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {5, 2, 11, 7, 15};
    int target = 9;
    vector<int> ans;
    ans = getTwoSumIndices(v, v.size(), target, ans);
    if (ans.size() > 0)
    {
        cout << ans[0] << " and " << ans[1];
    }

    return 0;
}
