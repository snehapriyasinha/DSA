#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (arr[i] == arr2[j])
            {
                cout << arr[i] << endl;
            }
        }
    }
    return 0;
}