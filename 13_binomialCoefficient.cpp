#include <iostream>
using namespace std;

// nCr=n!/r!(n-r)!
int factorial(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        num *= i;
    }
    return num;
}

int binomialCoeffient(int n, int r)
{
    int factN = factorial(n);
    int factR = factorial(r);
    int factNMinusR = factorial(n - r);
    int ans = factN / (factR * factNMinusR);
    return ans;
}

int main()
{
    int n, r;
    cout << "Enter values for n and r: " << endl;
    cin >> n >> r;
    if (n >= r)
    {
        cout << "Binomial Coefficient = " << binomialCoeffient(n, r) << endl;
    }
    else
    {
        cout << "n must be greater than or equal to r!";
    }
    return 0;
}