#include <iostream>
#include <vector>
using namespace std;

// {1, 2, 3, 4}
// {24, 12, 8, 6}
// O(n)
int main()
{
    vector<int> vec = {1, 2, 3, 4};
    int len = vec.size(), prod = 1;
    vector<int> ans(len, 0);

    for (int i = 0; i < len; i++)
    {
        prod *= vec[i];
    }

    // totalProduct/that positionElement
    // 24/1=24, 24/2=12 and so
    for (int j = 0; j < len; j++)
    {
        ans[j] = prod / vec[j];
    }
    for (int a : ans)
    {
        cout << a << " ";
    }
    return 0;
}