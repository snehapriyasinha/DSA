#include <iostream>
#include <vector>
using namespace std;

// reversing original vector

vector<int> reverseVector(vector<int> &vec, int n) //& ensures pass by reference that is original vector is passed all changes will reflect in main too
{
    int i = 0, j = n - 1, temp;
    while (i < j)
    {
        temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp;
        i++;
        j--;
    }
    return vec;
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

    reverseVector(vec, n);
    for (int v : vec) // original array is changed
    {
        cout << v << " ";
    }
    return 0;
}