#include <iostream>
#include <vector>
using namespace std;

// O(n^2)
int main()
{
    vector<int> vec;
    vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int len = vec.size(), width, height, left, right, area, maxWater = 0;

    // find all possible containers
    for (int i = 0; i < len; i++)
    {
        left = vec[i];                    // left boundary
        for (int j = i + 1; j < len; j++) // every possible right boundary
        {
            width = j - i; // x axis
            right = vec[j];
            height = min(left, right);
            area = width * height; // calculating area(kinda volume) = (width*boundary with less height)
            maxWater = max(area, maxWater);
        }
    }
    cout << maxWater;
    return 0;
}