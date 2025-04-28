#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int minColSum(vector<vector<int>> &v, int row)
{
    int minSum = INT_MAX;
    int sum, ans;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < v[i].size(); j++)
        {
            sum += v[j][i];
        }
        if (sum < minSum)
        {
            minSum = sum;
            ans = i;
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> v = {{2000, 100, 4}, {5, 22, 3}, {15, 2, 30}};
    int minSumCol = minColSum(v, v.size());
    cout << "Column with minimum sum: " << minSumCol;
    return 0;
}