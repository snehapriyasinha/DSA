#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter number: ";
    int n;
    cin >> n;
    cout << "No. of digits via log function: " << (int)(log10(n) + 1) << endl;

    int rem, rev = 0, cnt = 0;
    while (n != 0)
    {
        rem = n % 10;
        cnt++;
        rev = rev * 10 + rem;
        n /= 10;
    }
    cout << "Count the digits via while: " << cnt << endl;
    cout << "Reverse via while: " << rev;
    return 0;
}