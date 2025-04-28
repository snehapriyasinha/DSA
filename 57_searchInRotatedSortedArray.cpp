#include <iostream>
#include <vector>
using namespace std;

// TC = O(logn)
int searchRotatedSortedArray(vector<int> vec, int target)
{
    int st = 0, end = vec.size() - 1, mid;
    while (st <= end)
    {
        mid = st + ((end - st) / 2);
        if (vec[mid] == target)
        {
            return mid;
        }
        else
        {
            if (vec[st] < vec[mid]) // left of mid is sorted
            {
                if (target >= vec[st] && target <= vec[mid])
                { // target lies  in left sorted
                    end = mid - 1;
                }
                else
                { // target lies in right unsorted
                    st = mid + 1;
                }
            }
            else if (vec[mid] < vec[end]) // right of mid is sorted
            {
                if (target >= vec[mid] && target <= vec[end])
                { // target lies in right sorted
                    st = mid + 1;
                }
                else
                { // target lies in left unsorted
                    end = mid - 1;
                }
            }
        }
    }

    return -1; // target doesn't exist in vector
}
int main()
{
    vector<int> vec = {3, 4, 5, 6, 7, 0, 1, 2};
    int target;
    cout << "Enter target: ";
    cin >> target;
    cout << "Position of target: " << searchRotatedSortedArray(vec, target);
    return 0;
}