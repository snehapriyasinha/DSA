#include <iostream>
#include <vector>
using namespace std;

vector<int> linearSearch2DArray(vector<vector<int>> &v, int row, int target)
{
    vector<int> ans(2, -1); // initialise vector of 2 size with values -1
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (target == v[i][j])
            {
                ans[0] = i; // update both -1 with index values
                ans[1] = j;
                return ans;
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> v = {{2, 1, 4}, {5, 22, 3}};
    int target;
    cout << "Enter key: ";
    cin >> target;
    vector<int> idx = linearSearch2DArray(v, v.size(), target);
    int row = idx[0];
    int col = idx[1];
    if (row != -1)
    {
        cout << "Found at: " << row << "," << col;
    }
    else
    {
        cout << "Not found!";
    }
    return 0;
}