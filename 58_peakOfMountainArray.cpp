#include <iostream>
#include <vector>
using namespace std;

// TC = O(logn)
// assuming peak always exists, minimum 3 elements in vector, no duplicates
int peakOfMountainArray(vector<int> vec)
{
    int st = 1, end = vec.size() - 2, mid;
    // if peak exists then 0th and n-1th term can never be peak element
    // in _case mid might be 0th or n-1th term so 0-1th or nth term doesn't exist so array index out of bounds exception hence init st and end with possible values of peak like 1st and n-2nd term

    while (st <= end)
    {
        mid = st + ((end - st) / 2);
        if (vec[mid - 1] <= vec[mid] && vec[mid] >= vec[mid + 1])
        { // left of mid is small and right of mid is small meaning it is peak
            return mid;
        }
        // one of above condition is false, so check which one was true in order to see decide whether to go to left or right search
        else if (vec[mid - 1] < vec[mid])
        { // mid lies on increasing slope so peak lies on right side
            st = mid + 1;
        }
        else if (vec[mid] > vec[mid + 1]) // mid lies on decreasing slope so peak lies of left side
        {
            end = mid - 1;
        }
    }
}
int main()
{
    vector<int> vec = {1, 3, 8, 9, 5, 2};
    cout << "Position of peak element: " << peakOfMountainArray(vec);
    return 0;
}