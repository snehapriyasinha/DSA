#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // inverted triangle pattern
    //     1
    //   1 2 1
    // 1 2 3 2 1
    int num, num2;
    for (int i = 0; i < n; i++)
    {
        num = 1;
        for (int j = 0; j < n - i - 1; j++) // space (n-i-1) times run for line1: 3-0-1=2 spaces
        {
            cout << " ";
        }
        for (int k = 1; k <= i + 1; k++) // then (i+1) times run line1: 0 to 0+1 =1 element
        {
            cout << k;
        }
        for (int p = i; p >= 1; p--) // then backward loop from (i to 1) times run OR forward loop (0 to i-1) times run  for line1: 0 to -1= nothing prints
        {
            cout << p;
        }
        cout << endl;
    }
    return 0;
}