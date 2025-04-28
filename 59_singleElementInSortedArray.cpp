#include <iostream>
#include <vector>
using namespace std;

// TC = O(logn)
// SC = O(1)
int singleElement(vector<int> vec)
{
    int len = vec.size();

    // CASE 1: if vector has single element
    if (len == 0)
    {
        return vec[0];
    }

    // CASE 2:
    int st = 0, end = len - 1, mid;
    while (st <= end)
    {
        mid = st + (end - st) / 2;

        // CASE 2.1: corner cases if mid is 0th or n-1th term
        if (mid == 0 && vec[mid] != vec[mid + 1])
        {
            return mid;
        }
        // CASE 2.2
        if (mid == len - 1 && vec[mid] != vec[mid - 1])
        {
            return mid;
        }

        // CASE 2.3
        if (vec[mid] != vec[mid - 1] && vec[mid] != vec[mid + 1])
        {
            return mid;
        }

        // CASE 2.3.1
        if (mid % 2 == 0)
        { // L&R even elements
            if (vec[mid] == vec[mid - 1])
            { // mid makes pair with prev meaning again left has odd elements and answer lies in odd side
                end = mid - 1;
            }
            else if (vec[mid] == vec[mid + 1])
            { // mid makes pair with next meaning again right has odd elements and answer lies in odd side
                st = mid + 1;
            }
        }
        // CASE 2.3.2
        else if (mid % 2 != 0)
        { // L&R odd elements
            if (vec[mid] == vec[mid - 1])
            {
                st = mid + 1;
            }
            else if (vec[mid] == vec[mid + 1])
            {
                end = mid - 1;
            }
        }
    }
}
int main()
{
    vector<int> vec = {1, 1, 2, 3, 3, 5, 5, 6, 6};
    vector<int> vec2 = {3, 3, 7, 7, 10, 11, 11};
    cout << "Position of single element in {1, 1, 2, 3, 3, 5, 5, 6, 6}: " << singleElement(vec) << endl;
    cout << "Position of single element in {3, 3, 7, 7, 10, 11, 11}: " << singleElement(vec2);
    return 0;
}