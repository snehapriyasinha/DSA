#include <iostream>
#include <vector>
using namespace std;

// give a pair from array/vector that sums up to be sum (assume a valid pair always occurs to add up to make the sum)
// INPUT: [1,2,3,6] and sum=3
// OUTPUT: 1, 2 as 1+2=3
// O(n^2)
vector<int> pairSumUsingVector(vector<int> v, int sum)
{
    int len = v.size();
    vector<int> ansVec;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (v[i] + v[j] == sum)
            {
                ansVec.push_back(i);
                ansVec.push_back(j);
                // return ansVec;//if one first pair needed only end here
            }
        }
    }
    return ansVec; // if all pairs needed then continue checking and return the final vector
}

int main()
{
    int sum = 19;

    int arr[5] = {9, 2, 3, 17, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "array implementation: " << endl;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << i << ", " << j;
                // return 0;//if one first pair needed only end here
                cout << endl; // if all pairs needed then continue checking
            }
        }
    }

    vector<int> vec = {9, 2, 3, 17, 10};
    vector<int> pair = pairSumUsingVector(vec, sum);
    cout << "vector implementation: " << endl;
    // cout << pair[0] << ", " << pair[1];//if one first pair needed only end here

    int i = 0;
    while (i < pair.size()) // if all pairs needed then continue checking
    {
        cout << pair[i] << ", " << pair[i + 1] << endl;
        i += 2;
    }
    return 0;
}