#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int maxRowSum(vector<vector<int>> &v, int row)
{
    int maxSum = INT_MIN;
    int sum;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < v[i].size(); j++)
        {
            sum += v[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }
    return maxSum;
}
int main()
{
    vector<vector<int>> v = {{2, 100, 4}, {5, 22, 3}};
    int maxSum = maxRowSum(v, v.size());
    cout << "Maximum row sum: " << maxSum;
    return 0;
}