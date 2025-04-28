#include <iostream>
#include <vector>
using namespace std;

// INPUT: [2,7,2]
// OUTPUT: 7
int main()
{
    vector<int> vec = {};
    int n, i, val, res = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << endl
         << "Enter the values: " << endl;
    for (i = 0; i < n; i++) // make sure to inter a set containing all duplets and one single number eg: [1,2,1,2,3]
    {
        cin >> val;
        vec.push_back(val);
    }
    for (int v : vec)
    {
        // 2^2=0 (10 ^ 10 = 00) therefore all duplets will be cancelled out, then 0^singleNumber=singleNumber i.e. 0^7=7 (000 ^ 111 = 111)
        // each time XOR with the so far obtained result
        res ^= v;
    }
    cout << "Single number = " << res;
    return 0;
}