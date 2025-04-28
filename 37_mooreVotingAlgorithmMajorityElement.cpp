#include <iostream>
#include <vector>
using namespace std;

// INPUT: {1,2,1}
// OUTPUT: 1 as 1 ocurrs more than size/2 times (3/2 = 1.5 = 1)
// O(n)

int main()
{
    vector<int> vec = {10, 1, 2, 2, 10, 2, 2, 2, -3}; // test case majority element exists
    // vector<int> vec2 = {10, 1, 2, 2, 10, 2, 29, 29, -3};//test case: majority element does not exists
    int len = vec.size();
    int majority = len / 2, cnt = 0, majElement;
    for (int i = 1; i < len; i++)
    {
        if (cnt == 0)
        {
            majElement = vec[i];
        }
        if (majElement == vec[i])
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    // cout << "Majority element: " << majElement;//If majority element definitely exists

    // suppose there is a chance no majority element exists
    int freq = 0;
    for (int i = 0; i < len; i++)
    {
        if (vec[i] == majElement)
        {
            freq++;
        }
    }
    if (freq > majority)
    {
        cout << "Majority element: " << majElement;
    }
    else
    {
        cout << "No majority element exists!";
    }
    return 0;
}