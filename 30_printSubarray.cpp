#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    // try to find pattern
    // for 0th: 0,1,2,3,4 (all subarrays starting with 0)
    // for 1st: 1,2,3,4
    // for 2nd: 2,3,4
    // for 3rd: 3,4
    // for 4th: 4
    for (int i = 0; i < len; i++) // to decide start point eg 0
    {
        for (int j = i; j < len; j++) // to decide end point here 4
        {
            for (int k = i; k <= j; k++) // to each time print 0-0 0-1 0-2 0-3 0-4
            {
                cout << arr[k];
            }
            cout << " "; // after each subarray give space
        }
        cout << endl; // after finish of one start here 0 give nextline befor next start that is 1
    }
    return 0;
}