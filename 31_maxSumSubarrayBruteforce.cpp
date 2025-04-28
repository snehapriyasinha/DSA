#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, -2, 3, -4, 7};
    // int arr[5] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int currentSum = 0, maxSum = arr[0];

    for (int i = 0; i < len; i++) // to decide start point eg 0
    {
        currentSum = 0;
        for (int j = i; j < len; j++) // to decide end point here 4
        {
            // no need of another loop because we don't need to print it from start to end but only keep adding each end to same start as require the max sum that's why
            currentSum += arr[j];
            // eg 1 then 1+2=3 then 3+3=6 then 6+4=10 then 10+5=15 for start=1
            //  2 then 2+3=5 then 5+4=9 then 9+5=14 for start=2
            // and so on

            // then keep judging maximum after every operation start with 1 or with 2 or 3 or so on as old maxSum is stored and checked against newSum each each
            maxSum = max(currentSum, maxSum); // only if this part of array is giving more sum change maxSum var else not
        }
        // cout << endl; // after finish of one start here 0 give nextline befor next start that is 1
    }
    cout << "Maximum subarray sum = " << maxSum;
    return 0;
}