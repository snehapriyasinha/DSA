#include <iostream>
#include <vector>
using namespace std;

// TC = O(logn) - everytime vector decreases to half
// SC = o(1)
int binarySearch(vector<int> vec, int target)
{
    int len = vec.size();
    int st = 0, end = len - 1, mid;

    while (st <= end) // only run till start<=end else unnessary repetition
    // not < but <= because at worst case last element is target then = required
    {
        // mid = (st + end) / 2;
        //  if st=INT_MAX and end=INT_MAX then INT_MAX+INT_MAX = overflow in integer therefore we use alternative formula
        //  st+((end-st)/2) simplify to get same (st+end)/2, but by writing it in this way you avoid overflorw, INT_MAX-INT_MAX =0 other case also still smaller value then we are saved

        mid = st + ((end - st) / 2);
        if (vec[mid] > target)
        {
            end = mid - 1;
        }
        else if (vec[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1; // target doesn't exist in vector
}
int main()
{
    vector<int> vec = {-3, 3, 6, 88, 500};
    int target;
    cout << "Enter target: ";
    cin >> target;
    cout << binarySearch(vec, target);
    return 0;
}