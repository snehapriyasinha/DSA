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

void insertionSort(vector<int> v)
{
    int n = v.size();
    int current, prev, temp;
    for (int i = 1; i < n; i++)
    {
        current = v[i];
        prev = i - 1;
        while (v[prev] > current && prev >= 0)
        {
            v[prev + 1] = v[prev];
            prev--;
        }
        v[prev + 1] = current;
    }
    displayArray(v);
}

int main()
{
    vector<int> v = {2, 1, 5, 3, 4, 10, 9};
    insertionSort(v);
    return 0;
}