#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

// TC = O(n^2)

void displayArray(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

void selectionSort(vector<int> v)
{
    int n = v.size();
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int smallIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[smallIndex])
            {
                smallIndex = j;
            }
        }
        temp = v[i];
        v[i] = v[smallIndex];
        v[smallIndex] = temp;
    }
    displayArray(v);
}

int main()
{
    vector<int> v = {2, 1, 5, 3, 4, 9};
    selectionSort(v);
    return 0;
}