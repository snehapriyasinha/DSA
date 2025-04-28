#include <stdio.h>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> v, int stalls, int cows, int mid)
{
    int maxDistance = mid;
    int cow = 1;
    int lastStallOccupiedPostion = v[0];
    for (int i = 0; i < stalls; i++)
    {
        if ((v[i] - lastStallOccupiedPostion) >= maxDistance)
        {
            cow++;
            lastStallOccupiedPostion = v[i];
        }
        if (cows == cow)
        {
            return true;
        }
    }
    return false;
}

int maxPossibleMinDistance(vector<int> v, int stalls, int cows)
{
    sort(v.begin(), v.end());
    int st = 1, end = v[stalls - 1] - v[0], mid, ans = -1;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (isValid(v, stalls, cows, mid))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {1, 2, 8, 4, 9};
    int stalls = v.size();
    int cows = 3;
    int ans;
    ans = maxPossibleMinDistance(v, stalls, cows);
    cout << "Maximum possible minimum distance: " << ans;
    return 0;
}