#include <iostream>
#include <vector>
using namespace std;

// in any array majority element is the element occuring more than n/2 times i.e. element exists in more than half the array
// in any array only one majority element exists, because if an element has taken more than half places it means any other existing element is atleast one less than the majority element
// O(n^2)

int main()
{
    vector<int> vec = {1, 2, 3, 4, 3, 3, 3};
    int len = vec.size();
    int majority = len / 2, cnt;
    for (int i = 0; i < len; i++)
    {
        cnt = 0;
        for (int j = 0; j < len; j++)
        {
            if (vec[i] == vec[j])
            {
                cnt++;
            }
        }
        if (cnt > majority)
        {
            cout << "Majority element: " << vec[i];
            return 0;
        }
    }
    return 0; // wouldn't be executed since assuming majority element always exists
}