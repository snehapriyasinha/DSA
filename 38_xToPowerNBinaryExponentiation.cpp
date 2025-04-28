#include <iostream>
using namespace std;

// x^n
// O(log n)
int main()
{
    int n, rem, bin = 0, pow = 1, power;
    double ans = 1.0, x; // due to negative power problem
    cout << "Enter base x: ";
    cin >> x;
    cout << "Enter power n: ";
    cin >> n;

    // corner cases //not necessary as anyways handled by our code below
    //  if(n==0){
    //      cout<<1;
    //      return 0;
    //  }
    //  if(x==0){
    //      cout<<0;
    //      return 0;
    //  }

    if (n < 0)
    {
        x = 1 / x;
        n = -(n);
    }

    // get the binary of power n
    // if 1, the multiply it with x,then x^2, then x^4 and so on
    // for x, x^2, x^4, do the square of previous each time that is x=x*x i.e x=x^2*x^2=x^4
    while (n > 0)
    {                // while binaryform > 0
        rem = n % 2; // good we get right most digit only

        // since we dont need to output binaryForm thats why commented only use each digit of binaryform
        //  bin=bin+(rem*pow);
        //  pow=pow*10;

        if (rem == 1)
        {
            ans = ans * x;
        }
        x = x * x;
        n = n / 2;
    }
    cout << ans;

    return 0;
}