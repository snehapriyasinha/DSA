#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

void displayArray(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

void bubbleSort(vector<int> v)
{
    int n = v.size();
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    displayArray(v);
}

int main()
{
    vector<int> v = {2, 1, 5, 3, 4, 9};
    bubbleSort(v);
    return 0;
}