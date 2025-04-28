#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 15, 222, 1, -15, 24};
    int len = sizeof(arr) / sizeof(arr[0]);

    int small = arr[0];
    int large = INT16_MIN; // put max = minimum possible number
    for (int i = 0; i < len; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        // small=min(arr[i], small)

        if (arr[i] > large)
        {
            large = arr[i];
        }
        // largest = max(arr[i], largest);
    }
    cout << "Smallest number: " << small << endl;
    cout << "Largest number: " << large << endl;
    return 0;
}