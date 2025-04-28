#include <stdio.h>
#include <vector>
using namespace std;

bool isValid(vector<int> v, int boards, int painters, int mid)
{
    int maxAllowedBoards = mid;
    int painter = 1;
    int board = 0;
    for (int i = 0; i < boards; i++)
    {
        if (v[i] > maxAllowedBoards)
        {
            return false;
        }
        if (v[i] + board <= maxAllowedBoards)
        {
            board += v[i];
        }
        else
        {
            painter++;
            board = v[i];
        }
    }
    return painter <= painters;
    // If boards can be assigned to less than painters painters then, it can be assigned to exactly painters painters as well
    // return painter == painters;
}

int minPossibleMaxAreaPainted(vector<int> v, int boards, int painters)
{
    int sum, max = v[0];
    for (int i = 0; i < boards; i++)
    {
        sum += v[i];
        if (max < v[i])
        {
            max = v[i];
        }
    }
    int mid, st = max, end = sum, ans = -1;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (isValid(v, boards, painters, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {40, 30, 10, 20};
    int boards = v.size();
    int painters = 2;
    int ans = minPossibleMaxAreaPainted(v, boards, painters);
    printf("Minimum possible maximum board painted: %d", ans);
    return 0;
}