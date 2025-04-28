#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int diagonalSum(vector<vector<int>> &v, int row)
{
    int sum = 0;
    int cols = v[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                sum += v[i][j];
            }
            else if (j == cols - 1 - i) // else if makes sure for odd size matrix center element is taken once only in if condition
            {
                sum += v[i][j];
            }
        }
    }
    return sum;
}
int main()
{
    vector<vector<int>> v = {{2, 1, 4}, {5, 22, 3}, {0, 8, 6}};
    int dSum = diagonalSum(v, v.size());
    cout << "Diagonals' sum: " << dSum;
    return 0;
}