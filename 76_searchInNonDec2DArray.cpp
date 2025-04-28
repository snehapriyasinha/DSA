#include <iostream>
#include <vector>
using namespace std;
// 1 2 3
// 3 4 5
// 6 7 8
// TC = O(log mn)
int binarySearchForRow(vector<vector<int>> &v, int row, int col, int target)
{
    int stR = 0, endR = row - 1, c = col - 1;
    while (stR <= endR)
    {
        int midR = stR + (endR - stR) / 2;
        if (target >= v[midR][0] && target <= v[midR][c]) // row found
        {
            return midR;
        }
        else if (target > v[midR][c]) // go down
        {
            stR = midR + 1;
        }
        else // go up
        {
            endR = midR - 1;
        }
    }
    return -1;
}

bool binarySearchForTarget(vector<vector<int>> &v, int row, int col, int target)
{
    int targetR = binarySearchForRow(v, row, col, target);
    if (targetR == -1)
    {
        return false;
    }
    int st = 0, end = col - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (target == v[targetR][mid]) // target found in row
        {
            return true;
        }
        else if (target > v[targetR][mid]) // go right of mid
        {
            st = mid + 1;
        }
        else // go left of mid
        {
            end = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> v = {{1, 2, 4}, {5, 6, 9}, {10, 18, 26}};
    cout << "Enter key: ";
    int target;
    cin >> target;
    if (binarySearchForTarget(v, v.size(), v[0].size(), target))
    {
        cout << "Found.";
    }
    else
    {
        cout << "Not found!";
    }
    return 0;
}