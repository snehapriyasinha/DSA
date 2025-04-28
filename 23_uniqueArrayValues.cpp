#include <iostream>
using namespace std;

void uniqueValues(int arr[], int size)
{
    int cnt;
    for (int i = 0; i < size; i++)
    {
        cnt = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
            }
        }
        if (cnt == 1) // occurs once only arr[i]==arr[i] cnt=1, for other cases cnt=2,3...
        {
            cout << arr[i] << endl;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 2, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    uniqueValues(arr, len);

    return 0;
}