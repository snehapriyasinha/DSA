#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0) // because b is always small so it will turn to 0 first
    {
        return a;
    }
    return gcd(b, a % b); // after modulo number erturned becomes smaller therefore in second argument
}
int main()
{
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    int ans = gcd(a, b);
    cout << "GCD: " << ans << endl;
    int lcm = (a * b) / ans;
    cout << "LCM: " << lcm;
    return 0;
}