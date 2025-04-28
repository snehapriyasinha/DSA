#include <iostream>
using namespace std;

// Fibonacci series

void fibonacciSeries(int n)
{
    int a = 0, b = 1, sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << a << endl;
        }
        else if (i == 2)
        {
            cout << a << endl
                 << b << endl;
        }
        else
        {
            sum = a + b;
            cout << sum << endl;
            a = b;
            b = sum;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the value n: " << endl;
    cin >> n;
    cout << "Fibonacci series still " << n << endl;
    fibonacciSeries(n);
    return 0;
}