#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {-11, -2, -3, -1, -5}; // edge/corner case

    // int arr[5] = {1, -2, 3, 4, -5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int currentSum = 0, maxSum = INT16_MIN;

    for (int i = 0; i < len; i++) // one loop runs
    {
        // cout << "max" << maxSum << endl;
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        // maxSum must be calculated before restting currentSum=0 so that it has one value atleast in edge/corner case [-1,-2,-2,-4] here if we set currentSum=0 before finding max then ans will give 0 where actuall ans is a negative number only
        // once a max is set then keep checking for currentSUm that is this element only(as everything before is negative so made 0 logically 0+this is only happening each time and check if this single is bigger than olderMax or not) and max if this is big then it becomes max else max is max then set current this =0 so it does'nt continue to make bigger negatives

        if (currentSum < 0)
        {
            // cout << "currSum" << currentSum << endl;

            // we are only setting current sum 0 i.e. maxSUm is still 1 so it is not lost it is just that 1,-2 subarray is thrown away are it gives a big negative while we already have positive maxSum=1
            currentSum = 0;
        }
    }
    cout << "Maximum subarray sum = " << maxSum;
    return 0;
}