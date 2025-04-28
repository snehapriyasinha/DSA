#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int val)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int val = 5;
    int pos = linearSearch(arr, len, val);
    if (pos == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index " << pos;
    }
    return 0;
}