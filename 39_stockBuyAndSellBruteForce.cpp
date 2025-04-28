#include <iostream>
using namespace std;

// sell only if bought on previous day
// O(n^2)
int main()
{
    int arr[] = {7, 1, 5, 6, 3, 4};
    int n = 6;
    int maxProfit = 0, currProfit;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            currProfit = arr[i] - arr[j];
            maxProfit = max(maxProfit, currProfit);
        }
    }
    cout << maxProfit;
    return 0;
}