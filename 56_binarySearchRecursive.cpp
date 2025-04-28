#include <iostream>
#include <vector>
using namespace std;

// TC = O(logn)
// SC = O(logn) = as call stack is formed
int binarySearchRecursive(vector<int> vec, int target, int start, int end)
{
    int st = start, ed = end, mid;
    mid = st + ((ed - st) / 2);
    if (vec[mid] > target)
    {
        ed = mid - 1;
        return binarySearchRecursive(vec, target, st, ed);
    }
    else if (vec[mid] < target)
    {
        st = mid + 1;
        return binarySearchRecursive(vec, target, st, ed);
    }
    else
    {
        return mid;
    }
    return -1; // target doesn't exist in vector
}
int main()
{
    vector<int> vec = {-3, 3, 6, 88, 500};
    int len = vec.size();
    int target;
    cout << "Enter target: ";
    cin >> target;
    cout << "Position of target: " << binarySearchRecursive(vec, target, 0, len);
    return 0;
}