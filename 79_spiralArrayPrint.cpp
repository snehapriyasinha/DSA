#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    int m = 4, n = 4;
    int arr[m][n] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int stR = 0, stC = 0, endR = m - 1, endC = n - 1;

    while (stR <= endR && stC <= endC) // Change condition to <= for proper boundary checking
    {
        // Traverse the top row
        for (int i = stC; i <= endC; i++)
        {
            vec.push_back(arr[stR][i]);
        }
        stR++;

        // Traverse the right column
        for (int i = stR; i <= endR; i++)
        {
            vec.push_back(arr[i][endC]);
        }
        endC--;

        // Traverse the bottom row, if there are still rows remaining
        if (stR <= endR)
        {
            for (int i = endC; i >= stC; i--)
            {
                vec.push_back(arr[endR][i]);
            }
            endR--;
        }

        // Traverse the left column, if there are still columns remaining
        if (stC <= endC)
        {
            for (int i = endR; i >= stR; i--)
            {
                vec.push_back(arr[i][stC]);
            }
            stC++;
        }
    }

    // Print the result
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << ", ";
    }

    return 0;
}
