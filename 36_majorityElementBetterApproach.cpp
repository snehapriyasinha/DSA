#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// in any array majority element is the element occuring more than n/2 times i.e. element exists in more than half the array
// in any array only one majority element exists, because if an element has taken more than half places it means any other existing element is atleast one less than the majority element
// O(nlogn)

int main()
{
    vector<int> vec = {10, 1, 2, 2, 10, 2, 2, 2, -3};
    sort(vec.begin(), vec.end());
    int len = vec.size();
    int majority = len / 2, cnt = 1;
    for (int i = 1; i < len; i++)
    {
        if (vec[i] == vec[i - 1]) // checking with previous because in case of [i]==[i+1] if last element is majority element then array index out of bounds exception for [i+1]
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }
        if (cnt > majority)
        {
            cout << "Majority element: " << vec[i];
            return 0;
        }
    }
    return 0; // wouldn't be executed since assuming majority element always exists
}