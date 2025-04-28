#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<vector<int>> s;

void getAllCombinations(vector<int> v, int idx, int target, vector<int> &comb, vector<vector<int>> &ans)
{

    if (target < 0 || idx == v.size())
    {
        return;
    }
    if (target == 0)
    {
        if (s.find(comb) == s.end())
        {
            ans.push_back(comb);
            s.insert(comb);
        }

        return;
    }

    comb.push_back(v[idx]);
    // include once
    getAllCombinations(v, idx + 1, target - v[idx], comb, ans);
    // include many
    getAllCombinations(v, idx, target - v[idx], comb, ans);

    comb.pop_back(); // remove the included element before calling for exclusion cases
    // exclude
    getAllCombinations(v, idx + 1, target, comb, ans);
}

int main()
{
    vector<int> vec;
    int target, l, num;
    cout << "Enter array size: ";
    cin >> l;

    cout << "Array elements: ";
    for (int i = 0; i < l; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    cout << "Enter target: ";
    cin >> target;

    vector<vector<int>> ans;
    vector<int> comb;
    getAllCombinations(vec, 0, target, comb, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << ", ";
        }
        cout << endl;
    }
    return 0;
}