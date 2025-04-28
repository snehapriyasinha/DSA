#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void reverseArrayTwoPointerApproach(int arr[], int size)
{
    int temp;
    int i = 0, j = size - 1;
    while (i < j)
    // even array at one point j surpasses i, i>j useless orignal
    // odd array at one point i=j
    // therefore do swap only till i<j
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << "Reversed simple approach" << endl;
    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << "Reversed 2 pointer approach" << endl;
    reverseArrayTwoPointerApproach(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}