#include <iostream>
using namespace std;

// prime number series
void checkPrime(int num)
{
    bool flag = true;
    if (num == 2)
    {
        cout << 2 << endl;
    }
    else
    {
        for (int i = 2; i <= num - 1; i++)
        {
            if (num % i == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << num << endl;
        }
    }
}

void primeNumberSeries(int n)
{
    for (int j = 2; j <= n; j++)
    {
        checkPrime(j);
    }
}

int main()
{
    int n;
    cout << "Enter the value: " << endl;
    cin >> n;
    cout << "Prime numbers from 1 to " << n << endl;
    primeNumberSeries(n);
    return 0;
}