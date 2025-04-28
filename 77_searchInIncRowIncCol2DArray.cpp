#include <iostream>
#include <vector>
using namespace std;
// 1 2 3
// 8 9 10
// 9 11 42
// TC = O(log m+n)

bool binarySearchForTarget(vector<vector<int>> &v, int row, int col, int target)
{
    int r = 0, c = col - 1, mid;
    while (r < row && c >= 0)
    {
        mid = r + (c - r) / 2; // working without this as well but this is optimistaion
        if (target == v[r][c])
        { // v[r][c] taking top right element = 3
            return true;
        }
        else if (target > v[r][c])
        { // go down as values increase downwards in column
            r++;
        }
        else if (target < v[r][c])
        { // go left as value decreases left in row
            c--;
        }
    }
    return false;
}

int main()
{4
    vector<vector<int>> v = {{1, 2, 4}, {8, 9, 10}, {9, 11, 42}};
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