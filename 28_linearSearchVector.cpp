#include <iostream>
#include <vector>
using namespace std;

// linear search using vector

int linearSearchVector(vector<int> vec, int n, int val) // copy of vector is passed that is call by reference as no need of making any changes into the vector here
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (val == vec.at(i))
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> vec = {};
    int n, i, val, res = 0, search, result;
    cout << "Enter the size of vector: ";
    cin >> n;
    cout << endl
         << "Enter the values: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> val;
        vec.push_back(val);
    }
    cout << endl
         << "Value to search: " << endl;
    cin >> search;

    result = linearSearchVector(vec, n, search);

    if (result != -1)
    {
        cout << search << " found at index " << result;
    }
    else
    {
        cout << search << " not found in vector";
    }
    return 0;
}