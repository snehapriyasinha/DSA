#include <iostream>
using namespace std;

int main()
{
    int arr[] = {7, 1, 5, 6, 3, 4};
    int n = 6;
    int bestBuy = arr[0], maxProfit = 0;
    for (int i = 1; i < n; i++)
    // day 0 is fixed for buy intially thats why start looking for sell from day1 as if you sell on same day then profit=0 which is already set
    {
        if (arr[i] > bestBuy) // as already set to zero if sell<buy means -negative makes no sense better is 0 profit that is same day buy and sell
        { 
            maxProfit = max(arr[i] - bestBuy, maxProfit); // max of(sellToday-bestBuy, maxProfit)
        }
        bestBuy = min(arr[i], bestBuy); // see if this was a buy day actually instead of sell day that is smaller value buy than existing buy price
    }
    cout << maxProfit;
    return 0;
}