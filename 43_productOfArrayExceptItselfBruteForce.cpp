#include <iostream>
#include <vector>
using namespace std;

// {1, 2, 3, 4}
// {24, 12, 8, 6}
// O(n^2)
int main()
{
    vector<int> vec = {1, 2, 3, 4};
    vector<int> ans;
    int len = vec.size();
    int j = 0, k, prod = 1;
    while (j < len)
    {
        prod = 1;
        for (k = 0; k < len; k++)
        {
            if (k == j)
            {
                continue;
            }
            prod *= vec[k];
        }
        ans.push_back(prod);
        j++;
    }
    for (int a : ans)
    {
        cout << a << " ";
    }
    return 0;
}