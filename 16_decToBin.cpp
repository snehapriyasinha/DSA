#include <iostream>
using namespace std;

int decToBin(int n)
{
    int rem, pow = 1, bin = 0;
    while (n)
    {
        rem = n % 2;
        bin += (rem * pow);
        n /= 2;
        pow *= 10;
    }
    return bin;
}
int main()
{
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    cout << decToBin(n);
    return 0;
}