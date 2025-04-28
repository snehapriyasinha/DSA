#include <iostream>
using namespace std;

int binToDec(int n)
{
    int rem, pow = 1, dec = 0;
    while (n)
    { 
        rem = n % 10;
        dec += (rem * pow);
        n /= 10;
        pow *= 2;
    }
    return dec;
}
int main()
{
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << binToDec(n);
    return 0;
}