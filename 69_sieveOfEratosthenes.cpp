#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter the upper limit: ";
    int n;
    cin >> n;
    if (n < 2)
    {
        return 0;
    }
    vector<int> prime(n, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }

    for (int k = 2; k < n; k++)
    {
        if (prime[k])
        {
            cout << k << " ";
        }
    }
    return 0;
}