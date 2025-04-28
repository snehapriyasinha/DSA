#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    vector<char> vec2(4, 's');

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    for (char ch : vec2)
    {
        cout << ch << " ";
    }
    return 0;
}