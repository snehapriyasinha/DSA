#include <iostream>
using namespace std;

void swapMinMax(int arr[], int size)
{
    int temp;
    int small = INT16_MAX;
    int large = INT16_MIN;
    int small_pos, large_pos;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            small_pos = i;
        }
        if (arr[i] > large)
        {
            large = arr[i];
            large_pos = i;
        }
    }
    // cout << small_pos << endl
    //      << large_pos << endl;
    temp = arr[small_pos];
    arr[small_pos] = arr[large_pos];
    arr[large_pos] = temp;
}

int main()
{
    int arr[] = {5, 15, 222, 1, -15, 24};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "Original" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Swapped min and max" << endl;
    swapMinMax(arr, len);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}