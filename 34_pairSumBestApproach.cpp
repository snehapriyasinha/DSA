#include <iostream>
#include <vector>
using namespace std;

// give a pair from array/vector that sums up to be sum (assume a valid pair always occurs to add up to make the sum)
// INPUT: [1,2,3,6] and sum=3
// OUTPUT: 1, 2 as 1+2=3
// assumption the array is sorted
// O(n)

vector<int> pairSumUsingVectorRecursion(vector<int> v, int sum, int st, int end)
{
    int len = v.size();
    vector<int> ansVec;
    int i = st, j = end;
    while (i < j) // do this addition till i<j because at one point i=j that means pointing to same elemnt single element can't make a pair
    {
        // if 1st + last ==sum then print
        if (v[i] + v[j] == sum)
        {
            ansVec.push_back(i);
            ansVec.push_back(j);
            return ansVec;
        }
        // if 1st + last >sum means element before last should be added to 1st that might be true
        else if (v[i] + v[j] > sum)
        {
            j--;
            pairSumUsingVectorRecursion(v, sum, i, j);
        }
        // if 1st + last < sum means 2nd and last element should be added to get a even bigger sum that might be true
        else if (v[i] + v[j] < sum)
        {
            i++;
            pairSumUsingVectorRecursion(v, sum, i, j);
        }
    }
    return ansVec;
}

vector<int> pairSumUsingVector(vector<int> v, int sum, int st, int end)
{
    int len = v.size();
    vector<int> ansVec;
    int i = 0, j = end - 1, pairSum;
    while (i < j)
    {
        pairSum = v[i] + v[j];
        if (pairSum == sum)
        {
            ansVec.push_back(i);
            ansVec.push_back(j);
            return ansVec;
        }
        else if (pairSum > sum)
        {
            j--;
        }
        else if (pairSum < sum)
        {
            i++;
        }
    }
    return ansVec;
}

int main()
{

    // vector implementation
    // vector<int> vec = {20, 9, 3, 17, 10}; ERROREOUS as the array is not sorted
    vector<int> vec = {2, 9, 31, 17, 19}; // sorted array
    int sum = 19;
    int len = vec.size();

    vector<int> pairRec = pairSumUsingVectorRecursion(vec, sum, 0, len - 1);
    cout << "With recursion: " << endl
         << pairRec[0] << ", " << pairRec[1] << endl;
    vector<int> pair = pairSumUsingVector(vec, sum, 0, len);
    cout << "Without recursion: " << endl
         << pair[0] << ", " << pair[1] << endl;

    return 0;
}