#include <iostream>
#include <vector>
using namespace std;

// {1, 2, 3, 4}
// {24, 12, 8, 6}
// TC = O(n)
// SC = O(1)

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    int len = vec.size(), prod = 1;
    vector<int> ans(len, 1);

    // avoid making extra vectors and making it a O(n) space complexity
    // prefix product
    // leftPrefix[0]=1
    for (int i = 1; i < len; i++)
    {
        ans[i] = ans[i - 1] * vec[i - 1];
        // directly put prefix in ans
    }

    // suffix product
    // rightPrefix[3]=1
    int suffix = 1;
    for (int i = len - 2; i >= 0; i--)
    {
        suffix = suffix * vec[i + 1];
        ans[i] = ans[i] * suffix;
        // calculate suffix
        // directly multiply ans(i.e. prefix stored) with suffix in ans vector only
    }
    for (int a : ans)
    {
        cout << a << " ";
    }
    return 0;
}