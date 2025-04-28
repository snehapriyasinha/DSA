#include <iostream>
#include <vector>
using namespace std;

// {1, 2, 3, 4}
// {24, 12, 8, 6}
// TC = O(n)
// SC = O(n)
int main()
{
    vector<int> vec = {1, 2, 3, 4};
    int len = vec.size(), prod = 1;
    vector<int> ans(len, 1);
    vector<int> leftPrefix(len, 1);
    vector<int> rightSuffix(len, 1);

    // prefix product
    // leftPrefix[0]=1
    for (int i = 1; i < len; i++)
    {
        leftPrefix[i] = leftPrefix[i - 1] * vec[i - 1];
        // leftPrefix[1] = leftPrefix[0] * vec[0] = 1*1 = 1
        // leftPrefix[2] = leftPrefix[1] * vec[1] = 1*2 = 2
        // leftPrefix[3] = leftPrefix[2] * vec[2] = 2*3 = 6
    }

    // suffix product
    // rightPrefix[3]=1
    for (int i = len - 2; i >= 0; i--)
    {
        rightSuffix[i] = rightSuffix[i + 1] * vec[i + 1];
        // rightSuffix[2] = rightSuffix[3] * vec[3] = 1*4 = 4
        // rightSuffix[1] = rightSuffix[2] * vec[2] = 4*3 = 12
        // rightSuffix[0] = rightSuffix[1] * vec[1] = 12*2 = 24
    }

    for (int j = 0; j < len; j++)
    {
        ans[j] = leftPrefix[j] * rightSuffix[j];
        // ans[0] = leftPrefix[0] * rightSuffix[0] = 1*24 = 24
        // ans[1] = leftPrefix[1] * rightSuffix[1] = 1*12 = 12
        // ans[2] = leftPrefix[2] * rightSuffix[2] = 2*4 = 8
        // ans[3] = leftPrefix[3] * rightSuffix[3] = 6*1 = 6
    }
    for (int a : ans)
    {
        cout << a << " ";
    }
    return 0;
}